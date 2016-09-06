#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-10.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Class for element of '@BuildFileList' list                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_BuildFileList : public cCollectionElement {
  public : GALGAS_BuildFileList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                             const GALGAS_string & in_mFileName,
                                             const GALGAS_string & in_mBuildReference
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

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_BuildFileList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mAttribute_mFileReference, mObject.mAttribute_mFileName, mObject.mAttribute_mBuildReference COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_BuildFileList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileReference" ":" ;
  mObject.mAttribute_mFileReference.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFileName" ":" ;
  mObject.mAttribute_mFileName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBuildReference" ":" ;
  mObject.mAttribute_mBuildReference.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList::GALGAS_BuildFileList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                      const GALGAS_string & in_mFileReference,
                                                      const GALGAS_string & in_mFileName,
                                                      const GALGAS_string & in_mBuildReference
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = NULL ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::addAssign_operation (const GALGAS_string & inOperand0,
                                                const GALGAS_string & inOperand1,
                                                const GALGAS_string & inOperand2
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                 const GALGAS_string inOperand1,
                                                 const GALGAS_string inOperand2,
                                                 const GALGAS_uint inInsertionIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                 GALGAS_string & outOperand1,
                                                 GALGAS_string & outOperand2,
                                                 const GALGAS_uint inRemoveIndex,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
      outOperand0 = p->mObject.mAttribute_mFileReference ;
      outOperand1 = p->mObject.mAttribute_mFileName ;
      outOperand2 = p->mObject.mAttribute_mBuildReference ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_popFirst (GALGAS_string & outOperand0,
                                            GALGAS_string & outOperand1,
                                            GALGAS_string & outOperand2,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::setter_popLast (GALGAS_string & outOperand0,
                                           GALGAS_string & outOperand1,
                                           GALGAS_string & outOperand2,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::method_first (GALGAS_string & outOperand0,
                                         GALGAS_string & outOperand1,
                                         GALGAS_string & outOperand2,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::method_last (GALGAS_string & outOperand0,
                                        GALGAS_string & outOperand1,
                                        GALGAS_string & outOperand2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mAttribute_mFileReference ;
    outOperand1 = p->mObject.mAttribute_mFileName ;
    outOperand2 = p->mObject.mAttribute_mBuildReference ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::add_operation (const GALGAS_BuildFileList & inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mFileReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mFileReference ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mFileNameAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList::getter_mBuildReferenceAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mAttribute_mBuildReference ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mAttribute_mBuildReference ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @BuildFileList type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_BuildFileList::extractObject (const GALGAS_object & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList result ;
  const GALGAS_BuildFileList * p = (const GALGAS_BuildFileList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element::~ GALGAS_templateInstructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element::GALGAS_templateInstructionListAST_2D_element (const GALGAS_templateInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::constructor_new (const GALGAS_templateInstructionAST & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_templateInstructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionListAST_2D_element::objectCompare (const GALGAS_templateInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionAST GALGAS_templateInstructionListAST_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateInstructionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ("templateInstructionListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST_2D_element GALGAS_templateInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListAST_2D_element result ;
  const GALGAS_templateInstructionListAST_2D_element * p = (const GALGAS_templateInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (void) :
mAttribute_mExpression (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element::~ GALGAS_templateInstructionIfBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element::GALGAS_templateInstructionIfBranchListAST_2D_element (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                            const GALGAS_templateInstructionListAST & inOperand1) :
mAttribute_mExpression (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::constructor_new (const GALGAS_templateExpressionAST & inOperand0,
                                                                                                                            const GALGAS_templateInstructionListAST & inOperand1 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionIfBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionIfBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionIfBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionIfBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionIfBranchListAST_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionIfBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInstructionIfBranchListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionIfBranchListAST_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @templateInstructionIfBranchListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ("templateInstructionIfBranchListAST-element",
                                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionIfBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionIfBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionIfBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionIfBranchListAST_2D_element GALGAS_templateInstructionIfBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionIfBranchListAST_2D_element result ;
  const GALGAS_templateInstructionIfBranchListAST_2D_element * p = (const GALGAS_templateInstructionIfBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionIfBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionIfBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) :
mAttribute_mConstantList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element::~ GALGAS_templateInstructionSwitchBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element::GALGAS_templateInstructionSwitchBranchListAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                    const GALGAS_templateInstructionListAST & inOperand1) :
mAttribute_mConstantList (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListAST_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_templateInstructionListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                                                    const GALGAS_templateInstructionListAST & inOperand1 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionSwitchBranchListAST_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantList.objectCompare (inOperand.mAttribute_mConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionSwitchBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mConstantList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::drop (void) {
  mAttribute_mConstantList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListAST_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionSwitchBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListAST_2D_element::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionSwitchBranchListAST_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @templateInstructionSwitchBranchListAST-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ("templateInstructionSwitchBranchListAST-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListAST_2D_element GALGAS_templateInstructionSwitchBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST_2D_element result ;
  const GALGAS_templateInstructionSwitchBranchListAST_2D_element * p = (const GALGAS_templateInstructionSwitchBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) :
mAttribute_mConstantList (),
mAttribute_mInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::~ GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                                                                        const GALGAS_templateInstructionListForGeneration & inOperand1) :
mAttribute_mConstantList (inOperand0),
mAttribute_mInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                             GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                                                                        const GALGAS_templateInstructionListForGeneration & inOperand1 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantList.objectCompare (inOperand.mAttribute_mConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mConstantList.isValid () && mAttribute_mInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mConstantList.drop () ;
  mAttribute_mInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionSwitchBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::getter_mConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           @templateInstructionSwitchBranchListForGeneration-element type                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ("templateInstructionSwitchBranchListForGeneration-element",
                                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element result ;
  const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element * p = (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element::~ GALGAS_lexicalInstructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element::GALGAS_lexicalInstructionListAST_2D_element (const GALGAS_lexicalInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::constructor_new (const GALGAS_lexicalInstructionAST & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalInstructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalInstructionListAST_2D_element::objectCompare (const GALGAS_lexicalInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalInstructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionListAST_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalInstructionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ("lexicalInstructionListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element GALGAS_lexicalInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST_2D_element result ;
  const GALGAS_lexicalInstructionListAST_2D_element * p = (const GALGAS_lexicalInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (void) :
mAttribute_mLexicalRule () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element::~ GALGAS_lexicalRuleListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element::GALGAS_lexicalRuleListAST_2D_element (const GALGAS_abstractLexicalRuleAST & inOperand0) :
mAttribute_mLexicalRule (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::constructor_new (const GALGAS_abstractLexicalRuleAST & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRuleListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRuleListAST_2D_element::objectCompare (const GALGAS_lexicalRuleListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRule.objectCompare (inOperand.mAttribute_mLexicalRule) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalRuleListAST_2D_element::isValid (void) const {
  return mAttribute_mLexicalRule.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST_2D_element::drop (void) {
  mAttribute_mLexicalRule.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @lexicalRuleListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalRule.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST GALGAS_lexicalRuleListAST_2D_element::getter_mLexicalRule (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRule ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalRuleListAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ("lexicalRuleListAST-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRuleListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element GALGAS_lexicalRuleListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST_2D_element result ;
  const GALGAS_lexicalRuleListAST_2D_element * p = (const GALGAS_lexicalRuleListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRuleListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (void) :
mAttribute_mWhileExpression (),
mAttribute_mWhileInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element::~ GALGAS_lexicalWhileBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element::GALGAS_lexicalWhileBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                          const GALGAS_lexicalInstructionListAST & inOperand1) :
mAttribute_mWhileExpression (inOperand0),
mAttribute_mWhileInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::constructor_new (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                          const GALGAS_lexicalInstructionListAST & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalWhileBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalWhileBranchListAST_2D_element::objectCompare (const GALGAS_lexicalWhileBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mWhileExpression.objectCompare (inOperand.mAttribute_mWhileExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mWhileInstructionList.objectCompare (inOperand.mAttribute_mWhileInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalWhileBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mWhileExpression.isValid () && mAttribute_mWhileInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST_2D_element::drop (void) {
  mAttribute_mWhileExpression.drop () ;
  mAttribute_mWhileInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @lexicalWhileBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalWhileBranchListAST_2D_element::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalWhileBranchListAST_2D_element::getter_mWhileInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mWhileInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalWhileBranchListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ("lexicalWhileBranchListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element GALGAS_lexicalWhileBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST_2D_element result ;
  const GALGAS_lexicalWhileBranchListAST_2D_element * p = (const GALGAS_lexicalWhileBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWhileBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (void) :
mAttribute_mSelectExpression (),
mAttribute_mSelectInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element::~ GALGAS_lexicalSelectBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element::GALGAS_lexicalSelectBranchListAST_2D_element (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                            const GALGAS_lexicalInstructionListAST & inOperand1) :
mAttribute_mSelectExpression (inOperand0),
mAttribute_mSelectInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::constructor_new (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                            const GALGAS_lexicalInstructionListAST & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSelectBranchListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalSelectBranchListAST_2D_element::objectCompare (const GALGAS_lexicalSelectBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelectExpression.objectCompare (inOperand.mAttribute_mSelectExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectInstructionList.objectCompare (inOperand.mAttribute_mSelectInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalSelectBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mSelectExpression.isValid () && mAttribute_mSelectInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST_2D_element::drop (void) {
  mAttribute_mSelectExpression.drop () ;
  mAttribute_mSelectInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @lexicalSelectBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalSelectBranchListAST_2D_element::getter_mSelectExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectBranchListAST_2D_element::getter_mSelectInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @lexicalSelectBranchListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ("lexicalSelectBranchListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element GALGAS_lexicalSelectBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST_2D_element result ;
  const GALGAS_lexicalSelectBranchListAST_2D_element * p = (const GALGAS_lexicalSelectBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSelectBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) :
mAttribute_mLexicalRoutineActualArgument () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::~ GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0) :
mAttribute_mLexicalRoutineActualArgument (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::constructor_new (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalRoutineActualArgument.objectCompare (inOperand.mAttribute_mLexicalRoutineActualArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::isValid (void) const {
  return mAttribute_mLexicalRoutineActualArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::drop (void) {
  mAttribute_mLexicalRoutineActualArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineCallActualArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalRoutineActualArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::getter_mLexicalRoutineActualArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRoutineActualArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexicalRoutineCallActualArgumentListAST-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ("lexicalRoutineCallActualArgumentListAST-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element result ;
  const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element * p = (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) :
mAttribute_mLexicalActualInputArgument () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::~ GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0) :
mAttribute_mLexicalActualInputArgument (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::constructor_new (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::objectCompare (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalActualInputArgument.objectCompare (inOperand.mAttribute_mLexicalActualInputArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::isValid (void) const {
  return mAttribute_mLexicalActualInputArgument.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::drop (void) {
  mAttribute_mLexicalActualInputArgument.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionCallActualArgumentListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalActualInputArgument.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::getter_mLexicalActualInputArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalActualInputArgument ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @lexicalFunctionCallActualArgumentListAST-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ("lexicalFunctionCallActualArgumentListAST-element",
                                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element result ;
  const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element * p = (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (void) :
mAttribute_mLength (),
mAttribute_mName (),
mAttribute_mTerminalName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element::~ GALGAS_tokenSortedlist_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element::GALGAS_tokenSortedlist_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_string & inOperand1,
                                                                      const GALGAS_string & inOperand2) :
mAttribute_mLength (inOperand0),
mAttribute_mName (inOperand1),
mAttribute_mTerminalName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tokenSortedlist_2D_element (GALGAS_uint::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE),
                                            GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_string & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_tokenSortedlist_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tokenSortedlist_2D_element::objectCompare (const GALGAS_tokenSortedlist_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLength.objectCompare (inOperand.mAttribute_mLength) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mName.objectCompare (inOperand.mAttribute_mName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalName.objectCompare (inOperand.mAttribute_mTerminalName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_tokenSortedlist_2D_element::isValid (void) const {
  return mAttribute_mLength.isValid () && mAttribute_mName.isValid () && mAttribute_mTerminalName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist_2D_element::drop (void) {
  mAttribute_mLength.drop () ;
  mAttribute_mName.drop () ;
  mAttribute_mTerminalName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tokenSortedlist_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @tokenSortedlist-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLength.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_tokenSortedlist_2D_element::getter_mLength (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLength ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tokenSortedlist_2D_element::getter_mName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tokenSortedlist_2D_element::getter_mTerminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @tokenSortedlist-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ("tokenSortedlist-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tokenSortedlist_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tokenSortedlist_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tokenSortedlist_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tokenSortedlist_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tokenSortedlist_2D_element GALGAS_tokenSortedlist_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tokenSortedlist_2D_element result ;
  const GALGAS_tokenSortedlist_2D_element * p = (const GALGAS_tokenSortedlist_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tokenSortedlist_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tokenSortedlist-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) :
mAttribute_mLexicalFormalArgumentMode (),
mAttribute_mLexicalFormalArgumentType (),
mAttribute_mArgumentNameForComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element::~ GALGAS_lexicalRoutineFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element::GALGAS_lexicalRoutineFormalArgumentList_2D_element (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                        const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                        const GALGAS_string & inOperand2) :
mAttribute_mLexicalFormalArgumentMode (inOperand0),
mAttribute_mLexicalFormalArgumentType (inOperand1),
mAttribute_mArgumentNameForComment (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::constructor_new (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                        const GALGAS_lexicalTypeEnum & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalRoutineFormalArgumentList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalRoutineFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalRoutineFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalFormalArgumentMode.objectCompare (inOperand.mAttribute_mLexicalFormalArgumentMode) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalFormalArgumentType.objectCompare (inOperand.mAttribute_mLexicalFormalArgumentType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentNameForComment.objectCompare (inOperand.mAttribute_mArgumentNameForComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalRoutineFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mLexicalFormalArgumentMode.isValid () && mAttribute_mLexicalFormalArgumentType.isValid () && mAttribute_mArgumentNameForComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::drop (void) {
  mAttribute_mLexicalFormalArgumentMode.drop () ;
  mAttribute_mLexicalFormalArgumentType.drop () ;
  mAttribute_mArgumentNameForComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @lexicalRoutineFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalFormalArgumentMode.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLexicalFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList_2D_element::getter_mLexicalFormalArgumentMode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFormalArgumentMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList_2D_element::getter_mLexicalFormalArgumentType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalFormalArgumentType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList_2D_element::getter_mArgumentNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentNameForComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalRoutineFormalArgumentList-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ("lexicalRoutineFormalArgumentList-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList_2D_element GALGAS_lexicalRoutineFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineFormalArgumentList_2D_element result ;
  const GALGAS_lexicalRoutineFormalArgumentList_2D_element * p = (const GALGAS_lexicalRoutineFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) :
mAttribute_mLexicalType (),
mAttribute_mArgumentNameForComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element::~ GALGAS_lexicalFunctionFormalArgumentList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element::GALGAS_lexicalFunctionFormalArgumentList_2D_element (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                          const GALGAS_string & inOperand1) :
mAttribute_mLexicalType (inOperand0),
mAttribute_mArgumentNameForComment (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::constructor_new (const GALGAS_lexicalTypeEnum & inOperand0,
                                                                                                                          const GALGAS_string & inOperand1 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalFunctionFormalArgumentList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalFunctionFormalArgumentList_2D_element::objectCompare (const GALGAS_lexicalFunctionFormalArgumentList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexicalType.objectCompare (inOperand.mAttribute_mLexicalType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArgumentNameForComment.objectCompare (inOperand.mAttribute_mArgumentNameForComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_lexicalFunctionFormalArgumentList_2D_element::isValid (void) const {
  return mAttribute_mLexicalType.isValid () && mAttribute_mArgumentNameForComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::drop (void) {
  mAttribute_mLexicalType.drop () ;
  mAttribute_mArgumentNameForComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionFormalArgumentList_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @lexicalFunctionFormalArgumentList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexicalType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArgumentNameForComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalFunctionFormalArgumentList_2D_element::getter_mLexicalType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalFunctionFormalArgumentList_2D_element::getter_mArgumentNameForComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArgumentNameForComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalFunctionFormalArgumentList-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ("lexicalFunctionFormalArgumentList-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionFormalArgumentList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionFormalArgumentList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionFormalArgumentList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionFormalArgumentList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionFormalArgumentList_2D_element GALGAS_lexicalFunctionFormalArgumentList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionFormalArgumentList_2D_element result ;
  const GALGAS_lexicalFunctionFormalArgumentList_2D_element * p = (const GALGAS_lexicalFunctionFormalArgumentList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionFormalArgumentList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionFormalArgumentList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (void) :
mAttribute_mLeadingCharacterStrippedCount (),
mAttribute_mTerminalList (),
mAttribute_mLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element::~ GALGAS_guiLabelListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element::GALGAS_guiLabelListAST_2D_element (const GALGAS_uint & inOperand0,
                                                                      const GALGAS_terminalLabelListAST & inOperand1,
                                                                      const GALGAS_location & inOperand2) :
mAttribute_mLeadingCharacterStrippedCount (inOperand0),
mAttribute_mTerminalList (inOperand1),
mAttribute_mLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiLabelListAST_2D_element (GALGAS_uint::constructor_default (HERE),
                                            GALGAS_terminalLabelListAST::constructor_emptyList (HERE),
                                            GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                      const GALGAS_terminalLabelListAST & inOperand1,
                                                                                      const GALGAS_location & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_guiLabelListAST_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiLabelListAST_2D_element::objectCompare (const GALGAS_guiLabelListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLeadingCharacterStrippedCount.objectCompare (inOperand.mAttribute_mLeadingCharacterStrippedCount) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTerminalList.objectCompare (inOperand.mAttribute_mTerminalList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocation.objectCompare (inOperand.mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiLabelListAST_2D_element::isValid (void) const {
  return mAttribute_mLeadingCharacterStrippedCount.isValid () && mAttribute_mTerminalList.isValid () && mAttribute_mLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST_2D_element::drop (void) {
  mAttribute_mLeadingCharacterStrippedCount.drop () ;
  mAttribute_mTerminalList.drop () ;
  mAttribute_mLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiLabelListAST_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @guiLabelListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLeadingCharacterStrippedCount.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTerminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_guiLabelListAST_2D_element::getter_mLeadingCharacterStrippedCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeadingCharacterStrippedCount ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalLabelListAST GALGAS_guiLabelListAST_2D_element::getter_mTerminalList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_guiLabelListAST_2D_element::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @guiLabelListAST-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ("guiLabelListAST-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiLabelListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiLabelListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiLabelListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiLabelListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST_2D_element GALGAS_guiLabelListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_guiLabelListAST_2D_element result ;
  const GALGAS_guiLabelListAST_2D_element * p = (const GALGAS_guiLabelListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiLabelListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiLabelListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element::GALGAS_guiCommandLineOptionList_2D_element (void) :
mAttribute_mOptionComponent (),
mAttribute_mOptionIdentifier (),
mAttribute_mOptionChar (),
mAttribute_mOptionString (),
mAttribute_mComment () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element::~ GALGAS_guiCommandLineOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element::GALGAS_guiCommandLineOptionList_2D_element (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_string & inOperand1,
                                                                                        const GALGAS_char & inOperand2,
                                                                                        const GALGAS_string & inOperand3,
                                                                                        const GALGAS_string & inOperand4) :
mAttribute_mOptionComponent (inOperand0),
mAttribute_mOptionIdentifier (inOperand1),
mAttribute_mOptionChar (inOperand2),
mAttribute_mOptionString (inOperand3),
mAttribute_mComment (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_guiCommandLineOptionList_2D_element (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_char::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE),
                                                     GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_char & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_guiCommandLineOptionList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_guiCommandLineOptionList_2D_element::objectCompare (const GALGAS_guiCommandLineOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionComponent.objectCompare (inOperand.mAttribute_mOptionComponent) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionIdentifier.objectCompare (inOperand.mAttribute_mOptionIdentifier) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionChar.objectCompare (inOperand.mAttribute_mOptionChar) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionString.objectCompare (inOperand.mAttribute_mOptionString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mComment.objectCompare (inOperand.mAttribute_mComment) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_guiCommandLineOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionComponent.isValid () && mAttribute_mOptionIdentifier.isValid () && mAttribute_mOptionChar.isValid () && mAttribute_mOptionString.isValid () && mAttribute_mComment.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList_2D_element::drop (void) {
  mAttribute_mOptionComponent.drop () ;
  mAttribute_mOptionIdentifier.drop () ;
  mAttribute_mOptionChar.drop () ;
  mAttribute_mOptionString.drop () ;
  mAttribute_mComment.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_guiCommandLineOptionList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @guiCommandLineOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionComponent.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionChar.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mComment.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::getter_mOptionComponent (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponent ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::getter_mOptionIdentifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_char GALGAS_guiCommandLineOptionList_2D_element::getter_mOptionChar (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionChar ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::getter_mOptionString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_guiCommandLineOptionList_2D_element::getter_mComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mComment ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @guiCommandLineOptionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ("guiCommandLineOptionList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_guiCommandLineOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCommandLineOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_guiCommandLineOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_guiCommandLineOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiCommandLineOptionList_2D_element GALGAS_guiCommandLineOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_guiCommandLineOptionList_2D_element result ;
  const GALGAS_guiCommandLineOptionList_2D_element * p = (const GALGAS_guiCommandLineOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_guiCommandLineOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCommandLineOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (void) :
mAttribute_mKey (),
mAttribute_mContents () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element::~ GALGAS_textMacroList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element::GALGAS_textMacroList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1) :
mAttribute_mKey (inOperand0),
mAttribute_mContents (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_textMacroList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_textMacroList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_textMacroList_2D_element::objectCompare (const GALGAS_textMacroList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mKey.objectCompare (inOperand.mAttribute_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mContents.objectCompare (inOperand.mAttribute_mContents) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_textMacroList_2D_element::isValid (void) const {
  return mAttribute_mKey.isValid () && mAttribute_mContents.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList_2D_element::drop (void) {
  mAttribute_mKey.drop () ;
  mAttribute_mContents.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_textMacroList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @textMacroList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mContents.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList_2D_element::getter_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_textMacroList_2D_element::getter_mContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mContents ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @textMacroList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_textMacroList_2D_element ("textMacroList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_textMacroList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_textMacroList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_textMacroList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_textMacroList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList_2D_element GALGAS_textMacroList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_textMacroList_2D_element result ;
  const GALGAS_textMacroList_2D_element * p = (const GALGAS_textMacroList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_textMacroList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("textMacroList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element::GALGAS_importedLexiqueList_2D_element (void) :
mAttribute_mLexiqueClassName (),
mAttribute_mBlockComment (),
mAttribute_mTitle (),
mAttribute_mTextMacroList (),
mAttribute_mLabels () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element::~ GALGAS_importedLexiqueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element::GALGAS_importedLexiqueList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_textMacroList & inOperand3,
                                                                              const GALGAS_guiLabelListAST & inOperand4) :
mAttribute_mLexiqueClassName (inOperand0),
mAttribute_mBlockComment (inOperand1),
mAttribute_mTitle (inOperand2),
mAttribute_mTextMacroList (inOperand3),
mAttribute_mLabels (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_importedLexiqueList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_textMacroList::constructor_emptyList (HERE),
                                                GALGAS_guiLabelListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_string & inOperand2,
                                                                                              const GALGAS_textMacroList & inOperand3,
                                                                                              const GALGAS_guiLabelListAST & inOperand4 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_importedLexiqueList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_importedLexiqueList_2D_element::objectCompare (const GALGAS_importedLexiqueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLexiqueClassName.objectCompare (inOperand.mAttribute_mLexiqueClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBlockComment.objectCompare (inOperand.mAttribute_mBlockComment) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTitle.objectCompare (inOperand.mAttribute_mTitle) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTextMacroList.objectCompare (inOperand.mAttribute_mTextMacroList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabels.objectCompare (inOperand.mAttribute_mLabels) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_importedLexiqueList_2D_element::isValid (void) const {
  return mAttribute_mLexiqueClassName.isValid () && mAttribute_mBlockComment.isValid () && mAttribute_mTitle.isValid () && mAttribute_mTextMacroList.isValid () && mAttribute_mLabels.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList_2D_element::drop (void) {
  mAttribute_mLexiqueClassName.drop () ;
  mAttribute_mBlockComment.drop () ;
  mAttribute_mTitle.drop () ;
  mAttribute_mTextMacroList.drop () ;
  mAttribute_mLabels.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_importedLexiqueList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @importedLexiqueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLexiqueClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBlockComment.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTitle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTextMacroList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabels.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList_2D_element::getter_mLexiqueClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList_2D_element::getter_mBlockComment (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBlockComment ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_importedLexiqueList_2D_element::getter_mTitle (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTitle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_textMacroList GALGAS_importedLexiqueList_2D_element::getter_mTextMacroList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTextMacroList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_guiLabelListAST GALGAS_importedLexiqueList_2D_element::getter_mLabels (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabels ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @importedLexiqueList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ("importedLexiqueList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_importedLexiqueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_importedLexiqueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_importedLexiqueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_importedLexiqueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_importedLexiqueList_2D_element GALGAS_importedLexiqueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_importedLexiqueList_2D_element result ;
  const GALGAS_importedLexiqueList_2D_element * p = (const GALGAS_importedLexiqueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_importedLexiqueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("importedLexiqueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (void) :
mAttribute_mConstantName (),
mAttribute_mAssociatedValueTypeList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element::~ GALGAS_enumConstantListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element::GALGAS_enumConstantListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_unifiedTypeMapProxyList & inOperand1) :
mAttribute_mConstantName (inOperand0),
mAttribute_mAssociatedValueTypeList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_unifiedTypeMapProxyList & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumConstantListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantListForGeneration_2D_element::objectCompare (const GALGAS_enumConstantListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mConstantName.objectCompare (inOperand.mAttribute_mConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAssociatedValueTypeList.objectCompare (inOperand.mAttribute_mAssociatedValueTypeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mConstantName.isValid () && mAttribute_mAssociatedValueTypeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration_2D_element::drop (void) {
  mAttribute_mConstantName.drop () ;
  mAttribute_mAssociatedValueTypeList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantListForGeneration_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @enumConstantListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAssociatedValueTypeList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumConstantListForGeneration_2D_element::getter_mConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_enumConstantListForGeneration_2D_element::getter_mAssociatedValueTypeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedValueTypeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @enumConstantListForGeneration-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ("enumConstantListForGeneration-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantListForGeneration_2D_element GALGAS_enumConstantListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantListForGeneration_2D_element result ;
  const GALGAS_enumConstantListForGeneration_2D_element * p = (const GALGAS_enumConstantListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) :
mAttribute_mInsertOrReplaceDeclarationLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element::~ GALGAS_insertOrReplaceDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element::GALGAS_insertOrReplaceDeclarationListAST_2D_element (const GALGAS_location & inOperand0) :
mAttribute_mInsertOrReplaceDeclarationLocation (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_insertOrReplaceDeclarationListAST_2D_element (GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::constructor_new (const GALGAS_location & inOperand0 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_insertOrReplaceDeclarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_insertOrReplaceDeclarationListAST_2D_element::objectCompare (const GALGAS_insertOrReplaceDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInsertOrReplaceDeclarationLocation.objectCompare (inOperand.mAttribute_mInsertOrReplaceDeclarationLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_insertOrReplaceDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mInsertOrReplaceDeclarationLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::drop (void) {
  mAttribute_mInsertOrReplaceDeclarationLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_insertOrReplaceDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @insertOrReplaceDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInsertOrReplaceDeclarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_insertOrReplaceDeclarationListAST_2D_element::getter_mInsertOrReplaceDeclarationLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertOrReplaceDeclarationLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @insertOrReplaceDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ("insertOrReplaceDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_insertOrReplaceDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertOrReplaceDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_insertOrReplaceDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_insertOrReplaceDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST_2D_element GALGAS_insertOrReplaceDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_insertOrReplaceDeclarationListAST_2D_element result ;
  const GALGAS_insertOrReplaceDeclarationListAST_2D_element * p = (const GALGAS_insertOrReplaceDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_insertOrReplaceDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("insertOrReplaceDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element::GALGAS_mapStateTransitionSortedList_2D_element (void) :
mAttribute_mActionIndex (),
mAttribute_mActionName (),
mAttribute_mTargetStateIndex (),
mAttribute_mTargetStateName (),
mAttribute_mTransitionMessageKind (),
mAttribute_mTransitionMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element::~ GALGAS_mapStateTransitionSortedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element::GALGAS_mapStateTransitionSortedList_2D_element (const GALGAS_uint & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_uint & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                                const GALGAS_string & inOperand5) :
mAttribute_mActionIndex (inOperand0),
mAttribute_mActionName (inOperand1),
mAttribute_mTargetStateIndex (inOperand2),
mAttribute_mTargetStateName (inOperand3),
mAttribute_mTransitionMessageKind (inOperand4),
mAttribute_mTransitionMessage (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element GALGAS_mapStateTransitionSortedList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_uint & inOperand2,
                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                const GALGAS_mapAutomatonMessageKind & inOperand4,
                                                                                                                const GALGAS_string & inOperand5 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_mapStateTransitionSortedList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapStateTransitionSortedList_2D_element::objectCompare (const GALGAS_mapStateTransitionSortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActionIndex.objectCompare (inOperand.mAttribute_mActionIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetStateIndex.objectCompare (inOperand.mAttribute_mTargetStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetStateName.objectCompare (inOperand.mAttribute_mTargetStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionMessageKind.objectCompare (inOperand.mAttribute_mTransitionMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionMessage.objectCompare (inOperand.mAttribute_mTransitionMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapStateTransitionSortedList_2D_element::isValid (void) const {
  return mAttribute_mActionIndex.isValid () && mAttribute_mActionName.isValid () && mAttribute_mTargetStateIndex.isValid () && mAttribute_mTargetStateName.isValid () && mAttribute_mTransitionMessageKind.isValid () && mAttribute_mTransitionMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList_2D_element::drop (void) {
  mAttribute_mActionIndex.drop () ;
  mAttribute_mActionName.drop () ;
  mAttribute_mTargetStateIndex.drop () ;
  mAttribute_mTargetStateName.drop () ;
  mAttribute_mTransitionMessageKind.drop () ;
  mAttribute_mTransitionMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateTransitionSortedList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @mapStateTransitionSortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActionIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateTransitionSortedList_2D_element::getter_mActionIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateTransitionSortedList_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateTransitionSortedList_2D_element::getter_mTargetStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateTransitionSortedList_2D_element::getter_mTargetStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateTransitionSortedList_2D_element::getter_mTransitionMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateTransitionSortedList_2D_element::getter_mTransitionMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @mapStateTransitionSortedList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateTransitionSortedList_2D_element ("mapStateTransitionSortedList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateTransitionSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateTransitionSortedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateTransitionSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateTransitionSortedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList_2D_element GALGAS_mapStateTransitionSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapStateTransitionSortedList_2D_element result ;
  const GALGAS_mapStateTransitionSortedList_2D_element * p = (const GALGAS_mapStateTransitionSortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateTransitionSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateTransitionSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element::GALGAS_mapStateSortedList_2D_element (void) :
mAttribute_mStateIndex (),
mAttribute_mStateName (),
mAttribute_mStateMessageKind (),
mAttribute_mStateMessage (),
mAttribute_mTransitionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element::~ GALGAS_mapStateSortedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element::GALGAS_mapStateSortedList_2D_element (const GALGAS_uint & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_mapStateTransitionSortedList & inOperand4) :
mAttribute_mStateIndex (inOperand0),
mAttribute_mStateName (inOperand1),
mAttribute_mStateMessageKind (inOperand2),
mAttribute_mStateMessage (inOperand3),
mAttribute_mTransitionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element GALGAS_mapStateSortedList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_mapAutomatonMessageKind & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_mapStateTransitionSortedList & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapStateSortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_mapStateSortedList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapStateSortedList_2D_element::objectCompare (const GALGAS_mapStateSortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStateIndex.objectCompare (inOperand.mAttribute_mStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateName.objectCompare (inOperand.mAttribute_mStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateMessageKind.objectCompare (inOperand.mAttribute_mStateMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStateMessage.objectCompare (inOperand.mAttribute_mStateMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransitionList.objectCompare (inOperand.mAttribute_mTransitionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapStateSortedList_2D_element::isValid (void) const {
  return mAttribute_mStateIndex.isValid () && mAttribute_mStateName.isValid () && mAttribute_mStateMessageKind.isValid () && mAttribute_mStateMessage.isValid () && mAttribute_mTransitionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList_2D_element::drop (void) {
  mAttribute_mStateIndex.drop () ;
  mAttribute_mStateName.drop () ;
  mAttribute_mStateMessageKind.drop () ;
  mAttribute_mStateMessage.drop () ;
  mAttribute_mTransitionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapStateSortedList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @mapStateSortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStateMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransitionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_mapStateSortedList_2D_element::getter_mStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateSortedList_2D_element::getter_mStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_mapStateSortedList_2D_element::getter_mStateMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapStateSortedList_2D_element::getter_mStateMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStateMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateTransitionSortedList GALGAS_mapStateSortedList_2D_element::getter_mTransitionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransitionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @mapStateSortedList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapStateSortedList_2D_element ("mapStateSortedList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapStateSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapStateSortedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapStateSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapStateSortedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateSortedList_2D_element GALGAS_mapStateSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapStateSortedList_2D_element result ;
  const GALGAS_mapStateSortedList_2D_element * p = (const GALGAS_mapStateSortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapStateSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapStateSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element::GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) :
mAttribute_mStartStateIndex (),
mAttribute_mStartStateName (),
mAttribute_mCurrentStateIndex (),
mAttribute_mCurrentStateName (),
mAttribute_mFinalStateIndex (),
mAttribute_mFinalStateName (),
mAttribute_mBehaviourMessageKind (),
mAttribute_mBehaviourMessage () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element::~ GALGAS_branchBehaviourSortedListForMapOverride_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element::GALGAS_branchBehaviourSortedListForMapOverride_2D_element (const GALGAS_uint & inOperand0,
                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                      const GALGAS_uint & inOperand2,
                                                                                                                      const GALGAS_string & inOperand3,
                                                                                                                      const GALGAS_uint & inOperand4,
                                                                                                                      const GALGAS_string & inOperand5,
                                                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                                                      const GALGAS_string & inOperand7) :
mAttribute_mStartStateIndex (inOperand0),
mAttribute_mStartStateName (inOperand1),
mAttribute_mCurrentStateIndex (inOperand2),
mAttribute_mCurrentStateName (inOperand3),
mAttribute_mFinalStateIndex (inOperand4),
mAttribute_mFinalStateName (inOperand5),
mAttribute_mBehaviourMessageKind (inOperand6),
mAttribute_mBehaviourMessage (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element GALGAS_branchBehaviourSortedListForMapOverride_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                      const GALGAS_uint & inOperand2,
                                                                                                                                      const GALGAS_string & inOperand3,
                                                                                                                                      const GALGAS_uint & inOperand4,
                                                                                                                                      const GALGAS_string & inOperand5,
                                                                                                                                      const GALGAS_mapAutomatonMessageKind & inOperand6,
                                                                                                                                      const GALGAS_string & inOperand7 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_branchBehaviourSortedListForMapOverride_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_branchBehaviourSortedListForMapOverride_2D_element::objectCompare (const GALGAS_branchBehaviourSortedListForMapOverride_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mStartStateIndex.objectCompare (inOperand.mAttribute_mStartStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStartStateName.objectCompare (inOperand.mAttribute_mStartStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCurrentStateIndex.objectCompare (inOperand.mAttribute_mCurrentStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCurrentStateName.objectCompare (inOperand.mAttribute_mCurrentStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFinalStateIndex.objectCompare (inOperand.mAttribute_mFinalStateIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFinalStateName.objectCompare (inOperand.mAttribute_mFinalStateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBehaviourMessageKind.objectCompare (inOperand.mAttribute_mBehaviourMessageKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBehaviourMessage.objectCompare (inOperand.mAttribute_mBehaviourMessage) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_branchBehaviourSortedListForMapOverride_2D_element::isValid (void) const {
  return mAttribute_mStartStateIndex.isValid () && mAttribute_mStartStateName.isValid () && mAttribute_mCurrentStateIndex.isValid () && mAttribute_mCurrentStateName.isValid () && mAttribute_mFinalStateIndex.isValid () && mAttribute_mFinalStateName.isValid () && mAttribute_mBehaviourMessageKind.isValid () && mAttribute_mBehaviourMessage.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride_2D_element::drop (void) {
  mAttribute_mStartStateIndex.drop () ;
  mAttribute_mStartStateName.drop () ;
  mAttribute_mCurrentStateIndex.drop () ;
  mAttribute_mCurrentStateName.drop () ;
  mAttribute_mFinalStateIndex.drop () ;
  mAttribute_mFinalStateName.drop () ;
  mAttribute_mBehaviourMessageKind.drop () ;
  mAttribute_mBehaviourMessage.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchBehaviourSortedListForMapOverride_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @branchBehaviourSortedListForMapOverride-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mStartStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStartStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCurrentStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCurrentStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFinalStateIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFinalStateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBehaviourMessageKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBehaviourMessage.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mStartStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mStartStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mCurrentStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCurrentStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mCurrentStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCurrentStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mFinalStateIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFinalStateIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mFinalStateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFinalStateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapAutomatonMessageKind GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mBehaviourMessageKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBehaviourMessageKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_branchBehaviourSortedListForMapOverride_2D_element::getter_mBehaviourMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBehaviourMessage ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @branchBehaviourSortedListForMapOverride-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride_2D_element ("branchBehaviourSortedListForMapOverride-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchBehaviourSortedListForMapOverride_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchBehaviourSortedListForMapOverride_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchBehaviourSortedListForMapOverride_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchBehaviourSortedListForMapOverride_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride_2D_element GALGAS_branchBehaviourSortedListForMapOverride_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_branchBehaviourSortedListForMapOverride_2D_element result ;
  const GALGAS_branchBehaviourSortedListForMapOverride_2D_element * p = (const GALGAS_branchBehaviourSortedListForMapOverride_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchBehaviourSortedListForMapOverride_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchBehaviourSortedListForMapOverride-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList_2D_element::GALGAS_mapOverrideList_2D_element (void) :
mAttribute_mOverrideName (),
mAttribute_mBranchBehaviourSortedListForMapOverride (),
mAttribute_mBranchCombinationSortedListForMapOverride () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList_2D_element::~ GALGAS_mapOverrideList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList_2D_element::GALGAS_mapOverrideList_2D_element (const GALGAS_string & inOperand0,
                                                                      const GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                                      const GALGAS_branchBehaviourSortedListForMapOverride & inOperand2) :
mAttribute_mOverrideName (inOperand0),
mAttribute_mBranchBehaviourSortedListForMapOverride (inOperand1),
mAttribute_mBranchCombinationSortedListForMapOverride (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList_2D_element GALGAS_mapOverrideList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mapOverrideList_2D_element (GALGAS_string::constructor_default (HERE),
                                            GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (HERE),
                                            GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList_2D_element GALGAS_mapOverrideList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_branchBehaviourSortedListForMapOverride & inOperand1,
                                                                                      const GALGAS_branchBehaviourSortedListForMapOverride & inOperand2 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mapOverrideList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_mapOverrideList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mapOverrideList_2D_element::objectCompare (const GALGAS_mapOverrideList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOverrideName.objectCompare (inOperand.mAttribute_mOverrideName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBranchBehaviourSortedListForMapOverride.objectCompare (inOperand.mAttribute_mBranchBehaviourSortedListForMapOverride) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBranchCombinationSortedListForMapOverride.objectCompare (inOperand.mAttribute_mBranchCombinationSortedListForMapOverride) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mapOverrideList_2D_element::isValid (void) const {
  return mAttribute_mOverrideName.isValid () && mAttribute_mBranchBehaviourSortedListForMapOverride.isValid () && mAttribute_mBranchCombinationSortedListForMapOverride.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList_2D_element::drop (void) {
  mAttribute_mOverrideName.drop () ;
  mAttribute_mBranchBehaviourSortedListForMapOverride.drop () ;
  mAttribute_mBranchCombinationSortedListForMapOverride.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mapOverrideList_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @mapOverrideList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOverrideName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBranchBehaviourSortedListForMapOverride.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBranchCombinationSortedListForMapOverride.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_mapOverrideList_2D_element::getter_mOverrideName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverrideName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_mapOverrideList_2D_element::getter_mBranchBehaviourSortedListForMapOverride (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchBehaviourSortedListForMapOverride ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchBehaviourSortedListForMapOverride GALGAS_mapOverrideList_2D_element::getter_mBranchCombinationSortedListForMapOverride (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBranchCombinationSortedListForMapOverride ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapOverrideList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapOverrideList_2D_element ("mapOverrideList-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapOverrideList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapOverrideList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapOverrideList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapOverrideList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideList_2D_element GALGAS_mapOverrideList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapOverrideList_2D_element result ;
  const GALGAS_mapOverrideList_2D_element * p = (const GALGAS_mapOverrideList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapOverrideList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapOverrideList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element::GALGAS_semanticExpressionListAST_2D_element (void) :
mAttribute_mExpression (),
mAttribute_mEndOfExpressionLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element::~ GALGAS_semanticExpressionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element::GALGAS_semanticExpressionListAST_2D_element (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                          const GALGAS_location & inOperand1) :
mAttribute_mExpression (inOperand0),
mAttribute_mEndOfExpressionLocation (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element GALGAS_semanticExpressionListAST_2D_element::constructor_new (const GALGAS_semanticExpressionAST & inOperand0,
                                                                                                          const GALGAS_location & inOperand1 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticExpressionListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticExpressionListAST_2D_element::objectCompare (const GALGAS_semanticExpressionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExpression.objectCompare (inOperand.mAttribute_mExpression) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfExpressionLocation.objectCompare (inOperand.mAttribute_mEndOfExpressionLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticExpressionListAST_2D_element::isValid (void) const {
  return mAttribute_mExpression.isValid () && mAttribute_mEndOfExpressionLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST_2D_element::drop (void) {
  mAttribute_mExpression.drop () ;
  mAttribute_mEndOfExpressionLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticExpressionListAST_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @semanticExpressionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExpression.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionAST GALGAS_semanticExpressionListAST_2D_element::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_semanticExpressionListAST_2D_element::getter_mEndOfExpressionLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfExpressionLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @semanticExpressionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticExpressionListAST_2D_element ("semanticExpressionListAST-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticExpressionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticExpressionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticExpressionListAST_2D_element GALGAS_semanticExpressionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionListAST_2D_element result ;
  const GALGAS_semanticExpressionListAST_2D_element * p = (const GALGAS_semanticExpressionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticExpressionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (void) :
mAttribute_mActualParameter () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element::~ GALGAS_actualParameterListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element::GALGAS_actualParameterListAST_2D_element (const GALGAS_actualParameterAST & inOperand0) :
mAttribute_mActualParameter (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::constructor_new (const GALGAS_actualParameterAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actualParameterListAST_2D_element::objectCompare (const GALGAS_actualParameterListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mActualParameter.objectCompare (inOperand.mAttribute_mActualParameter) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actualParameterListAST_2D_element::isValid (void) const {
  return mAttribute_mActualParameter.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST_2D_element::drop (void) {
  mAttribute_mActualParameter.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actualParameterListAST_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @actualParameterListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterAST GALGAS_actualParameterListAST_2D_element::getter_mActualParameter (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualParameter ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @actualParameterListAST-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ("actualParameterListAST-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actualParameterListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actualParameterListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actualParameterListAST_2D_element GALGAS_actualParameterListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST_2D_element result ;
  const GALGAS_actualParameterListAST_2D_element * p = (const GALGAS_actualParameterListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actualParameterListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element::~ GALGAS_semanticInstructionListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element::GALGAS_semanticInstructionListAST_2D_element (const GALGAS_semanticInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::constructor_new (const GALGAS_semanticInstructionAST & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticInstructionListAST_2D_element::objectCompare (const GALGAS_semanticInstructionListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticInstructionListAST_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @semanticInstructionListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionAST GALGAS_semanticInstructionListAST_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @semanticInstructionListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ("semanticInstructionListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST_2D_element GALGAS_semanticInstructionListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListAST_2D_element result ;
  const GALGAS_semanticInstructionListAST_2D_element * p = (const GALGAS_semanticInstructionListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (void) :
mAttribute_mSemanticDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element::~ GALGAS_semanticDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element::GALGAS_semanticDeclarationListAST_2D_element (const GALGAS_semanticDeclarationAST & inOperand0) :
mAttribute_mSemanticDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::constructor_new (const GALGAS_semanticDeclarationAST & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticDeclarationListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticDeclarationListAST_2D_element::objectCompare (const GALGAS_semanticDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSemanticDeclaration.objectCompare (inOperand.mAttribute_mSemanticDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mSemanticDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST_2D_element::drop (void) {
  mAttribute_mSemanticDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListAST_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @semanticDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSemanticDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationListAST_2D_element::getter_mSemanticDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @semanticDeclarationListAST-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ("semanticDeclarationListAST-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListAST_2D_element GALGAS_semanticDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST_2D_element result ;
  const GALGAS_semanticDeclarationListAST_2D_element * p = (const GALGAS_semanticDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element::~ GALGAS_syntaxInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element::GALGAS_syntaxInstructionList_2D_element (const GALGAS_syntaxInstructionAST & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::constructor_new (const GALGAS_syntaxInstructionAST & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_syntaxInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxInstructionList_2D_element::objectCompare (const GALGAS_syntaxInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxInstructionList_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @syntaxInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @syntaxInstructionList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ("syntaxInstructionList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList_2D_element GALGAS_syntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList_2D_element result ;
  const GALGAS_syntaxInstructionList_2D_element * p = (const GALGAS_syntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (void) :
mAttribute_mSyntaxInstructionList (),
mAttribute_mEndOf_5F_instructions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element::~ GALGAS_listOfSyntaxInstructionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element::GALGAS_listOfSyntaxInstructionList_2D_element (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                              const GALGAS_location & inOperand1) :
mAttribute_mSyntaxInstructionList (inOperand0),
mAttribute_mEndOf_5F_instructions (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSyntaxInstructionList_2D_element (GALGAS_syntaxInstructionList::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::constructor_new (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                                              const GALGAS_location & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_listOfSyntaxInstructionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_listOfSyntaxInstructionList_2D_element::objectCompare (const GALGAS_listOfSyntaxInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxInstructionList.objectCompare (inOperand.mAttribute_mSyntaxInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOf_5F_instructions.objectCompare (inOperand.mAttribute_mEndOf_5F_instructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_listOfSyntaxInstructionList_2D_element::isValid (void) const {
  return mAttribute_mSyntaxInstructionList.isValid () && mAttribute_mEndOf_5F_instructions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList_2D_element::drop (void) {
  mAttribute_mSyntaxInstructionList.drop () ;
  mAttribute_mEndOf_5F_instructions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSyntaxInstructionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @listOfSyntaxInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionList GALGAS_listOfSyntaxInstructionList_2D_element::getter_mSyntaxInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_listOfSyntaxInstructionList_2D_element::getter_mEndOf_5F_instructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_instructions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @listOfSyntaxInstructionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ("listOfSyntaxInstructionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSyntaxInstructionList_2D_element GALGAS_listOfSyntaxInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList_2D_element result ;
  const GALGAS_listOfSyntaxInstructionList_2D_element * p = (const GALGAS_listOfSyntaxInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listOfSyntaxInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (void) :
mAttribute_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element::~ GALGAS_collectionValueElementList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element::GALGAS_collectionValueElementList_2D_element (const GALGAS_abstractCollectionValueElement & inOperand0) :
mAttribute_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::constructor_new (const GALGAS_abstractCollectionValueElement & inOperand0 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_collectionValueElementList_2D_element::objectCompare (const GALGAS_collectionValueElementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElement.objectCompare (inOperand.mAttribute_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_collectionValueElementList_2D_element::isValid (void) const {
  return mAttribute_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList_2D_element::drop (void) {
  mAttribute_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @collectionValueElementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElement GALGAS_collectionValueElementList_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @collectionValueElementList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ("collectionValueElementList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_collectionValueElementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_collectionValueElementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementList_2D_element GALGAS_collectionValueElementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList_2D_element result ;
  const GALGAS_collectionValueElementList_2D_element * p = (const GALGAS_collectionValueElementList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element::~ GALGAS_syntaxExtensions_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element::GALGAS_syntaxExtensions_2D_element (const GALGAS_string & inOperand0,
                                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxExtensions_2D_element (GALGAS_string::constructor_default (HERE),
                                             GALGAS_galgas_33_SyntaxExtensionListAST::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                        const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand1 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxExtensions_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxExtensions_2D_element::objectCompare (const GALGAS_syntaxExtensions_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxExtensions_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxExtensions_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxExtensions_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @syntaxExtensions-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_syntaxExtensions_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_syntaxExtensions_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @syntaxExtensions-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ("syntaxExtensions-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxExtensions_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxExtensions_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensions_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxExtensions_2D_element GALGAS_syntaxExtensions_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxExtensions_2D_element result ;
  const GALGAS_syntaxExtensions_2D_element * p = (const GALGAS_syntaxExtensions_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxExtensions_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensions-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (void) :
mAttribute_mInstructionList (),
mAttribute_mEndOfInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element::~ GALGAS_prologueEpilogueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element::GALGAS_prologueEpilogueList_2D_element (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                const GALGAS_location & inOperand1) :
mAttribute_mInstructionList (inOperand0),
mAttribute_mEndOfInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prologueEpilogueList_2D_element (GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                 GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::constructor_new (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                                const GALGAS_location & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prologueEpilogueList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prologueEpilogueList_2D_element::objectCompare (const GALGAS_prologueEpilogueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructionList.objectCompare (inOperand.mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prologueEpilogueList_2D_element::isValid (void) const {
  return mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList_2D_element::drop (void) {
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prologueEpilogueList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @prologueEpilogueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_prologueEpilogueList_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_prologueEpilogueList_2D_element::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @prologueEpilogueList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ("prologueEpilogueList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prologueEpilogueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prologueEpilogueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prologueEpilogueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prologueEpilogueList_2D_element GALGAS_prologueEpilogueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList_2D_element result ;
  const GALGAS_prologueEpilogueList_2D_element * p = (const GALGAS_prologueEpilogueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prologueEpilogueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element::~ GALGAS_templateInstructionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element::GALGAS_templateInstructionListForGeneration_2D_element (const GALGAS_templateInstructionForGeneration & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::constructor_new (const GALGAS_templateInstructionForGeneration & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_templateInstructionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateInstructionListForGeneration_2D_element::objectCompare (const GALGAS_templateInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateInstructionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @templateInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForGeneration GALGAS_templateInstructionListForGeneration_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @templateInstructionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ("templateInstructionListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration_2D_element GALGAS_templateInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionListForGeneration_2D_element result ;
  const GALGAS_templateInstructionListForGeneration_2D_element * p = (const GALGAS_templateInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element::~ GALGAS_semanticInstructionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element::GALGAS_semanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionForGeneration & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::constructor_new (const GALGAS_semanticInstructionForGeneration & inOperand0 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticInstructionListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticInstructionListForGeneration_2D_element::objectCompare (const GALGAS_semanticInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionListForGeneration_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @semanticInstructionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ("semanticInstructionListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration_2D_element GALGAS_semanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionListForGeneration_2D_element result ;
  const GALGAS_semanticInstructionListForGeneration_2D_element * p = (const GALGAS_semanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) :
mAttribute_mInstructionList (),
mAttribute_mEndOfInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::~ GALGAS_listOfSemanticInstructionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element::GALGAS_listOfSemanticInstructionListForGeneration_2D_element (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                            const GALGAS_location & inOperand1) :
mAttribute_mInstructionList (inOperand0),
mAttribute_mEndOfInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSemanticInstructionListForGeneration_2D_element (GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE),
                                                                       GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::constructor_new (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                                            const GALGAS_location & inOperand1 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_listOfSemanticInstructionListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_listOfSemanticInstructionListForGeneration_2D_element::objectCompare (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstructionList.objectCompare (inOperand.mAttribute_mInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfInstructionList.objectCompare (inOperand.mAttribute_mEndOfInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_listOfSemanticInstructionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mInstructionList.isValid () && mAttribute_mEndOfInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::drop (void) {
  mAttribute_mInstructionList.drop () ;
  mAttribute_mEndOfInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_listOfSemanticInstructionListForGeneration_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @listOfSemanticInstructionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration_2D_element::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_listOfSemanticInstructionListForGeneration_2D_element::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @listOfSemanticInstructionListForGeneration-element type                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ("listOfSemanticInstructionListForGeneration-element",
                                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listOfSemanticInstructionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSemanticInstructionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listOfSemanticInstructionListForGeneration_2D_element GALGAS_listOfSemanticInstructionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration_2D_element result ;
  const GALGAS_listOfSemanticInstructionListForGeneration_2D_element * p = (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listOfSemanticInstructionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListForGeneration_2D_element::GALGAS_semanticDeclarationListForGeneration_2D_element (void) :
mAttribute_mMessage (),
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListForGeneration_2D_element::~ GALGAS_semanticDeclarationListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListForGeneration_2D_element::GALGAS_semanticDeclarationListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_semanticDeclarationForGeneration & inOperand1) :
mAttribute_mMessage (inOperand0),
mAttribute_mDeclaration (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListForGeneration_2D_element GALGAS_semanticDeclarationListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_semanticDeclarationForGeneration & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticDeclarationListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_semanticDeclarationListForGeneration_2D_element::objectCompare (const GALGAS_semanticDeclarationListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMessage.objectCompare (inOperand.mAttribute_mMessage) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_semanticDeclarationListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mMessage.isValid () && mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListForGeneration_2D_element::drop (void) {
  mAttribute_mMessage.drop () ;
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_semanticDeclarationListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticDeclarationListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMessage.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_semanticDeclarationListForGeneration_2D_element::getter_mMessage (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration GALGAS_semanticDeclarationListForGeneration_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @semanticDeclarationListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2D_element ("semanticDeclarationListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationListForGeneration_2D_element GALGAS_semanticDeclarationListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration_2D_element result ;
  const GALGAS_semanticDeclarationListForGeneration_2D_element * p = (const GALGAS_semanticDeclarationListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (void) :
mAttribute_mSyntaxComponentName (),
mAttribute_mNonTerminalToAddCount () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element::~ GALGAS_nonTerminalToAddList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element::GALGAS_nonTerminalToAddList_2D_element (const GALGAS_string & inOperand0,
                                                                                const GALGAS_uint & inOperand1) :
mAttribute_mSyntaxComponentName (inOperand0),
mAttribute_mNonTerminalToAddCount (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalToAddList_2D_element (GALGAS_string::constructor_default (HERE),
                                                 GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_uint & inOperand1 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonTerminalToAddList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_nonTerminalToAddList_2D_element::objectCompare (const GALGAS_nonTerminalToAddList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxComponentName.objectCompare (inOperand.mAttribute_mSyntaxComponentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNonTerminalToAddCount.objectCompare (inOperand.mAttribute_mNonTerminalToAddCount) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_nonTerminalToAddList_2D_element::isValid (void) const {
  return mAttribute_mSyntaxComponentName.isValid () && mAttribute_mNonTerminalToAddCount.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList_2D_element::drop (void) {
  mAttribute_mSyntaxComponentName.drop () ;
  mAttribute_mNonTerminalToAddCount.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_nonTerminalToAddList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @nonTerminalToAddList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNonTerminalToAddCount.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_nonTerminalToAddList_2D_element::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_nonTerminalToAddList_2D_element::getter_mNonTerminalToAddCount (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalToAddCount ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @nonTerminalToAddList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ("nonTerminalToAddList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_nonTerminalToAddList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_nonTerminalToAddList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalToAddList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList_2D_element GALGAS_nonTerminalToAddList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList_2D_element result ;
  const GALGAS_nonTerminalToAddList_2D_element * p = (const GALGAS_nonTerminalToAddList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonTerminalToAddList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (void) :
mAttribute_mTypeName (),
mAttribute_mTargetVarCppName (),
mAttribute_mSourceLexicalAttributeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element::~ GALGAS_terminalCheckAssignementList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element::GALGAS_terminalCheckAssignementList_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_string & inOperand2) :
mAttribute_mTypeName (inOperand0),
mAttribute_mTargetVarCppName (inOperand1),
mAttribute_mSourceLexicalAttributeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalCheckAssignementList_2D_element (GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_terminalCheckAssignementList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_terminalCheckAssignementList_2D_element::objectCompare (const GALGAS_terminalCheckAssignementList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTypeName.objectCompare (inOperand.mAttribute_mTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetVarCppName.objectCompare (inOperand.mAttribute_mTargetVarCppName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSourceLexicalAttributeName.objectCompare (inOperand.mAttribute_mSourceLexicalAttributeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_terminalCheckAssignementList_2D_element::isValid (void) const {
  return mAttribute_mTypeName.isValid () && mAttribute_mTargetVarCppName.isValid () && mAttribute_mSourceLexicalAttributeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList_2D_element::drop (void) {
  mAttribute_mTypeName.drop () ;
  mAttribute_mTargetVarCppName.drop () ;
  mAttribute_mSourceLexicalAttributeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalCheckAssignementList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @terminalCheckAssignementList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList_2D_element::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList_2D_element::getter_mTargetVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_terminalCheckAssignementList_2D_element::getter_mSourceLexicalAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceLexicalAttributeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @terminalCheckAssignementList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ("terminalCheckAssignementList-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalCheckAssignementList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalCheckAssignementList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckAssignementList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalCheckAssignementList_2D_element GALGAS_terminalCheckAssignementList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList_2D_element result ;
  const GALGAS_terminalCheckAssignementList_2D_element * p = (const GALGAS_terminalCheckAssignementList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalCheckAssignementList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (void) :
mAttribute_mFilewrapperTemplateName (),
mAttribute_mFilewrapperTemplateFormalInputParameters (),
mAttribute_mTemplateInstructionListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element::~ GALGAS_filewrapperTemplateListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element::GALGAS_filewrapperTemplateListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand2) :
mAttribute_mFilewrapperTemplateName (inOperand0),
mAttribute_mFilewrapperTemplateFormalInputParameters (inOperand1),
mAttribute_mTemplateInstructionListForGeneration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                 GALGAS_templateInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                                const GALGAS_templateInstructionListForGeneration & inOperand2 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_filewrapperTemplateListForGeneration_2D_element::objectCompare (const GALGAS_filewrapperTemplateListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateName.objectCompare (inOperand.mAttribute_mFilewrapperTemplateName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilewrapperTemplateFormalInputParameters.objectCompare (inOperand.mAttribute_mFilewrapperTemplateFormalInputParameters) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateInstructionListForGeneration.objectCompare (inOperand.mAttribute_mTemplateInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_filewrapperTemplateListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFilewrapperTemplateName.isValid () && mAttribute_mFilewrapperTemplateFormalInputParameters.isValid () && mAttribute_mTemplateInstructionListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration_2D_element::drop (void) {
  mAttribute_mFilewrapperTemplateName.drop () ;
  mAttribute_mFilewrapperTemplateFormalInputParameters.drop () ;
  mAttribute_mTemplateInstructionListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_filewrapperTemplateListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @filewrapperTemplateListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperTemplateListForGeneration_2D_element::getter_mFilewrapperTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_filewrapperTemplateListForGeneration_2D_element::getter_mFilewrapperTemplateFormalInputParameters (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateFormalInputParameters ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListForGeneration GALGAS_filewrapperTemplateListForGeneration_2D_element::getter_mTemplateInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateInstructionListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @filewrapperTemplateListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ("filewrapperTemplateListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperTemplateListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration_2D_element GALGAS_filewrapperTemplateListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration_2D_element result ;
  const GALGAS_filewrapperTemplateListForGeneration_2D_element * p = (const GALGAS_filewrapperTemplateListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperTemplateListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element::GALGAS_collectionValueElementListForGeneration_2D_element (void) :
mAttribute_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element::~ GALGAS_collectionValueElementListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element::GALGAS_collectionValueElementListForGeneration_2D_element (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0) :
mAttribute_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element GALGAS_collectionValueElementListForGeneration_2D_element::constructor_new (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_collectionValueElementListForGeneration_2D_element::objectCompare (const GALGAS_collectionValueElementListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElement.objectCompare (inOperand.mAttribute_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_collectionValueElementListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration_2D_element::drop (void) {
  mAttribute_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_collectionValueElementListForGeneration_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @collectionValueElementListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCollectionValueElementForGeneration GALGAS_collectionValueElementListForGeneration_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @collectionValueElementListForGeneration-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ("collectionValueElementListForGeneration-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_collectionValueElementListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_collectionValueElementListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_collectionValueElementListForGeneration_2D_element GALGAS_collectionValueElementListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration_2D_element result ;
  const GALGAS_collectionValueElementListForGeneration_2D_element * p = (const GALGAS_collectionValueElementListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (void) :
mAttribute_mNonterminalName (),
mAttribute_mRuleIndex (),
mAttribute_mLabelImplementationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element::~ GALGAS_ruleDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element::GALGAS_ruleDeclarationList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_uint & inOperand1,
                                                                              const GALGAS_ruleLabelImplementationList & inOperand2) :
mAttribute_mNonterminalName (inOperand0),
mAttribute_mRuleIndex (inOperand1),
mAttribute_mLabelImplementationList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleDeclarationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_uint::constructor_default (HERE),
                                                GALGAS_ruleLabelImplementationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_uint & inOperand1,
                                                                                              const GALGAS_ruleLabelImplementationList & inOperand2 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ruleDeclarationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_ruleDeclarationList_2D_element::objectCompare (const GALGAS_ruleDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mNonterminalName.objectCompare (inOperand.mAttribute_mNonterminalName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRuleIndex.objectCompare (inOperand.mAttribute_mRuleIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLabelImplementationList.objectCompare (inOperand.mAttribute_mLabelImplementationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_ruleDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mNonterminalName.isValid () && mAttribute_mRuleIndex.isValid () && mAttribute_mLabelImplementationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList_2D_element::drop (void) {
  mAttribute_mNonterminalName.drop () ;
  mAttribute_mRuleIndex.drop () ;
  mAttribute_mLabelImplementationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_ruleDeclarationList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @ruleDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRuleIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLabelImplementationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_ruleDeclarationList_2D_element::getter_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_ruleDeclarationList_2D_element::getter_mRuleIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleLabelImplementationList GALGAS_ruleDeclarationList_2D_element::getter_mLabelImplementationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLabelImplementationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @ruleDeclarationList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ("ruleDeclarationList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_ruleDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_ruleDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ruleDeclarationList_2D_element GALGAS_ruleDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList_2D_element result ;
  const GALGAS_ruleDeclarationList_2D_element * p = (const GALGAS_ruleDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ruleDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element::GALGAS_keySortedList_2D_element (void) :
mAttribute_mKey (),
mAttribute_mOrder () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element::~ GALGAS_keySortedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element::GALGAS_keySortedList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_uint & inOperand1) :
mAttribute_mKey (inOperand0),
mAttribute_mOrder (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element GALGAS_keySortedList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_keySortedList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_uint::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element GALGAS_keySortedList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_uint & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_keySortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_keySortedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_keySortedList_2D_element::objectCompare (const GALGAS_keySortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mKey.objectCompare (inOperand.mAttribute_mKey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOrder.objectCompare (inOperand.mAttribute_mOrder) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_keySortedList_2D_element::isValid (void) const {
  return mAttribute_mKey.isValid () && mAttribute_mOrder.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList_2D_element::drop (void) {
  mAttribute_mKey.drop () ;
  mAttribute_mOrder.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_keySortedList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @keySortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mKey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOrder.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_keySortedList_2D_element::getter_mKey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_keySortedList_2D_element::getter_mOrder (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOrder ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @keySortedList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_keySortedList_2D_element ("keySortedList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_keySortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_keySortedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_keySortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_keySortedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_keySortedList_2D_element GALGAS_keySortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_keySortedList_2D_element result ;
  const GALGAS_keySortedList_2D_element * p = (const GALGAS_keySortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_keySortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("keySortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListAST_2D_element::GALGAS_fixitListAST_2D_element (void) :
mAttribute_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListAST_2D_element::~ GALGAS_fixitListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListAST_2D_element::GALGAS_fixitListAST_2D_element (const GALGAS_fixitElementAST & inOperand0) :
mAttribute_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListAST_2D_element GALGAS_fixitListAST_2D_element::constructor_new (const GALGAS_fixitElementAST & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fixitListAST_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListAST_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_fixitListAST_2D_element::objectCompare (const GALGAS_fixitListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElement.objectCompare (inOperand.mAttribute_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_fixitListAST_2D_element::isValid (void) const {
  return mAttribute_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fixitListAST_2D_element::drop (void) {
  mAttribute_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_fixitListAST_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @fixitListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitElementAST GALGAS_fixitListAST_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @fixitListAST-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListAST_2D_element ("fixitListAST-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_fixitListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_fixitListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_fixitListAST_2D_element GALGAS_fixitListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST_2D_element result ;
  const GALGAS_fixitListAST_2D_element * p = (const GALGAS_fixitListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) :
mAttribute_mAscending (),
mAttribute_mEnumeratedCollection () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::~ GALGAS_forInstructionEnumeratedObjectListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element::GALGAS_forInstructionEnumeratedObjectListAST_2D_element (const GALGAS_bool & inOperand0,
                                                                                                                  const GALGAS_abstractEnumeratedCollectionAST & inOperand1) :
mAttribute_mAscending (inOperand0),
mAttribute_mEnumeratedCollection (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                                  const GALGAS_abstractEnumeratedCollectionAST & inOperand1 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_forInstructionEnumeratedObjectListAST_2D_element::objectCompare (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAscending.objectCompare (inOperand.mAttribute_mAscending) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumeratedCollection.objectCompare (inOperand.mAttribute_mEnumeratedCollection) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_forInstructionEnumeratedObjectListAST_2D_element::isValid (void) const {
  return mAttribute_mAscending.isValid () && mAttribute_mEnumeratedCollection.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::drop (void) {
  mAttribute_mAscending.drop () ;
  mAttribute_mEnumeratedCollection.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_forInstructionEnumeratedObjectListAST_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @forInstructionEnumeratedObjectListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAscending.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumeratedCollection.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_forInstructionEnumeratedObjectListAST_2D_element::getter_mAscending (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAscending ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractEnumeratedCollectionAST GALGAS_forInstructionEnumeratedObjectListAST_2D_element::getter_mEnumeratedCollection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedCollection ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @forInstructionEnumeratedObjectListAST-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ("forInstructionEnumeratedObjectListAST-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_forInstructionEnumeratedObjectListAST_2D_element GALGAS_forInstructionEnumeratedObjectListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectListAST_2D_element result ;
  const GALGAS_forInstructionEnumeratedObjectListAST_2D_element * p = (const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element::GALGAS_matchInstructionBranchListAST_2D_element (void) :
mAttribute_mMatchEntryList (),
mAttribute_mEndOfMatchEntryList (),
mAttribute_mMatchBranchInstructionList (),
mAttribute_mEndOf_5F_instructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element::~ GALGAS_matchInstructionBranchListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element::GALGAS_matchInstructionBranchListAST_2D_element (const GALGAS_matchEntryListAST & inOperand0,
                                                                                                  const GALGAS_location & inOperand1,
                                                                                                  const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                  const GALGAS_location & inOperand3) :
mAttribute_mMatchEntryList (inOperand0),
mAttribute_mEndOfMatchEntryList (inOperand1),
mAttribute_mMatchBranchInstructionList (inOperand2),
mAttribute_mEndOf_5F_instructionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element GALGAS_matchInstructionBranchListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchInstructionBranchListAST_2D_element (GALGAS_matchEntryListAST::constructor_emptyList (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE),
                                                          GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                          GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element GALGAS_matchInstructionBranchListAST_2D_element::constructor_new (const GALGAS_matchEntryListAST & inOperand0,
                                                                                                                  const GALGAS_location & inOperand1,
                                                                                                                  const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                                  const GALGAS_location & inOperand3 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_matchInstructionBranchListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchInstructionBranchListAST_2D_element::objectCompare (const GALGAS_matchInstructionBranchListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMatchEntryList.objectCompare (inOperand.mAttribute_mMatchEntryList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfMatchEntryList.objectCompare (inOperand.mAttribute_mEndOfMatchEntryList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMatchBranchInstructionList.objectCompare (inOperand.mAttribute_mMatchBranchInstructionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOf_5F_instructionList.objectCompare (inOperand.mAttribute_mEndOf_5F_instructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchInstructionBranchListAST_2D_element::isValid (void) const {
  return mAttribute_mMatchEntryList.isValid () && mAttribute_mEndOfMatchEntryList.isValid () && mAttribute_mMatchBranchInstructionList.isValid () && mAttribute_mEndOf_5F_instructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST_2D_element::drop (void) {
  mAttribute_mMatchEntryList.drop () ;
  mAttribute_mEndOfMatchEntryList.drop () ;
  mAttribute_mMatchBranchInstructionList.drop () ;
  mAttribute_mEndOf_5F_instructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListAST_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @matchInstructionBranchListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMatchEntryList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfMatchEntryList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMatchBranchInstructionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOf_5F_instructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchEntryListAST GALGAS_matchInstructionBranchListAST_2D_element::getter_mMatchEntryList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_matchInstructionBranchListAST_2D_element::getter_mEndOfMatchEntryList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfMatchEntryList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_matchInstructionBranchListAST_2D_element::getter_mMatchBranchInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchBranchInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_matchInstructionBranchListAST_2D_element::getter_mEndOf_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOf_5F_instructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @matchInstructionBranchListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListAST_2D_element ("matchInstructionBranchListAST-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionBranchListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListAST_2D_element GALGAS_matchInstructionBranchListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListAST_2D_element result ;
  const GALGAS_matchInstructionBranchListAST_2D_element * p = (const GALGAS_matchInstructionBranchListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element::GALGAS_matchListForGeneration_2D_element (void) :
mAttribute_mIsType (),
mAttribute_mTypeNameOrEnumerationConstantName (),
mAttribute_mLocalConstantName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element::~ GALGAS_matchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element::GALGAS_matchListForGeneration_2D_element (const GALGAS_bool & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mIsType (inOperand0),
mAttribute_mTypeNameOrEnumerationConstantName (inOperand1),
mAttribute_mLocalConstantName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element GALGAS_matchListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchListForGeneration_2D_element (GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_string::constructor_default (HERE),
                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element GALGAS_matchListForGeneration_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_matchListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchListForGeneration_2D_element::objectCompare (const GALGAS_matchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsType.objectCompare (inOperand.mAttribute_mIsType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTypeNameOrEnumerationConstantName.objectCompare (inOperand.mAttribute_mTypeNameOrEnumerationConstantName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocalConstantName.objectCompare (inOperand.mAttribute_mLocalConstantName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mIsType.isValid () && mAttribute_mTypeNameOrEnumerationConstantName.isValid () && mAttribute_mLocalConstantName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration_2D_element::drop (void) {
  mAttribute_mIsType.drop () ;
  mAttribute_mTypeNameOrEnumerationConstantName.drop () ;
  mAttribute_mLocalConstantName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchListForGeneration_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @matchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTypeNameOrEnumerationConstantName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_matchListForGeneration_2D_element::getter_mIsType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_matchListForGeneration_2D_element::getter_mTypeNameOrEnumerationConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeNameOrEnumerationConstantName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_matchListForGeneration_2D_element::getter_mLocalConstantName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocalConstantName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @matchListForGeneration-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchListForGeneration_2D_element ("matchListForGeneration-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration_2D_element GALGAS_matchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_matchListForGeneration_2D_element result ;
  const GALGAS_matchListForGeneration_2D_element * p = (const GALGAS_matchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element::GALGAS_matchInstructionBranchListForGeneration_2D_element (void) :
mAttribute_mMatchListForGeneration (),
mAttribute_mMatchBranchInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element::~ GALGAS_matchInstructionBranchListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element::GALGAS_matchInstructionBranchListForGeneration_2D_element (const GALGAS_matchListForGeneration & inOperand0,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inOperand1) :
mAttribute_mMatchListForGeneration (inOperand0),
mAttribute_mMatchBranchInstructionList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element GALGAS_matchInstructionBranchListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_matchInstructionBranchListForGeneration_2D_element (GALGAS_matchListForGeneration::constructor_emptyList (HERE),
                                                                    GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element GALGAS_matchInstructionBranchListForGeneration_2D_element::constructor_new (const GALGAS_matchListForGeneration & inOperand0,
                                                                                                                                      const GALGAS_semanticInstructionListForGeneration & inOperand1 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_matchInstructionBranchListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_matchInstructionBranchListForGeneration_2D_element::objectCompare (const GALGAS_matchInstructionBranchListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mMatchListForGeneration.objectCompare (inOperand.mAttribute_mMatchListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMatchBranchInstructionList.objectCompare (inOperand.mAttribute_mMatchBranchInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_matchInstructionBranchListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mMatchListForGeneration.isValid () && mAttribute_mMatchBranchInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration_2D_element::drop (void) {
  mAttribute_mMatchListForGeneration.drop () ;
  mAttribute_mMatchBranchInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_matchInstructionBranchListForGeneration_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @matchInstructionBranchListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mMatchListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMatchBranchInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchListForGeneration GALGAS_matchInstructionBranchListForGeneration_2D_element::getter_mMatchListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_matchInstructionBranchListForGeneration_2D_element::getter_mMatchBranchInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMatchBranchInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @matchInstructionBranchListForGeneration-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_matchInstructionBranchListForGeneration_2D_element ("matchInstructionBranchListForGeneration-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_matchInstructionBranchListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_matchInstructionBranchListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_matchInstructionBranchListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_matchInstructionBranchListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_matchInstructionBranchListForGeneration_2D_element GALGAS_matchInstructionBranchListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_matchInstructionBranchListForGeneration_2D_element result ;
  const GALGAS_matchInstructionBranchListForGeneration_2D_element * p = (const GALGAS_matchInstructionBranchListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_matchInstructionBranchListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("matchInstructionBranchListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (void) :
mAttribute_mSwitchConstantList (),
mAttribute_mAssociatedValuesExtraction (),
mAttribute_mInstructions (),
mAttribute_mEndOfBranch () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element::~ GALGAS_switchBranchesAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element::GALGAS_switchBranchesAST_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                          const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                          const GALGAS_semanticInstructionListAST & inOperand2,
                                                                          const GALGAS_location & inOperand3) :
mAttribute_mSwitchConstantList (inOperand0),
mAttribute_mAssociatedValuesExtraction (inOperand1),
mAttribute_mInstructions (inOperand2),
mAttribute_mEndOfBranch (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesAST_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                              GALGAS_switchExtractedValuesListAST::constructor_emptyList (HERE),
                                              GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                              GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                          const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                          const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                          const GALGAS_location & inOperand3 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_switchBranchesAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_switchBranchesAST_2D_element::objectCompare (const GALGAS_switchBranchesAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSwitchConstantList.objectCompare (inOperand.mAttribute_mSwitchConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAssociatedValuesExtraction.objectCompare (inOperand.mAttribute_mAssociatedValuesExtraction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructions.objectCompare (inOperand.mAttribute_mInstructions) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEndOfBranch.objectCompare (inOperand.mAttribute_mEndOfBranch) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_switchBranchesAST_2D_element::isValid (void) const {
  return mAttribute_mSwitchConstantList.isValid () && mAttribute_mAssociatedValuesExtraction.isValid () && mAttribute_mInstructions.isValid () && mAttribute_mEndOfBranch.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST_2D_element::drop (void) {
  mAttribute_mSwitchConstantList.drop () ;
  mAttribute_mAssociatedValuesExtraction.drop () ;
  mAttribute_mInstructions.drop () ;
  mAttribute_mEndOfBranch.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesAST_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @switchBranchesAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructions.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchBranchesAST_2D_element::getter_mSwitchConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchExtractedValuesListAST GALGAS_switchBranchesAST_2D_element::getter_mAssociatedValuesExtraction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedValuesExtraction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_switchBranchesAST_2D_element::getter_mInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructions ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_switchBranchesAST_2D_element::getter_mEndOfBranch (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfBranch ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @switchBranchesAST-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ("switchBranchesAST-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchBranchesAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchBranchesAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesAST_2D_element GALGAS_switchBranchesAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST_2D_element result ;
  const GALGAS_switchBranchesAST_2D_element * p = (const GALGAS_switchBranchesAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchBranchesAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (void) :
mAttribute_mSwitchConstantList (),
mAttribute_mExtractedAssociatedValuesForGeneration (),
mAttribute_mLocationIndex (),
mAttribute_mInstructions () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element::~ GALGAS_switchBranchesForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element::GALGAS_switchBranchesForGeneration_2D_element (const GALGAS_lstringlist & inOperand0,
                                                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                              const GALGAS_uint & inOperand2,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3) :
mAttribute_mSwitchConstantList (inOperand0),
mAttribute_mExtractedAssociatedValuesForGeneration (inOperand1),
mAttribute_mLocationIndex (inOperand2),
mAttribute_mInstructions (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesForGeneration_2D_element (GALGAS_lstringlist::constructor_emptyList (HERE),
                                                        GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_uint::constructor_default (HERE),
                                                        GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::constructor_new (const GALGAS_lstringlist & inOperand0,
                                                                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                              const GALGAS_uint & inOperand2,
                                                                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_switchBranchesForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_switchBranchesForGeneration_2D_element::objectCompare (const GALGAS_switchBranchesForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSwitchConstantList.objectCompare (inOperand.mAttribute_mSwitchConstantList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExtractedAssociatedValuesForGeneration.objectCompare (inOperand.mAttribute_mExtractedAssociatedValuesForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mLocationIndex.objectCompare (inOperand.mAttribute_mLocationIndex) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInstructions.objectCompare (inOperand.mAttribute_mInstructions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_switchBranchesForGeneration_2D_element::isValid (void) const {
  return mAttribute_mSwitchConstantList.isValid () && mAttribute_mExtractedAssociatedValuesForGeneration.isValid () && mAttribute_mLocationIndex.isValid () && mAttribute_mInstructions.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration_2D_element::drop (void) {
  mAttribute_mSwitchConstantList.drop () ;
  mAttribute_mExtractedAssociatedValuesForGeneration.drop () ;
  mAttribute_mLocationIndex.drop () ;
  mAttribute_mInstructions.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_switchBranchesForGeneration_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @switchBranchesForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mLocationIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInstructions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_switchBranchesForGeneration_2D_element::getter_mSwitchConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSwitchConstantList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_extractedAssociatedValuesForGeneration GALGAS_switchBranchesForGeneration_2D_element::getter_mExtractedAssociatedValuesForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExtractedAssociatedValuesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_switchBranchesForGeneration_2D_element::getter_mLocationIndex (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocationIndex ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_switchBranchesForGeneration_2D_element::getter_mInstructions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructions ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @switchBranchesForGeneration-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ("switchBranchesForGeneration-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_switchBranchesForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_switchBranchesForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_switchBranchesForGeneration_2D_element GALGAS_switchBranchesForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration_2D_element result ;
  const GALGAS_switchBranchesForGeneration_2D_element * p = (const GALGAS_switchBranchesForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchBranchesForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) :
mAttribute_mInstruction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::~ GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0) :
mAttribute_mInstruction (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mInstruction.objectCompare (inOperand.mAttribute_mInstruction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mInstruction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mInstruction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @syntaxInstructionListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstruction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @syntaxInstructionListForGrammarAnalysis-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ("syntaxInstructionListForGrammarAnalysis-element",
                                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element result ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element * p = (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (void) :
mAttribute_mSyntaxInstructionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis_2D_element::~ GALGAS_branchListForGrammarAnalysis_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis_2D_element::GALGAS_branchListForGrammarAnalysis_2D_element (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0) :
mAttribute_mSyntaxInstructionList (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_branchListForGrammarAnalysis_2D_element (GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::constructor_new (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_branchListForGrammarAnalysis_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_branchListForGrammarAnalysis_2D_element::objectCompare (const GALGAS_branchListForGrammarAnalysis_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSyntaxInstructionList.objectCompare (inOperand.mAttribute_mSyntaxInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_branchListForGrammarAnalysis_2D_element::isValid (void) const {
  return mAttribute_mSyntaxInstructionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis_2D_element::drop (void) {
  mAttribute_mSyntaxInstructionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_branchListForGrammarAnalysis_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @branchListForGrammarAnalysis-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis_2D_element::getter_mSyntaxInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxInstructionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @branchListForGrammarAnalysis-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ("branchListForGrammarAnalysis-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_branchListForGrammarAnalysis_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_branchListForGrammarAnalysis_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchListForGrammarAnalysis_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_branchListForGrammarAnalysis_2D_element GALGAS_branchListForGrammarAnalysis_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis_2D_element result ;
  const GALGAS_branchListForGrammarAnalysis_2D_element * p = (const GALGAS_branchListForGrammarAnalysis_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_branchListForGrammarAnalysis_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (void) :
mAttribute_columns () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_rowList_2D_element::~ GALGAS_rowList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_rowList_2D_element::GALGAS_rowList_2D_element (const GALGAS__32_stringlist & inOperand0) :
mAttribute_columns (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_rowList_2D_element (GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::constructor_new (const GALGAS__32_stringlist & inOperand0 
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_rowList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_rowList_2D_element::objectCompare (const GALGAS_rowList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_columns.objectCompare (inOperand.mAttribute_columns) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_rowList_2D_element::isValid (void) const {
  return mAttribute_columns.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_rowList_2D_element::drop (void) {
  mAttribute_columns.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_rowList_2D_element::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "<struct @rowList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_columns.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_rowList_2D_element::getter_columns (UNUSED_LOCATION_ARGS) const {
  return mAttribute_columns ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @rowList-element type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rowList_2D_element ("rowList-element",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_rowList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_rowList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rowList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_rowList_2D_element GALGAS_rowList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_rowList_2D_element result ;
  const GALGAS_rowList_2D_element * p = (const GALGAS_rowList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rowList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (void) :
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration_2D_element::~ GALGAS_programListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration_2D_element::GALGAS_programListForGeneration_2D_element (const GALGAS_semanticDeclarationForGeneration & inOperand0) :
mAttribute_mDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::constructor_new (const GALGAS_semanticDeclarationForGeneration & inOperand0 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_programListForGeneration_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_programListForGeneration_2D_element::objectCompare (const GALGAS_programListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_programListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration_2D_element::drop (void) {
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_programListForGeneration_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @programListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration GALGAS_programListForGeneration_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @programListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programListForGeneration_2D_element ("programListForGeneration-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_programListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_programListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_programListForGeneration_2D_element GALGAS_programListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration_2D_element result ;
  const GALGAS_programListForGeneration_2D_element * p = (const GALGAS_programListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_programListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap_2D_element::GALGAS_genericExtensionMethodListMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap_2D_element::~ GALGAS_genericExtensionMethodListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap_2D_element::GALGAS_genericExtensionMethodListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_genericExtensionMethodListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_genericExtensionMethodListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_genericExtensionMethodListMap_2D_element::objectCompare (const GALGAS_genericExtensionMethodListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_genericExtensionMethodListMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_genericExtensionMethodListMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_genericExtensionMethodListMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @genericExtensionMethodListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_genericExtensionMethodListMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_genericExtensionMethodListMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @genericExtensionMethodListMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ("genericExtensionMethodListMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_genericExtensionMethodListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_genericExtensionMethodListMap_2D_element GALGAS_genericExtensionMethodListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap_2D_element result ;
  const GALGAS_genericExtensionMethodListMap_2D_element * p = (const GALGAS_genericExtensionMethodListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_genericExtensionMethodListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element::~ GALGAS_descendantClassListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element::GALGAS_descendantClassListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_unifiedTypeMapProxyList & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_descendantClassListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                   GALGAS_unifiedTypeMapProxyList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_unifiedTypeMapProxyList & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_descendantClassListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_descendantClassListMap_2D_element::objectCompare (const GALGAS_descendantClassListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_descendantClassListMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_descendantClassListMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_descendantClassListMap_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @descendantClassListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_descendantClassListMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMapProxyList GALGAS_descendantClassListMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @descendantClassListMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ("descendantClassListMap-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_descendantClassListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_descendantClassListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_descendantClassListMap_2D_element GALGAS_descendantClassListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMap_2D_element result ;
  const GALGAS_descendantClassListMap_2D_element * p = (const GALGAS_descendantClassListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_descendantClassListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mAttribute_mGroupReference (),
mAttribute_mGroupName (),
mAttribute_mGroupPath (),
mAttribute_mChildrenRefs () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mAttribute_mGroupReference (inOperand0),
mAttribute_mGroupName (inOperand1),
mAttribute_mGroupPath (inOperand2),
mAttribute_mChildrenRefs (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_string & inOperand2,
                                                                                    const GALGAS_stringlist & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGroupReference.objectCompare (inOperand.mAttribute_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupName.objectCompare (inOperand.mAttribute_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupPath.objectCompare (inOperand.mAttribute_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mChildrenRefs.objectCompare (inOperand.mAttribute_mChildrenRefs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mAttribute_mGroupReference.isValid () && mAttribute_mGroupName.isValid () && mAttribute_mGroupPath.isValid () && mAttribute_mChildrenRefs.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mAttribute_mGroupReference.drop () ;
  mAttribute_mGroupName.drop () ;
  mAttribute_mGroupPath.drop () ;
  mAttribute_mChildrenRefs.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mChildrenRefs ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @XCodeGroupList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mAttribute_mTargetRef (),
mAttribute_mTargetName (),
mAttribute_mProductFileReference (),
mAttribute_mProductFileName (),
mAttribute_mBuildPhaseRefList (),
mAttribute_mBuildPhaseRef (),
mAttribute_mBuildConfigurationListRef (),
mAttribute_mBuildConfigurationSettingList (),
mAttribute_mBuildConfigurationRef (),
mAttribute_mFrameworksFileRefList (),
mAttribute_mFrameworkBuildPhaseRef () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_string & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_stringlist & inOperand4,
                                                                              const GALGAS_string & inOperand5,
                                                                              const GALGAS_string & inOperand6,
                                                                              const GALGAS_stringlist & inOperand7,
                                                                              const GALGAS_string & inOperand8,
                                                                              const GALGAS_stringlist & inOperand9,
                                                                              const GALGAS_string & inOperand10) :
mAttribute_mTargetRef (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mProductFileReference (inOperand2),
mAttribute_mProductFileName (inOperand3),
mAttribute_mBuildPhaseRefList (inOperand4),
mAttribute_mBuildPhaseRef (inOperand5),
mAttribute_mBuildConfigurationListRef (inOperand6),
mAttribute_mBuildConfigurationSettingList (inOperand7),
mAttribute_mBuildConfigurationRef (inOperand8),
mAttribute_mFrameworksFileRefList (inOperand9),
mAttribute_mFrameworkBuildPhaseRef (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeToolTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE),
                                                GALGAS_stringlist::constructor_emptyList (HERE),
                                                GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_string & inOperand1,
                                                                                              const GALGAS_string & inOperand2,
                                                                                              const GALGAS_string & inOperand3,
                                                                                              const GALGAS_stringlist & inOperand4,
                                                                                              const GALGAS_string & inOperand5,
                                                                                              const GALGAS_string & inOperand6,
                                                                                              const GALGAS_stringlist & inOperand7,
                                                                                              const GALGAS_string & inOperand8,
                                                                                              const GALGAS_stringlist & inOperand9,
                                                                                              const GALGAS_string & inOperand10 
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetRef.objectCompare (inOperand.mAttribute_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileReference.objectCompare (inOperand.mAttribute_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileName.objectCompare (inOperand.mAttribute_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRefList.objectCompare (inOperand.mAttribute_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRef.objectCompare (inOperand.mAttribute_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationListRef.objectCompare (inOperand.mAttribute_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationSettingList.objectCompare (inOperand.mAttribute_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationRef.objectCompare (inOperand.mAttribute_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworksFileRefList.objectCompare (inOperand.mAttribute_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkBuildPhaseRef.objectCompare (inOperand.mAttribute_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mAttribute_mTargetRef.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mProductFileReference.isValid () && mAttribute_mProductFileName.isValid () && mAttribute_mBuildPhaseRefList.isValid () && mAttribute_mBuildPhaseRef.isValid () && mAttribute_mBuildConfigurationListRef.isValid () && mAttribute_mBuildConfigurationSettingList.isValid () && mAttribute_mBuildConfigurationRef.isValid () && mAttribute_mFrameworksFileRefList.isValid () && mAttribute_mFrameworkBuildPhaseRef.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mAttribute_mTargetRef.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mProductFileReference.drop () ;
  mAttribute_mProductFileName.drop () ;
  mAttribute_mBuildPhaseRefList.drop () ;
  mAttribute_mBuildPhaseRef.drop () ;
  mAttribute_mBuildConfigurationListRef.drop () ;
  mAttribute_mBuildConfigurationSettingList.drop () ;
  mAttribute_mBuildConfigurationRef.drop () ;
  mAttribute_mFrameworksFileRefList.drop () ;
  mAttribute_mFrameworkBuildPhaseRef.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkBuildPhaseRef ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeToolTargetList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mAttribute_mTargetRef (),
mAttribute_mTargetName (),
mAttribute_mProductFileReference (),
mAttribute_mProductFileName (),
mAttribute_mBuildPhaseRefList (),
mAttribute_mBuildPhaseRef (),
mAttribute_mBuildConfigurationListRef (),
mAttribute_mBuildConfigurationSettingList (),
mAttribute_mBuildConfigurationRef (),
mAttribute_mFrameworksFileRefList (),
mAttribute_mFrameworkBuildPhaseRef (),
mAttribute_mDependentTargets (),
mAttribute_mResourceBuildRef (),
mAttribute_mResourceFileBuildRefs () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_string & inOperand1,
                                                                            const GALGAS_string & inOperand2,
                                                                            const GALGAS_string & inOperand3,
                                                                            const GALGAS_stringlist & inOperand4,
                                                                            const GALGAS_string & inOperand5,
                                                                            const GALGAS_string & inOperand6,
                                                                            const GALGAS_stringlist & inOperand7,
                                                                            const GALGAS_string & inOperand8,
                                                                            const GALGAS_stringlist & inOperand9,
                                                                            const GALGAS_string & inOperand10,
                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                            const GALGAS_string & inOperand12,
                                                                            const GALGAS_stringlist & inOperand13) :
mAttribute_mTargetRef (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mProductFileReference (inOperand2),
mAttribute_mProductFileName (inOperand3),
mAttribute_mBuildPhaseRefList (inOperand4),
mAttribute_mBuildPhaseRef (inOperand5),
mAttribute_mBuildConfigurationListRef (inOperand6),
mAttribute_mBuildConfigurationSettingList (inOperand7),
mAttribute_mBuildConfigurationRef (inOperand8),
mAttribute_mFrameworksFileRefList (inOperand9),
mAttribute_mFrameworkBuildPhaseRef (inOperand10),
mAttribute_mDependentTargets (inOperand11),
mAttribute_mResourceBuildRef (inOperand12),
mAttribute_mResourceFileBuildRefs (inOperand13) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS__32_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_string & inOperand3,
                                                                                            const GALGAS_stringlist & inOperand4,
                                                                                            const GALGAS_string & inOperand5,
                                                                                            const GALGAS_string & inOperand6,
                                                                                            const GALGAS_stringlist & inOperand7,
                                                                                            const GALGAS_string & inOperand8,
                                                                                            const GALGAS_stringlist & inOperand9,
                                                                                            const GALGAS_string & inOperand10,
                                                                                            const GALGAS__32_stringlist & inOperand11,
                                                                                            const GALGAS_string & inOperand12,
                                                                                            const GALGAS_stringlist & inOperand13 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetRef.objectCompare (inOperand.mAttribute_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileReference.objectCompare (inOperand.mAttribute_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileName.objectCompare (inOperand.mAttribute_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRefList.objectCompare (inOperand.mAttribute_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRef.objectCompare (inOperand.mAttribute_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationListRef.objectCompare (inOperand.mAttribute_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationSettingList.objectCompare (inOperand.mAttribute_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationRef.objectCompare (inOperand.mAttribute_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworksFileRefList.objectCompare (inOperand.mAttribute_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkBuildPhaseRef.objectCompare (inOperand.mAttribute_mFrameworkBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependentTargets.objectCompare (inOperand.mAttribute_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResourceBuildRef.objectCompare (inOperand.mAttribute_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResourceFileBuildRefs.objectCompare (inOperand.mAttribute_mResourceFileBuildRefs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mAttribute_mTargetRef.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mProductFileReference.isValid () && mAttribute_mProductFileName.isValid () && mAttribute_mBuildPhaseRefList.isValid () && mAttribute_mBuildPhaseRef.isValid () && mAttribute_mBuildConfigurationListRef.isValid () && mAttribute_mBuildConfigurationSettingList.isValid () && mAttribute_mBuildConfigurationRef.isValid () && mAttribute_mFrameworksFileRefList.isValid () && mAttribute_mFrameworkBuildPhaseRef.isValid () && mAttribute_mDependentTargets.isValid () && mAttribute_mResourceBuildRef.isValid () && mAttribute_mResourceFileBuildRefs.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mAttribute_mTargetRef.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mProductFileReference.drop () ;
  mAttribute_mProductFileName.drop () ;
  mAttribute_mBuildPhaseRefList.drop () ;
  mAttribute_mBuildPhaseRef.drop () ;
  mAttribute_mBuildConfigurationListRef.drop () ;
  mAttribute_mBuildConfigurationSettingList.drop () ;
  mAttribute_mBuildConfigurationRef.drop () ;
  mAttribute_mFrameworksFileRefList.drop () ;
  mAttribute_mFrameworkBuildPhaseRef.drop () ;
  mAttribute_mDependentTargets.drop () ;
  mAttribute_mResourceBuildRef.drop () ;
  mAttribute_mResourceFileBuildRefs.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependentTargets ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResourceBuildRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResourceFileBuildRefs ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeAppTargetList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mAttribute_mFileReference (),
mAttribute_mFileName (),
mAttribute_mBuildReference () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mAttribute_mFileReference (inOperand0),
mAttribute_mFileName (inOperand1),
mAttribute_mBuildReference (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFileReference.objectCompare (inOperand.mAttribute_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFileName.objectCompare (inOperand.mAttribute_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildReference.objectCompare (inOperand.mAttribute_mBuildReference) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mAttribute_mFileReference.isValid () && mAttribute_mFileName.isValid () && mAttribute_mBuildReference.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::drop (void) {
  mAttribute_mFileReference.drop () ;
  mAttribute_mFileName.drop () ;
  mAttribute_mBuildReference.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildReference ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @BuildFileList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateGetterCallInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverExpression.objectCompare (p->mAttribute_mReceiverExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGetterName.objectCompare (p->mAttribute_mGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateGetterCallInExpressionAST::objectCompare (const GALGAS_templateGetterCallInExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateGetterCallInExpressionAST::GALGAS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mReceiverExpression,
                                                                                                    const GALGAS_lstring & inAttribute_mGetterName,
                                                                                                    const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  if (inAttribute_mReceiverExpression.isValid () && inAttribute_mGetterName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateGetterCallInExpressionAST (inAttribute_mReceiverExpression, inAttribute_mGetterName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateGetterCallInExpressionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    result = p->mAttribute_mReceiverExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateGetterCallInExpressionAST::getter_mReceiverExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateGetterCallInExpressionAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    result = p->mAttribute_mGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateGetterCallInExpressionAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateGetterCallInExpressionAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateGetterCallInExpressionAST * p = (const cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateGetterCallInExpressionAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateGetterCallInExpressionAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GALGAS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GALGAS_lstring & in_mGetterName,
                                                                                const GALGAS_templateExpressionListAST & in_mExpressionList
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mReceiverExpression (in_mReceiverExpression),
mAttribute_mGetterName (in_mGetterName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

void cPtr_templateGetterCallInExpressionAST::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@templateGetterCallInExpressionAST:" ;
  mAttribute_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateGetterCallInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mAttribute_mReceiverExpression, mAttribute_mGetterName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateGetterCallInExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                          & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateGetterCallInExpressionAST GALGAS_templateGetterCallInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateGetterCallInExpressionAST result ;
  const GALGAS_templateGetterCallInExpressionAST * p = (const GALGAS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateConstructorAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateConstructorAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mConstructorName.objectCompare (p->mAttribute_mConstructorName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateConstructorAST::objectCompare (const GALGAS_templateConstructorAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateConstructorAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST::GALGAS_templateConstructorAST (const cPtr_templateConstructorAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateConstructorAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::constructor_new (const GALGAS_lstring & inAttribute_mTypeName,
                                                                              const GALGAS_lstring & inAttribute_mConstructorName,
                                                                              const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  if (inAttribute_mTypeName.isValid () && inAttribute_mConstructorName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateConstructorAST (inAttribute_mTypeName, inAttribute_mConstructorName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateConstructorAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateConstructorAST::getter_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateConstructorAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mAttribute_mConstructorName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateConstructorAST::getter_mConstructorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mConstructorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateConstructorAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateConstructorAST * p = (const cPtr_templateConstructorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateConstructorAST) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateConstructorAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @templateConstructorAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateConstructorAST::cPtr_templateConstructorAST (const GALGAS_lstring & in_mTypeName,
                                                          const GALGAS_lstring & in_mConstructorName,
                                                          const GALGAS_templateExpressionListAST & in_mExpressionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mConstructorName (in_mConstructorName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateConstructorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

void cPtr_templateConstructorAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@templateConstructorAST:" ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mConstructorName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateConstructorAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateConstructorAST (mAttribute_mTypeName, mAttribute_mConstructorName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateConstructorAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateConstructorAST ("templateConstructorAST",
                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateConstructorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateConstructorAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateConstructorAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateConstructorAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateConstructorAST GALGAS_templateConstructorAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateConstructorAST result ;
  const GALGAS_templateConstructorAST * p = (const GALGAS_templateConstructorAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateConstructorAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateConstructorAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateFileWrapperTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFileWrapperName.objectCompare (p->mAttribute_mFileWrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateName.objectCompare (p->mAttribute_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutExpressionList.objectCompare (p->mAttribute_mOutExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateFileWrapperTemplateCallAST::objectCompare (const GALGAS_templateFileWrapperTemplateCallAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFileWrapperTemplateCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST::GALGAS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::constructor_new (const GALGAS_lstring & inAttribute_mFileWrapperName,
                                                                                                      const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                      const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  if (inAttribute_mFileWrapperName.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFileWrapperTemplateCallAST (inAttribute_mFileWrapperName, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::getter_mFileWrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mAttribute_mFileWrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateFileWrapperTemplateCallAST::getter_mFileWrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileWrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateFileWrapperTemplateCallAST::getter_mTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mAttribute_mTemplateName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateFileWrapperTemplateCallAST::getter_mTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateFileWrapperTemplateCallAST::getter_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFileWrapperTemplateCallAST * p = (const cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    result = p->mAttribute_mOutExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateFileWrapperTemplateCallAST::getter_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateFileWrapperTemplateCallAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GALGAS_lstring & in_mFileWrapperName,
                                                                                  const GALGAS_lstring & in_mTemplateName,
                                                                                  const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mFileWrapperName (in_mFileWrapperName),
mAttribute_mTemplateName (in_mTemplateName),
mAttribute_mOutExpressionList (in_mOutExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateFileWrapperTemplateCallAST:" ;
  mAttribute_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateFileWrapperTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mAttribute_mFileWrapperName, mAttribute_mTemplateName, mAttribute_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateFileWrapperTemplateCallAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFileWrapperTemplateCallAST GALGAS_templateFileWrapperTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateFileWrapperTemplateCallAST result ;
  const GALGAS_templateFileWrapperTemplateCallAST * p = (const GALGAS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateExtensionTemplateCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionValue.objectCompare (p->mAttribute_mExpressionValue) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateName.objectCompare (p->mAttribute_mTemplateName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOutExpressionList.objectCompare (p->mAttribute_mOutExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateExtensionTemplateCallAST::objectCompare (const GALGAS_templateExtensionTemplateCallAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExtensionTemplateCallAST::GALGAS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mExpressionValue,
                                                                                                  const GALGAS_lstring & inAttribute_mTemplateName,
                                                                                                  const GALGAS_templateExpressionListAST & inAttribute_mOutExpressionList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  if (inAttribute_mExpressionValue.isValid () && inAttribute_mTemplateName.isValid () && inAttribute_mOutExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateExtensionTemplateCallAST (inAttribute_mExpressionValue, inAttribute_mTemplateName, inAttribute_mOutExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateExtensionTemplateCallAST::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    result = p->mAttribute_mExpressionValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateExtensionTemplateCallAST::getter_mExpressionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateExtensionTemplateCallAST::getter_mTemplateName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    result = p->mAttribute_mTemplateName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateExtensionTemplateCallAST::getter_mTemplateName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateExtensionTemplateCallAST::getter_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateExtensionTemplateCallAST * p = (const cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    result = p->mAttribute_mOutExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateExtensionTemplateCallAST::getter_mOutExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @templateExtensionTemplateCallAST class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GALGAS_templateExpressionAST & in_mExpressionValue,
                                                                              const GALGAS_lstring & in_mTemplateName,
                                                                              const GALGAS_templateExpressionListAST & in_mOutExpressionList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mExpressionValue (in_mExpressionValue),
mAttribute_mTemplateName (in_mTemplateName),
mAttribute_mOutExpressionList (in_mOutExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

void cPtr_templateExtensionTemplateCallAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@templateExtensionTemplateCallAST:" ;
  mAttribute_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateExtensionTemplateCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mAttribute_mExpressionValue, mAttribute_mTemplateName, mAttribute_mOutExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @templateExtensionTemplateCallAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExtensionTemplateCallAST GALGAS_templateExtensionTemplateCallAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateExtensionTemplateCallAST result ;
  const GALGAS_templateExtensionTemplateCallAST * p = (const GALGAS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateLiteralStringExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLiteralStringList.objectCompare (p->mAttribute_mLiteralStringList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateLiteralStringExpressionAST::objectCompare (const GALGAS_templateLiteralStringExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateLiteralStringExpressionAST::constructor_new (GALGAS_stringlist::constructor_emptyList (HERE),
                                                                     GALGAS_location::constructor_nowhere (HERE)
                                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST::GALGAS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralStringExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::constructor_new (const GALGAS_stringlist & inAttribute_mLiteralStringList,
                                                                                                      const GALGAS_location & inAttribute_mLocation
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  if (inAttribute_mLiteralStringList.isValid () && inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateLiteralStringExpressionAST (inAttribute_mLiteralStringList, inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_templateLiteralStringExpressionAST::getter_mLiteralStringList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    result = p->mAttribute_mLiteralStringList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cPtr_templateLiteralStringExpressionAST::getter_mLiteralStringList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLiteralStringList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_templateLiteralStringExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateLiteralStringExpressionAST * p = (const cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_templateLiteralStringExpressionAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @templateLiteralStringExpressionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (const GALGAS_stringlist & in_mLiteralStringList,
                                                                                  const GALGAS_location & in_mLocation
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mLiteralStringList (in_mLiteralStringList),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateLiteralStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

void cPtr_templateLiteralStringExpressionAST::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@templateLiteralStringExpressionAST:" ;
  mAttribute_mLiteralStringList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateLiteralStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateLiteralStringExpressionAST (mAttribute_mLiteralStringList, mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @templateLiteralStringExpressionAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ("templateLiteralStringExpressionAST",
                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateLiteralStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateLiteralStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateLiteralStringExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateLiteralStringExpressionAST GALGAS_templateLiteralStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateLiteralStringExpressionAST result ;
  const GALGAS_templateLiteralStringExpressionAST * p = (const GALGAS_templateLiteralStringExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateLiteralStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structFieldAccessTemplateExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOperatorLocation.objectCompare (p->mAttribute_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructFieldName.objectCompare (p->mAttribute_mStructFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structFieldAccessTemplateExpressionAST::objectCompare (const GALGAS_structFieldAccessTemplateExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST::GALGAS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                              const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                                              const GALGAS_lstring & inAttribute_mStructFieldName
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid () && inAttribute_mStructFieldName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structFieldAccessTemplateExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression, inAttribute_mStructFieldName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_structFieldAccessTemplateExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mAttribute_mOperatorLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_structFieldAccessTemplateExpressionAST::getter_mOperatorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOperatorLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_structFieldAccessTemplateExpressionAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structFieldAccessTemplateExpressionAST::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (const cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    result = p->mAttribute_mStructFieldName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structFieldAccessTemplateExpressionAST::getter_mStructFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructFieldName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @structFieldAccessTemplateExpressionAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                                          const GALGAS_templateExpressionAST & in_mExpression,
                                                                                          const GALGAS_lstring & in_mStructFieldName
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOperatorLocation (in_mOperatorLocation),
mAttribute_mExpression (in_mExpression),
mAttribute_mStructFieldName (in_mStructFieldName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@structFieldAccessTemplateExpressionAST:" ;
  mAttribute_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structFieldAccessTemplateExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mAttribute_mOperatorLocation, mAttribute_mExpression, mAttribute_mStructFieldName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @structFieldAccessTemplateExpressionAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldAccessTemplateExpressionAST GALGAS_structFieldAccessTemplateExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_structFieldAccessTemplateExpressionAST result ;
  const GALGAS_structFieldAccessTemplateExpressionAST * p = (const GALGAS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateOptionAccessAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mOptionComponentName.objectCompare (p->mAttribute_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionName.objectCompare (p->mAttribute_mOptionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGetterName.objectCompare (p->mAttribute_mGetterName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateOptionAccessAST::objectCompare (const GALGAS_templateOptionAccessAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateOptionAccessAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST::GALGAS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::constructor_new (const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                                const GALGAS_lstring & inAttribute_mOptionName,
                                                                                const GALGAS_lstring & inAttribute_mGetterName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  if (inAttribute_mOptionComponentName.isValid () && inAttribute_mOptionName.isValid () && inAttribute_mGetterName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateOptionAccessAST (inAttribute_mOptionComponentName, inAttribute_mOptionName, inAttribute_mGetterName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateOptionAccessAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mAttribute_mOptionComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateOptionAccessAST::getter_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateOptionAccessAST::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mAttribute_mOptionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateOptionAccessAST::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateOptionAccessAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateOptionAccessAST * p = (const cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    result = p->mAttribute_mGetterName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateOptionAccessAST::getter_mGetterName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGetterName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateOptionAccessAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GALGAS_lstring & in_mOptionComponentName,
                                                            const GALGAS_lstring & in_mOptionName,
                                                            const GALGAS_lstring & in_mGetterName
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mOptionComponentName (in_mOptionComponentName),
mAttribute_mOptionName (in_mOptionName),
mAttribute_mGetterName (in_mGetterName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateOptionAccessAST:" ;
  mAttribute_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGetterName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateOptionAccessAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mAttribute_mOptionComponentName, mAttribute_mOptionName, mAttribute_mGetterName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateOptionAccessAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateOptionAccessAST GALGAS_templateOptionAccessAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateOptionAccessAST result ;
  const GALGAS_templateOptionAccessAST * p = (const GALGAS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateFunctionCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpressionList.objectCompare (p->mAttribute_mExpressionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateFunctionCallAST::objectCompare (const GALGAS_templateFunctionCallAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateFunctionCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_templateExpressionListAST::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST::GALGAS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::constructor_new (const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                const GALGAS_templateExpressionListAST & inAttribute_mExpressionList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  if (inAttribute_mFunctionName.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateFunctionCallAST (inAttribute_mFunctionName, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateFunctionCallAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateFunctionCallAST::getter_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST GALGAS_templateFunctionCallAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateFunctionCallAST * p = (const cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    result = p->mAttribute_mExpressionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionListAST cPtr_templateFunctionCallAST::getter_mExpressionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpressionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @templateFunctionCallAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GALGAS_lstring & in_mFunctionName,
                                                            const GALGAS_templateExpressionListAST & in_mExpressionList
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mExpressionList (in_mExpressionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@templateFunctionCallAST:" ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mAttribute_mFunctionName, mAttribute_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @templateFunctionCallAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateFunctionCallAST GALGAS_templateFunctionCallAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_templateFunctionCallAST result ;
  const GALGAS_templateFunctionCallAST * p = (const GALGAS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateVarInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateVarInExpressionAST * p = (const cPtr_templateVarInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mVarName.objectCompare (p->mAttribute_mVarName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateVarInExpressionAST::objectCompare (const GALGAS_templateVarInExpressionAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (void) :
GALGAS_templateExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateVarInExpressionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST::GALGAS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GALGAS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::constructor_new (const GALGAS_lstring & inAttribute_mVarName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  if (inAttribute_mVarName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateVarInExpressionAST (inAttribute_mVarName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateVarInExpressionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateVarInExpressionAST * p = (const cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    result = p->mAttribute_mVarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateVarInExpressionAST::getter_mVarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mVarName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @templateVarInExpressionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GALGAS_lstring & in_mVarName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (THERE),
mAttribute_mVarName (in_mVarName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@templateVarInExpressionAST:" ;
  mAttribute_mVarName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateVarInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mAttribute_mVarName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateVarInExpressionAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                   & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateVarInExpressionAST GALGAS_templateVarInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateVarInExpressionAST result ;
  const GALGAS_templateVarInExpressionAST * p = (const GALGAS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionStringAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionStringAST * p = (const cPtr_templateInstructionStringAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateString.objectCompare (p->mAttribute_mTemplateString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionStringAST::objectCompare (const GALGAS_templateInstructionStringAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_templateInstructionStringAST::constructor_new (GALGAS_string::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST::GALGAS_templateInstructionStringAST (const cPtr_templateInstructionStringAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionStringAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::constructor_new (const GALGAS_string & inAttribute_mTemplateString
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  if (inAttribute_mTemplateString.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionStringAST (inAttribute_mTemplateString COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateInstructionStringAST::getter_mTemplateString (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionStringAST * p = (const cPtr_templateInstructionStringAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionStringAST) ;
    result = p->mAttribute_mTemplateString ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_templateInstructionStringAST::getter_mTemplateString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateString ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @templateInstructionStringAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionStringAST::cPtr_templateInstructionStringAST (const GALGAS_string & in_mTemplateString
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mTemplateString (in_mTemplateString) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionStringAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

void cPtr_templateInstructionStringAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateInstructionStringAST:" ;
  mAttribute_mTemplateString.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionStringAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionStringAST (mAttribute_mTemplateString COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateInstructionStringAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionStringAST ("templateInstructionStringAST",
                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionStringAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionStringAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionStringAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionStringAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionStringAST GALGAS_templateInstructionStringAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionStringAST result ;
  const GALGAS_templateInstructionStringAST * p = (const GALGAS_templateInstructionStringAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionStringAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionStringAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_templateInstructionForeachAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsAscending.objectCompare (p->mAttribute_mIsAscending) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExpression.objectCompare (p->mAttribute_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPrefix.objectCompare (p->mAttribute_mPrefix) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBeforeInstructionList.objectCompare (p->mAttribute_mBeforeInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDoInstructionList.objectCompare (p->mAttribute_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexIdentifier.objectCompare (p->mAttribute_mIndexIdentifier) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBetweenInstructionList.objectCompare (p->mAttribute_mBetweenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAfterInstructionList.objectCompare (p->mAttribute_mAfterInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_templateInstructionForeachAST::objectCompare (const GALGAS_templateInstructionForeachAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (void) :
GALGAS_templateInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachAST::GALGAS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::constructor_new (const GALGAS_bool & inAttribute_mIsAscending,
                                                                                            const GALGAS_templateExpressionAST & inAttribute_mExpression,
                                                                                            const GALGAS_string & inAttribute_mPrefix,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBeforeInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mDoInstructionList,
                                                                                            const GALGAS_lstring & inAttribute_mIndexIdentifier,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mBetweenInstructionList,
                                                                                            const GALGAS_templateInstructionListAST & inAttribute_mAfterInstructionList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  if (inAttribute_mIsAscending.isValid () && inAttribute_mExpression.isValid () && inAttribute_mPrefix.isValid () && inAttribute_mBeforeInstructionList.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mIndexIdentifier.isValid () && inAttribute_mBetweenInstructionList.isValid () && inAttribute_mAfterInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionForeachAST (inAttribute_mIsAscending, inAttribute_mExpression, inAttribute_mPrefix, inAttribute_mBeforeInstructionList, inAttribute_mDoInstructionList, inAttribute_mIndexIdentifier, inAttribute_mBetweenInstructionList, inAttribute_mAfterInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateInstructionForeachAST::getter_mIsAscending (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mIsAscending ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_templateInstructionForeachAST::getter_mIsAscending (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsAscending ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST GALGAS_templateInstructionForeachAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateExpressionAST cPtr_templateInstructionForeachAST::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateInstructionForeachAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mPrefix ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_templateInstructionForeachAST::getter_mPrefix (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPrefix ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mBeforeInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::getter_mBeforeInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBeforeInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mDoInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDoInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateInstructionForeachAST::getter_mIndexIdentifier (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mIndexIdentifier ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_templateInstructionForeachAST::getter_mIndexIdentifier (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexIdentifier ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mBetweenInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::getter_mBetweenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBetweenInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST GALGAS_templateInstructionForeachAST::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionForeachAST * p = (const cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    result = p->mAttribute_mAfterInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionListAST cPtr_templateInstructionForeachAST::getter_mAfterInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAfterInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @templateInstructionForeachAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GALGAS_bool & in_mIsAscending,
                                                                        const GALGAS_templateExpressionAST & in_mExpression,
                                                                        const GALGAS_string & in_mPrefix,
                                                                        const GALGAS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GALGAS_lstring & in_mIndexIdentifier,
                                                                        const GALGAS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GALGAS_templateInstructionListAST & in_mAfterInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mAttribute_mIsAscending (in_mIsAscending),
mAttribute_mExpression (in_mExpression),
mAttribute_mPrefix (in_mPrefix),
mAttribute_mBeforeInstructionList (in_mBeforeInstructionList),
mAttribute_mDoInstructionList (in_mDoInstructionList),
mAttribute_mIndexIdentifier (in_mIndexIdentifier),
mAttribute_mBetweenInstructionList (in_mBetweenInstructionList),
mAttribute_mAfterInstructionList (in_mAfterInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@templateInstructionForeachAST:" ;
  mAttribute_mIsAscending.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPrefix.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_templateInstructionForeachAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mAttribute_mIsAscending, mAttribute_mExpression, mAttribute_mPrefix, mAttribute_mBeforeInstructionList, mAttribute_mDoInstructionList, mAttribute_mIndexIdentifier, mAttribute_mBetweenInstructionList, mAttribute_mAfterInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateInstructionForeachAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                      & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateInstructionForeachAST GALGAS_templateInstructionForeachAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionForeachAST result ;
  const GALGAS_templateInstructionForeachAST * p = (const GALGAS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const char * gNonTerminalNames_templateGrammar [40] = {
  "<expression>",// Index 0
  "<relation_term>",// Index 1
  "<relation_factor>",// Index 2
  "<simple_expression>",// Index 3
  "<term>",// Index 4
  "<factor>",// Index 5
  "<primary>",// Index 6
  "<output_expression_list>",// Index 7
  "<template_instruction>",// Index 8
  "<template_parser_start_symbol>",// Index 9
  "<select_templateSyntax_0>",// Index 10
  "<select_templateSyntax_1>",// Index 11
  "<select_templateSyntax_2>",// Index 12
  "<select_templateSyntax_3>",// Index 13
  "<select_templateSyntax_4>",// Index 14
  "<select_templateSyntax_5>",// Index 15
  "<select_templateSyntax_6>",// Index 16
  "<select_templateSyntax_7>",// Index 17
  "<select_templateSyntax_8>",// Index 18
  "<select_templateSyntax_9>",// Index 19
  "<select_templateSyntax_10>",// Index 20
  "<select_templateSyntax_11>",// Index 21
  "<select_templateSyntax_12>",// Index 22
  "<select_templateSyntax_13>",// Index 23
  "<select_templateSyntax_14>",// Index 24
  "<select_templateSyntax_15>",// Index 25
  "<select_templateSyntax_16>",// Index 26
  "<select_templateSyntax_17>",// Index 27
  "<select_templateSyntax_18>",// Index 28
  "<select_templateSyntax_19>",// Index 29
  "<select_templateSyntax_20>",// Index 30
  "<select_templateSyntax_21>",// Index 31
  "<select_templateSyntax_22>",// Index 32
  "<select_templateSyntax_23>",// Index 33
  "<select_templateSyntax_24>",// Index 34
  "<select_templateSyntax_25>",// Index 35
  "<select_templateSyntax_26>",// Index 36
  "<select_templateSyntax_27>",// Index 37
  "<select_templateSyntax_28>",// Index 38
  "<>"// Index 39
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                S L R    A N A L Y Z E R    A C T I O N    T A B L E                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Action tables handle shift and reduce actions ;
//  - a shift action is (terminal_symbol, SHIFT (n)) : if shifts to state n ;
//  - the accept action is (terminal_symbol, ACCEPT) ;
//  - a reduce action is (terminal_symbol, REDUCE (n)) ; if reduces to state n.

#define SHIFT(a) ((a) + 2)
#define REDUCE(a) (-(a) - 1)
#define ACCEPT (1)
#define END (-1)

static const int16_t gActionTable_templateGrammar [] = {
// State S0 (index = 0)
  C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (102)
, END
// State S1 (index = 17)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S2 (index = 48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (24)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (24)
, END
// State S3 (index = 79)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (25)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (25)
, END
// State S4 (index = 110)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S5 (index = 141)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (34)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (35)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (67)
, END
// State S6 (index = 148)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S7 (index = 179)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S8 (index = 210)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (102)
, END
// State S9 (index = 227)
, C_Lexique_galgasTemplateScanner::kToken_, ACCEPT
, END
// State S10 (index = 230)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (30)
, END
// State S11 (index = 233)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S12 (index = 264)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (41)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (9)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (9)
, END
// State S13 (index = 343)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S14 (index = 374)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S15 (index = 405)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S16 (index = 436)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (11)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (11)
, END
// State S17 (index = 513)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (12)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (12)
, END
// State S18 (index = 590)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (13)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (13)
, END
// State S19 (index = 667)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (14)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (14)
, END
// State S20 (index = 744)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (15)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (15)
, END
// State S21 (index = 821)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (16)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (16)
, END
// State S22 (index = 898)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (17)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (17)
, END
// State S23 (index = 975)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (18)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (18)
, END
// State S24 (index = 1052)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (54)
, END
// State S25 (index = 1131)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, C_Lexique_galgasTemplateScanner::kToken_template, SHIFT (47)
, C_Lexique_galgasTemplateScanner::kToken__40_type, SHIFT (48)
, C_Lexique_galgasTemplateScanner::kToken_filewrapper, SHIFT (49)
, C_Lexique_galgasTemplateScanner::kToken_option, SHIFT (50)
, END
// State S26 (index = 1170)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (23)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (23)
, END
// State S27 (index = 1201)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (31)
, END
// State S28 (index = 1248)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (56)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (34)
, END
// State S29 (index = 1297)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, SHIFT (58)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, SHIFT (59)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, SHIFT (60)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, SHIFT (61)
, C_Lexique_galgasTemplateScanner::kToken__3E_, SHIFT (62)
, C_Lexique_galgasTemplateScanner::kToken__3C_, SHIFT (63)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (36)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (36)
, END
// State S30 (index = 1358)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (43)
, END
// State S31 (index = 1427)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (48)
, END
// State S32 (index = 1502)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (74)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (52)
, END
// State S33 (index = 1579)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (76)
, END
// State S34 (index = 1582)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (69)
, END
// State S35 (index = 1585)
, C_Lexique_galgasTemplateScanner::kToken__28_, REDUCE (68)
, END
// State S36 (index = 1588)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (77)
, END
// State S37 (index = 1591)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (78)
, END
// State S38 (index = 1594)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (96)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (79)
, END
// State S39 (index = 1599)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (103)
, END
// State S40 (index = 1602)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (6)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (6)
, END
// State S41 (index = 1677)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (81)
, END
// State S42 (index = 1684)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (7)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (7)
, END
// State S43 (index = 1759)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (8)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (8)
, END
// State S44 (index = 1834)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (84)
, END
// State S45 (index = 1837)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (54)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (54)
, END
// State S46 (index = 1916)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (19)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (19)
, END
// State S47 (index = 1993)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S48 (index = 2024)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (87)
, END
// State S49 (index = 2027)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (88)
, END
// State S50 (index = 2030)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (89)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (90)
, END
// State S51 (index = 2035)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (92)
, END
// State S52 (index = 2038)
, C_Lexique_galgasTemplateScanner::kToken__5D_, SHIFT (93)
, END
// State S53 (index = 2041)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S54 (index = 2072)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S55 (index = 2103)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (0)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (0)
, END
// State S56 (index = 2146)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S57 (index = 2177)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (1)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (1)
, END
// State S58 (index = 2224)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S59 (index = 2255)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S60 (index = 2286)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S61 (index = 2317)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S62 (index = 2348)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S63 (index = 2379)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S64 (index = 2410)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (2)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (2)
, END
// State S65 (index = 2459)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S66 (index = 2490)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S67 (index = 2521)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S68 (index = 2552)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S69 (index = 2583)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (3)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (3)
, END
// State S70 (index = 2644)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S71 (index = 2675)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S72 (index = 2706)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S73 (index = 2737)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (4)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (4)
, END
// State S74 (index = 2806)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (110)
, END
// State S75 (index = 2809)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (5)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (5)
, END
// State S76 (index = 2884)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S77 (index = 2901)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (113)
, END
// State S78 (index = 2904)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S79 (index = 2925)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (116)
, END
// State S80 (index = 2928)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (117)
, END
// State S81 (index = 2931)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S82 (index = 2962)
, C_Lexique_galgasTemplateScanner::kToken__29_, SHIFT (119)
, END
// State S83 (index = 2965)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (22)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (22)
, END
// State S84 (index = 2970)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (10)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (10)
, END
// State S85 (index = 3047)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (55)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (55)
, END
// State S86 (index = 3124)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (120)
, END
// State S87 (index = 3127)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (81)
, END
// State S88 (index = 3134)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (122)
, END
// State S89 (index = 3137)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (123)
, END
// State S90 (index = 3140)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (124)
, END
// State S91 (index = 3143)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (60)
, END
// State S92 (index = 3146)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (81)
, END
// State S93 (index = 3153)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (20)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (20)
, END
// State S94 (index = 3230)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (31)
, END
// State S95 (index = 3277)
, C_Lexique_galgasTemplateScanner::kToken__7C_, SHIFT (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, SHIFT (54)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (31)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (31)
, END
// State S96 (index = 3324)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__26_, SHIFT (56)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (34)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (34)
, END
// State S97 (index = 3373)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (37)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (37)
, END
// State S98 (index = 3422)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (38)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (38)
, END
// State S99 (index = 3471)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (39)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (39)
, END
// State S100 (index = 3520)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (40)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (40)
, END
// State S101 (index = 3569)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (41)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (41)
, END
// State S102 (index = 3618)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (42)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (42)
, END
// State S103 (index = 3667)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (43)
, END
// State S104 (index = 3736)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (43)
, END
// State S105 (index = 3805)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (43)
, END
// State S106 (index = 3874)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, SHIFT (65)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, SHIFT (66)
, C_Lexique_galgasTemplateScanner::kToken__2B_, SHIFT (67)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (68)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (43)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (43)
, END
// State S107 (index = 3943)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (48)
, END
// State S108 (index = 4018)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (48)
, END
// State S109 (index = 4093)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__2A_, SHIFT (70)
, C_Lexique_galgasTemplateScanner::kToken__2F_, SHIFT (71)
, C_Lexique_galgasTemplateScanner::kToken_mod, SHIFT (72)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (48)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (48)
, END
// State S110 (index = 4168)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__2E_, SHIFT (74)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (52)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (52)
, END
// State S111 (index = 4245)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (65)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S112 (index = 4262)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (138)
, END
// State S113 (index = 4265)
, C_Lexique_galgasTemplateScanner::kToken_in, SHIFT (139)
, END
// State S114 (index = 4268)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S115 (index = 4289)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (88)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (141)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (88)
, END
// State S116 (index = 4296)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (143)
, END
// State S117 (index = 4301)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (29)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (29)
, END
// State S118 (index = 4332)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (81)
, END
// State S119 (index = 4339)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__2E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (21)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (21)
, END
// State S120 (index = 4416)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (81)
, END
// State S121 (index = 4423)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (57)
, END
// State S122 (index = 4426)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (147)
, END
// State S123 (index = 4429)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (148)
, END
// State S124 (index = 4432)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (149)
, END
// State S125 (index = 4435)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (59)
, END
// State S126 (index = 4438)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (32)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (32)
, END
// State S127 (index = 4481)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (33)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (33)
, END
// State S128 (index = 4524)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (35)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (35)
, END
// State S129 (index = 4571)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (44)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (44)
, END
// State S130 (index = 4632)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (45)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (45)
, END
// State S131 (index = 4693)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (46)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (46)
, END
// State S132 (index = 4754)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (47)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (47)
, END
// State S133 (index = 4815)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (49)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (49)
, END
// State S134 (index = 4884)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (50)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (50)
, END
// State S135 (index = 4953)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (51)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (51)
, END
// State S136 (index = 5022)
, C_Lexique_galgasTemplateScanner::kToken__7C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__26_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3D__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E__3D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3C__3C_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3E__3E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2B_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2A_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__2F_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_mod, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_identifier, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_then, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (53)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (53)
, END
// State S137 (index = 5097)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (66)
, END
// State S138 (index = 5100)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (26)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (26)
, END
// State S139 (index = 5131)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S140 (index = 5162)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (91)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (91)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (91)
, END
// State S141 (index = 5169)
, C_Lexique_galgasTemplateScanner::kToken__2D_, SHIFT (11)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (12)
, C_Lexique_galgasTemplateScanner::kToken_not, SHIFT (13)
, C_Lexique_galgasTemplateScanner::kToken__7E_, SHIFT (14)
, C_Lexique_galgasTemplateScanner::kToken__28_, SHIFT (15)
, C_Lexique_galgasTemplateScanner::kToken_true, SHIFT (16)
, C_Lexique_galgasTemplateScanner::kToken_false, SHIFT (17)
, C_Lexique_galgasTemplateScanner::kToken_uint_33__32_, SHIFT (18)
, C_Lexique_galgasTemplateScanner::kToken_sint_33__32__5F_S, SHIFT (19)
, C_Lexique_galgasTemplateScanner::kToken_uint_36__34__5F_L, SHIFT (20)
, C_Lexique_galgasTemplateScanner::kToken_sint_36__34__5F_LS, SHIFT (21)
, C_Lexique_galgasTemplateScanner::kToken_double_2E_xxx, SHIFT (22)
, C_Lexique_galgasTemplateScanner::kToken__27_char_27_, SHIFT (23)
, C_Lexique_galgasTemplateScanner::kToken__22_string_22_, SHIFT (24)
, C_Lexique_galgasTemplateScanner::kToken__5B_, SHIFT (25)
, END
// State S142 (index = 5200)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (92)
, C_Lexique_galgasTemplateScanner::kToken_else, SHIFT (152)
, END
// State S143 (index = 5205)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (154)
, END
// State S144 (index = 5208)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (155)
, END
// State S145 (index = 5211)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (64)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (64)
, END
// State S146 (index = 5216)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (56)
, END
// State S147 (index = 5219)
, C_Lexique_galgasTemplateScanner::kToken__29_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (63)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (81)
, END
// State S148 (index = 5226)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (61)
, END
// State S149 (index = 5229)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (157)
, END
// State S150 (index = 5232)
, C_Lexique_galgasTemplateScanner::kToken__3A_, SHIFT (158)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (70)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (70)
, END
// State S151 (index = 5239)
, C_Lexique_galgasTemplateScanner::kToken_then, SHIFT (160)
, END
// State S152 (index = 5242)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (94)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S153 (index = 5259)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (163)
, END
// State S154 (index = 5262)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (98)
, C_Lexique_galgasTemplateScanner::kToken__2C_, SHIFT (143)
, END
// State S155 (index = 5267)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (100)
, END
// State S156 (index = 5286)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (58)
, END
// State S157 (index = 5289)
, C_Lexique_galgasTemplateScanner::kToken__5D_, REDUCE (62)
, END
// State S158 (index = 5292)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (167)
, END
// State S159 (index = 5295)
, C_Lexique_galgasTemplateScanner::kToken_before, SHIFT (168)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (72)
, END
// State S160 (index = 5300)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (90)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S161 (index = 5321)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (94)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S162 (index = 5338)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (93)
, END
// State S163 (index = 5341)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (28)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (28)
, END
// State S164 (index = 5372)
, C_Lexique_galgasTemplateScanner::kToken__3A_, REDUCE (99)
, END
// State S165 (index = 5375)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (100)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (100)
, END
// State S166 (index = 5394)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (96)
, C_Lexique_galgasTemplateScanner::kToken_case, SHIFT (79)
, END
// State S167 (index = 5399)
, C_Lexique_galgasTemplateScanner::kToken_before, REDUCE (71)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (71)
, END
// State S168 (index = 5404)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (74)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S169 (index = 5421)
, C_Lexique_galgasTemplateScanner::kToken_do, SHIFT (176)
, END
// State S170 (index = 5424)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (88)
, C_Lexique_galgasTemplateScanner::kToken_elsif, SHIFT (141)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (88)
, END
// State S171 (index = 5431)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (95)
, END
// State S172 (index = 5434)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (101)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (101)
, END
// State S173 (index = 5439)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (97)
, END
// State S174 (index = 5442)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (74)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S175 (index = 5459)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (73)
, END
// State S176 (index = 5462)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_index, SHIFT (179)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (76)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (76)
, END
// State S177 (index = 5485)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (89)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (89)
, END
// State S178 (index = 5490)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (75)
, END
// State S179 (index = 5493)
, C_Lexique_galgasTemplateScanner::kToken_identifier, SHIFT (181)
, END
// State S180 (index = 5496)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S181 (index = 5517)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (77)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (77)
, END
// State S182 (index = 5538)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (78)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S183 (index = 5559)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (80)
, C_Lexique_galgasTemplateScanner::kToken_between, SHIFT (185)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (80)
, END
// State S184 (index = 5566)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (79)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (79)
, END
// State S185 (index = 5573)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S186 (index = 5592)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (84)
, C_Lexique_galgasTemplateScanner::kToken_after, SHIFT (189)
, END
// State S187 (index = 5597)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (82)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S188 (index = 5616)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (81)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (81)
, END
// State S189 (index = 5621)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (86)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S190 (index = 5638)
, C_Lexique_galgasTemplateScanner::kToken_end, SHIFT (194)
, END
// State S191 (index = 5641)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (83)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (83)
, END
// State S192 (index = 5646)
, C_Lexique_galgasTemplateScanner::kToken__21_, SHIFT (1)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, SHIFT (2)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, SHIFT (3)
, C_Lexique_galgasTemplateScanner::kToken_block, SHIFT (4)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (86)
, C_Lexique_galgasTemplateScanner::kToken_for, SHIFT (5)
, C_Lexique_galgasTemplateScanner::kToken_if, SHIFT (6)
, C_Lexique_galgasTemplateScanner::kToken_switch, SHIFT (7)
, END
// State S193 (index = 5663)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (85)
, END
// State S194 (index = 5666)
, C_Lexique_galgasTemplateScanner::kToken__21_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken__3F__5E_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken__21__5E_, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_block, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_for, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_do, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_between, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_after, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_if, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_elsif, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_else, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_switch, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_case, REDUCE (27)
, C_Lexique_galgasTemplateScanner::kToken_, REDUCE (27)
, END
// State S195 (index = 5697)
, C_Lexique_galgasTemplateScanner::kToken_end, REDUCE (87)
, END} ;

static const uint32_t gActionTableIndex_templateGrammar [196] = {
  0  // S0
, 17  // S1
, 48  // S2
, 79  // S3
, 110  // S4
, 141  // S5
, 148  // S6
, 179  // S7
, 210  // S8
, 227  // S9
, 230  // S10
, 233  // S11
, 264  // S12
, 343  // S13
, 374  // S14
, 405  // S15
, 436  // S16
, 513  // S17
, 590  // S18
, 667  // S19
, 744  // S20
, 821  // S21
, 898  // S22
, 975  // S23
, 1052  // S24
, 1131  // S25
, 1170  // S26
, 1201  // S27
, 1248  // S28
, 1297  // S29
, 1358  // S30
, 1427  // S31
, 1502  // S32
, 1579  // S33
, 1582  // S34
, 1585  // S35
, 1588  // S36
, 1591  // S37
, 1594  // S38
, 1599  // S39
, 1602  // S40
, 1677  // S41
, 1684  // S42
, 1759  // S43
, 1834  // S44
, 1837  // S45
, 1916  // S46
, 1993  // S47
, 2024  // S48
, 2027  // S49
, 2030  // S50
, 2035  // S51
, 2038  // S52
, 2041  // S53
, 2072  // S54
, 2103  // S55
, 2146  // S56
, 2177  // S57
, 2224  // S58
, 2255  // S59
, 2286  // S60
, 2317  // S61
, 2348  // S62
, 2379  // S63
, 2410  // S64
, 2459  // S65
, 2490  // S66
, 2521  // S67
, 2552  // S68
, 2583  // S69
, 2644  // S70
, 2675  // S71
, 2706  // S72
, 2737  // S73
, 2806  // S74
, 2809  // S75
, 2884  // S76
, 2901  // S77
, 2904  // S78
, 2925  // S79
, 2928  // S80
, 2931  // S81
, 2962  // S82
, 2965  // S83
, 2970  // S84
, 3047  // S85
, 3124  // S86
, 3127  // S87
, 3134  // S88
, 3137  // S89
, 3140  // S90
, 3143  // S91
, 3146  // S92
, 3153  // S93
, 3230  // S94
, 3277  // S95
, 3324  // S96
, 3373  // S97
, 3422  // S98
, 3471  // S99
, 3520  // S100
, 3569  // S101
, 3618  // S102
, 3667  // S103
, 3736  // S104
, 3805  // S105
, 3874  // S106
, 3943  // S107
, 4018  // S108
, 4093  // S109
, 4168  // S110
, 4245  // S111
, 4262  // S112
, 4265  // S113
, 4268  // S114
, 4289  // S115
, 4296  // S116
, 4301  // S117
, 4332  // S118
, 4339  // S119
, 4416  // S120
, 4423  // S121
, 4426  // S122
, 4429  // S123
, 4432  // S124
, 4435  // S125
, 4438  // S126
, 4481  // S127
, 4524  // S128
, 4571  // S129
, 4632  // S130
, 4693  // S131
, 4754  // S132
, 4815  // S133
, 4884  // S134
, 4953  // S135
, 5022  // S136
, 5097  // S137
, 5100  // S138
, 5131  // S139
, 5162  // S140
, 5169  // S141
, 5200  // S142
, 5205  // S143
, 5208  // S144
, 5211  // S145
, 5216  // S146
, 5219  // S147
, 5226  // S148
, 5229  // S149
, 5232  // S150
, 5239  // S151
, 5242  // S152
, 5259  // S153
, 5262  // S154
, 5267  // S155
, 5286  // S156
, 5289  // S157
, 5292  // S158
, 5295  // S159
, 5300  // S160
, 5321  // S161
, 5338  // S162
, 5341  // S163
, 5372  // S164
, 5375  // S165
, 5394  // S166
, 5399  // S167
, 5404  // S168
, 5421  // S169
, 5424  // S170
, 5431  // S171
, 5434  // S172
, 5439  // S173
, 5442  // S174
, 5459  // S175
, 5462  // S176
, 5485  // S177
, 5490  // S178
, 5493  // S179
, 5496  // S180
, 5517  // S181
, 5538  // S182
, 5559  // S183
, 5566  // S184
, 5573  // S185
, 5592  // S186
, 5597  // S187
, 5616  // S188
, 5621  // S189
, 5638  // S190
, 5641  // S191
, 5646  // S192
, 5663  // S193
, 5666  // S194
, 5697  // S195
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_templateGrammar_0 [7] = {8, 8,
  9, 9,
  38, 10, -1} ;

static const int16_t gSuccessorTable_templateGrammar_1 [15] = {0, 26,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_4 [15] = {0, 33,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_5 [3] = {21, 36, -1} ;

static const int16_t gSuccessorTable_templateGrammar_6 [15] = {0, 37,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_7 [15] = {0, 38,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_8 [5] = {8, 8,
  38, 39, -1} ;

static const int16_t gSuccessorTable_templateGrammar_11 [5] = {5, 40,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_13 [5] = {5, 42,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_14 [5] = {5, 43,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_15 [15] = {0, 44,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_24 [3] = {16, 46, -1} ;

static const int16_t gSuccessorTable_templateGrammar_25 [17] = {0, 51,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32,
  17, 52, -1} ;

static const int16_t gSuccessorTable_templateGrammar_27 [3] = {10, 55, -1} ;

static const int16_t gSuccessorTable_templateGrammar_28 [3] = {11, 57, -1} ;

static const int16_t gSuccessorTable_templateGrammar_29 [3] = {12, 64, -1} ;

static const int16_t gSuccessorTable_templateGrammar_30 [3] = {13, 69, -1} ;

static const int16_t gSuccessorTable_templateGrammar_31 [3] = {14, 73, -1} ;

static const int16_t gSuccessorTable_templateGrammar_32 [3] = {15, 75, -1} ;

static const int16_t gSuccessorTable_templateGrammar_38 [3] = {35, 80, -1} ;

static const int16_t gSuccessorTable_templateGrammar_41 [5] = {7, 82,
  19, 83, -1} ;

static const int16_t gSuccessorTable_templateGrammar_45 [3] = {16, 85, -1} ;

static const int16_t gSuccessorTable_templateGrammar_47 [15] = {0, 86,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_50 [3] = {18, 91, -1} ;

static const int16_t gSuccessorTable_templateGrammar_53 [13] = {1, 94,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_54 [13] = {1, 95,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_56 [11] = {2, 96,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_58 [9] = {3, 97,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_59 [9] = {3, 98,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_60 [9] = {3, 99,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_61 [9] = {3, 100,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_62 [9] = {3, 101,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_63 [9] = {3, 102,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_65 [7] = {4, 103,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_66 [7] = {4, 104,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_67 [7] = {4, 105,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_68 [7] = {4, 106,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_70 [5] = {5, 107,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_71 [5] = {5, 108,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_72 [5] = {5, 109,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_76 [5] = {8, 111,
  20, 112, -1} ;

static const int16_t gSuccessorTable_templateGrammar_78 [5] = {8, 114,
  32, 115, -1} ;

static const int16_t gSuccessorTable_templateGrammar_81 [15] = {0, 118,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_87 [5] = {7, 121,
  19, 83, -1} ;

static const int16_t gSuccessorTable_templateGrammar_92 [5] = {7, 125,
  19, 83, -1} ;

static const int16_t gSuccessorTable_templateGrammar_94 [3] = {10, 126, -1} ;

static const int16_t gSuccessorTable_templateGrammar_95 [3] = {10, 127, -1} ;

static const int16_t gSuccessorTable_templateGrammar_96 [3] = {11, 128, -1} ;

static const int16_t gSuccessorTable_templateGrammar_103 [3] = {13, 129, -1} ;

static const int16_t gSuccessorTable_templateGrammar_104 [3] = {13, 130, -1} ;

static const int16_t gSuccessorTable_templateGrammar_105 [3] = {13, 131, -1} ;

static const int16_t gSuccessorTable_templateGrammar_106 [3] = {13, 132, -1} ;

static const int16_t gSuccessorTable_templateGrammar_107 [3] = {14, 133, -1} ;

static const int16_t gSuccessorTable_templateGrammar_108 [3] = {14, 134, -1} ;

static const int16_t gSuccessorTable_templateGrammar_109 [3] = {14, 135, -1} ;

static const int16_t gSuccessorTable_templateGrammar_110 [3] = {15, 136, -1} ;

static const int16_t gSuccessorTable_templateGrammar_111 [5] = {8, 111,
  20, 137, -1} ;

static const int16_t gSuccessorTable_templateGrammar_114 [5] = {8, 114,
  32, 140, -1} ;

static const int16_t gSuccessorTable_templateGrammar_115 [3] = {31, 142, -1} ;

static const int16_t gSuccessorTable_templateGrammar_116 [3] = {36, 144, -1} ;

static const int16_t gSuccessorTable_templateGrammar_118 [3] = {19, 145, -1} ;

static const int16_t gSuccessorTable_templateGrammar_120 [5] = {7, 146,
  19, 83, -1} ;

static const int16_t gSuccessorTable_templateGrammar_139 [15] = {0, 150,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_141 [15] = {0, 151,
  1, 27,
  2, 28,
  3, 29,
  4, 30,
  5, 31,
  6, 32, -1} ;

static const int16_t gSuccessorTable_templateGrammar_142 [3] = {33, 153, -1} ;

static const int16_t gSuccessorTable_templateGrammar_147 [5] = {7, 156,
  19, 83, -1} ;

static const int16_t gSuccessorTable_templateGrammar_150 [3] = {22, 159, -1} ;

static const int16_t gSuccessorTable_templateGrammar_152 [5] = {8, 161,
  34, 162, -1} ;

static const int16_t gSuccessorTable_templateGrammar_154 [3] = {36, 164, -1} ;

static const int16_t gSuccessorTable_templateGrammar_155 [5] = {8, 165,
  37, 166, -1} ;

static const int16_t gSuccessorTable_templateGrammar_159 [3] = {23, 169, -1} ;

static const int16_t gSuccessorTable_templateGrammar_160 [5] = {8, 114,
  32, 170, -1} ;

static const int16_t gSuccessorTable_templateGrammar_161 [5] = {8, 161,
  34, 171, -1} ;

static const int16_t gSuccessorTable_templateGrammar_165 [5] = {8, 165,
  37, 172, -1} ;

static const int16_t gSuccessorTable_templateGrammar_166 [3] = {35, 173, -1} ;

static const int16_t gSuccessorTable_templateGrammar_168 [5] = {8, 174,
  24, 175, -1} ;

static const int16_t gSuccessorTable_templateGrammar_170 [3] = {31, 177, -1} ;

static const int16_t gSuccessorTable_templateGrammar_174 [5] = {8, 174,
  24, 178, -1} ;

static const int16_t gSuccessorTable_templateGrammar_176 [3] = {25, 180, -1} ;

static const int16_t gSuccessorTable_templateGrammar_180 [5] = {8, 182,
  26, 183, -1} ;

static const int16_t gSuccessorTable_templateGrammar_182 [5] = {8, 182,
  26, 184, -1} ;

static const int16_t gSuccessorTable_templateGrammar_183 [3] = {27, 186, -1} ;

static const int16_t gSuccessorTable_templateGrammar_185 [5] = {8, 187,
  28, 188, -1} ;

static const int16_t gSuccessorTable_templateGrammar_186 [3] = {29, 190, -1} ;

static const int16_t gSuccessorTable_templateGrammar_187 [5] = {8, 187,
  28, 191, -1} ;

static const int16_t gSuccessorTable_templateGrammar_189 [5] = {8, 192,
  30, 193, -1} ;

static const int16_t gSuccessorTable_templateGrammar_192 [5] = {8, 192,
  30, 195, -1} ;

static const int16_t * gSuccessorTable_templateGrammar [196] = {
gSuccessorTable_templateGrammar_0, gSuccessorTable_templateGrammar_1, NULL, NULL, 
  gSuccessorTable_templateGrammar_4, gSuccessorTable_templateGrammar_5, gSuccessorTable_templateGrammar_6, gSuccessorTable_templateGrammar_7, 
  gSuccessorTable_templateGrammar_8, NULL, NULL, gSuccessorTable_templateGrammar_11, 
  NULL, gSuccessorTable_templateGrammar_13, gSuccessorTable_templateGrammar_14, gSuccessorTable_templateGrammar_15, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_24, gSuccessorTable_templateGrammar_25, NULL, gSuccessorTable_templateGrammar_27, 
  gSuccessorTable_templateGrammar_28, gSuccessorTable_templateGrammar_29, gSuccessorTable_templateGrammar_30, gSuccessorTable_templateGrammar_31, 
  gSuccessorTable_templateGrammar_32, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_38, NULL, 
  NULL, gSuccessorTable_templateGrammar_41, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_45, NULL, gSuccessorTable_templateGrammar_47, 
  NULL, NULL, gSuccessorTable_templateGrammar_50, NULL, 
  NULL, gSuccessorTable_templateGrammar_53, gSuccessorTable_templateGrammar_54, NULL, 
  gSuccessorTable_templateGrammar_56, NULL, gSuccessorTable_templateGrammar_58, gSuccessorTable_templateGrammar_59, 
  gSuccessorTable_templateGrammar_60, gSuccessorTable_templateGrammar_61, gSuccessorTable_templateGrammar_62, gSuccessorTable_templateGrammar_63, 
  NULL, gSuccessorTable_templateGrammar_65, gSuccessorTable_templateGrammar_66, gSuccessorTable_templateGrammar_67, 
  gSuccessorTable_templateGrammar_68, NULL, gSuccessorTable_templateGrammar_70, gSuccessorTable_templateGrammar_71, 
  gSuccessorTable_templateGrammar_72, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_76, NULL, gSuccessorTable_templateGrammar_78, NULL, 
  NULL, gSuccessorTable_templateGrammar_81, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_templateGrammar_87, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_92, NULL, gSuccessorTable_templateGrammar_94, gSuccessorTable_templateGrammar_95, 
  gSuccessorTable_templateGrammar_96, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_templateGrammar_103, 
  gSuccessorTable_templateGrammar_104, gSuccessorTable_templateGrammar_105, gSuccessorTable_templateGrammar_106, gSuccessorTable_templateGrammar_107, 
  gSuccessorTable_templateGrammar_108, gSuccessorTable_templateGrammar_109, gSuccessorTable_templateGrammar_110, gSuccessorTable_templateGrammar_111, 
  NULL, NULL, gSuccessorTable_templateGrammar_114, gSuccessorTable_templateGrammar_115, 
  gSuccessorTable_templateGrammar_116, NULL, gSuccessorTable_templateGrammar_118, NULL, 
  gSuccessorTable_templateGrammar_120, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_templateGrammar_139, 
  NULL, gSuccessorTable_templateGrammar_141, gSuccessorTable_templateGrammar_142, NULL, 
  NULL, NULL, NULL, gSuccessorTable_templateGrammar_147, 
  NULL, NULL, gSuccessorTable_templateGrammar_150, NULL, 
  gSuccessorTable_templateGrammar_152, NULL, gSuccessorTable_templateGrammar_154, gSuccessorTable_templateGrammar_155, 
  NULL, NULL, NULL, gSuccessorTable_templateGrammar_159, 
  gSuccessorTable_templateGrammar_160, gSuccessorTable_templateGrammar_161, NULL, NULL, 
  NULL, gSuccessorTable_templateGrammar_165, gSuccessorTable_templateGrammar_166, NULL, 
  gSuccessorTable_templateGrammar_168, NULL, gSuccessorTable_templateGrammar_170, NULL, 
  NULL, NULL, gSuccessorTable_templateGrammar_174, NULL, 
  gSuccessorTable_templateGrammar_176, NULL, NULL, NULL, 
  gSuccessorTable_templateGrammar_180, NULL, gSuccessorTable_templateGrammar_182, gSuccessorTable_templateGrammar_183, 
  NULL, gSuccessorTable_templateGrammar_185, gSuccessorTable_templateGrammar_186, gSuccessorTable_templateGrammar_187, 
  NULL, gSuccessorTable_templateGrammar_189, NULL, NULL, 
  gSuccessorTable_templateGrammar_192, NULL, NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_templateGrammar [105 * 2] = {
  0, 2,
  1, 2,
  2, 2,
  3, 2,
  4, 2,
  5, 2,
  5, 2,
  5, 2,
  5, 2,
  6, 1,
  6, 3,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 2,
  6, 3,
  6, 4,
  7, 1,
  8, 2,
  8, 1,
  8, 1,
  8, 5,
  8, 14,
  8, 7,
  8, 4,
  9, 1,
  10, 0,
  10, 3,
  10, 3,
  11, 0,
  11, 3,
  12, 0,
  12, 2,
  12, 2,
  12, 2,
  12, 2,
  12, 2,
  12, 2,
  13, 0,
  13, 3,
  13, 3,
  13, 3,
  13, 3,
  14, 0,
  14, 3,
  14, 3,
  14, 3,
  15, 0,
  15, 3,
  16, 0,
  16, 2,
  17, 4,
  17, 3,
  17, 5,
  17, 3,
  17, 2,
  18, 3,
  18, 4,
  19, 0,
  19, 3,
  20, 0,
  20, 2,
  21, 0,
  21, 1,
  21, 1,
  22, 0,
  22, 2,
  23, 0,
  23, 2,
  24, 0,
  24, 2,
  25, 0,
  25, 2,
  26, 0,
  26, 2,
  27, 0,
  27, 2,
  28, 0,
  28, 2,
  29, 0,
  29, 2,
  30, 0,
  30, 2,
  31, 0,
  31, 5,
  32, 0,
  32, 2,
  33, 0,
  33, 2,
  34, 0,
  34, 2,
  35, 0,
  35, 6,
  36, 0,
  36, 3,
  37, 0,
  37, 2,
  38, 0,
  38, 2,
  39, 1
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                      'expression' non terminal implementation                                        
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_expression_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_templateSyntax_expression_i0_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_expression_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_templateSyntax_expression_i0_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'relation_term' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_term_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_templateSyntax_relation_5F_term_i1_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 1 :
      rule_templateSyntax_relation_5F_term_i1_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'relation_factor' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_relation_5F_factor_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_templateSyntax_relation_5F_factor_i2_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 2 :
      rule_templateSyntax_relation_5F_factor_i2_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                  'simple_expression' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_simple_5F_expression_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_templateSyntax_simple_5F_expression_i3_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_templateSyntax_simple_5F_expression_i3_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                         'term' non terminal implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_term_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_templateSyntax_term_i4_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_term_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_templateSyntax_term_i4_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'factor' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_factor_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_i5_parse(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_i7_parse(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_i8_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'primary' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_primary_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_i9_parse(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_i10_parse(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_i11_parse(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_i12_parse(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_i14_parse(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_i15_parse(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_i19_parse(inLexique) ;
    break ;
  case 20 :
      rule_templateSyntax_primary_i20_parse(inLexique) ;
    break ;
  case 21 :
      rule_templateSyntax_primary_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_ (GALGAS_templateExpressionAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_i9_(parameter_1, inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_i11_(parameter_1, inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_i12_(parameter_1, inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_i19_(parameter_1, inLexique) ;
    break ;
  case 20 :
      rule_templateSyntax_primary_i20_(parameter_1, inLexique) ;
    break ;
  case 21 :
      rule_templateSyntax_primary_i21_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'output_expression_list' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_templateSyntax_output_5F_expression_5F_list_i22_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_ (GALGAS_templateExpressionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_templateSyntax_output_5F_expression_5F_list_i22_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'template_instruction' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_template_5F_instruction_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_parse(inLexique) ;
    break ;
  case 26 :
      rule_templateSyntax_template_5F_instruction_i26_parse(inLexique) ;
    break ;
  case 27 :
      rule_templateSyntax_template_5F_instruction_i27_parse(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_template_5F_instruction_i28_parse(inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_template_5F_instruction_i29_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_(parameter_1, inLexique) ;
    break ;
  case 26 :
      rule_templateSyntax_template_5F_instruction_i26_(parameter_1, inLexique) ;
    break ;
  case 27 :
      rule_templateSyntax_template_5F_instruction_i27_(parameter_1, inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_template_5F_instruction_i28_(parameter_1, inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_template_5F_instruction_i29_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'template_parser_start_symbol' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_parse (C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GALGAS_templateInstructionListAST &  parameter_1,
                                C_Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i30_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::performIndexing (C_Compiler * /* inCompiler */,
             const C_String & /* inSourceFilePath */) {
}

void cGrammar_templateGrammar::performOnlyLexicalAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlySyntaxAnalysis (C_Compiler * inCompiler,
             const C_String & inSourceFilePath) {
  C_Lexique_galgasTemplateScanner * scanner = NULL ;
  macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText () != NULL) {
    scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                     gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                     gProductionsTable_templateGrammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        Grammar start symbol implementation                                           
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::_performSourceFileParsing_ (C_Compiler * inCompiler,
                                GALGAS_lstring inFilePath,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GALGAS_string filePathAsString = inFilePath.getter_string (HERE) ;
    C_String filePath = filePathAsString.stringValue () ;
    if (! C_FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().stringByDeletingLastPathComponent ().stringByAppendingPathComponent (filePath) ;
    }
    if (C_FileManager::fileExistsAtPath (filePath)) {
      C_Lexique_galgasTemplateScanner * scanner = NULL ;
      macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText () != NULL) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                         gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                         gProductionsTable_templateGrammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_templateGrammar grammar ;
          grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
        }
      }else{
        C_String message ;
        message << "the '" << filePath << "' file exists, but cannot be read" ;
        const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      C_String message ;
      message << "the '" << filePath << "' file does not exist" ;
      const GALGAS_location errorLocation (inFilePath.getter_location (THERE)) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, TC_Array <C_FixItDescription> () COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_templateGrammar::_performSourceStringParsing_ (C_Compiler * inCompiler,
                                GALGAS_string inSourceString,
                                GALGAS_string inNameString,
                                GALGAS_templateInstructionListAST &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const C_String sourceString = inSourceString.stringValue () ;
    const C_String nameString = inNameString.stringValue () ;
    C_Lexique_galgasTemplateScanner * scanner = NULL ;
    macroMyNew (scanner, C_Lexique_galgasTemplateScanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText () != NULL) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                       gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                       gProductionsTable_templateGrammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_templateGrammar grammar ;
        grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_0' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_0 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 31 32 33
  return inLexique->nextProductionIndex () - 30 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_1' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 34 35
  return inLexique->nextProductionIndex () - 33 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_2' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 36 37 38 39 40 41 42
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_3' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 43 44 45 46 47
  return inLexique->nextProductionIndex () - 42 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_4' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 48 49 50 51
  return inLexique->nextProductionIndex () - 47 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_5' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 52 53
  return inLexique->nextProductionIndex () - 51 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_6' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 54 55
  return inLexique->nextProductionIndex () - 53 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_7' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 56 57 58 59 60
  return inLexique->nextProductionIndex () - 55 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_8' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_9' non terminal implementation                                  
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 63 64
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_10' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 65 66
  return inLexique->nextProductionIndex () - 64 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_11' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 67 68 69
  return inLexique->nextProductionIndex () - 66 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_12' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 70 71
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_13' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 72 73
  return inLexique->nextProductionIndex () - 71 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_14' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 74 75
  return inLexique->nextProductionIndex () - 73 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_15' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 76 77
  return inLexique->nextProductionIndex () - 75 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_16' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 78 79
  return inLexique->nextProductionIndex () - 77 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_17' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 80 81
  return inLexique->nextProductionIndex () - 79 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_18' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 82 83
  return inLexique->nextProductionIndex () - 81 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_19' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 84 85
  return inLexique->nextProductionIndex () - 83 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_20' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 86 87
  return inLexique->nextProductionIndex () - 85 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_21' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 88 89
  return inLexique->nextProductionIndex () - 87 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_22' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 90 91
  return inLexique->nextProductionIndex () - 89 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_23' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 92 93
  return inLexique->nextProductionIndex () - 91 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_24' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 94 95
  return inLexique->nextProductionIndex () - 93 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_25' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 96 97
  return inLexique->nextProductionIndex () - 95 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_26' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 98 99
  return inLexique->nextProductionIndex () - 97 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_27' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 100 101
  return inLexique->nextProductionIndex () - 99 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                               'select_templateSyntax_28' non terminal implementation                                 
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (C_Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers : 102 103
  return inLexique->nextProductionIndex () - 101 ;
}

//---------------------------------------------------------------------------------------------------------------------*

