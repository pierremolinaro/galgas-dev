#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_switchInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_switchInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfSwitchExpression.objectCompare (p->mProperty_mEndOfSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBranches.objectCompare (p->mProperty_mBranches) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_switch_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_switch_5F_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_switchInstructionAST::objectCompare (const GALGAS_switchInstructionAST & inOperand) const {
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

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mSwitchExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfSwitchExpression,
                                                                          const GALGAS_switchBranchesAST & inAttribute_mBranches,
                                                                          const GALGAS_location & inAttribute_mEndOf_5F_switch_5F_instruction
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSwitchExpression.isValid () && inAttribute_mEndOfSwitchExpression.isValid () && inAttribute_mBranches.isValid () && inAttribute_mEndOf_5F_switch_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (inAttribute_mInstructionLocation, inAttribute_mSwitchExpression, inAttribute_mEndOfSwitchExpression, inAttribute_mBranches, inAttribute_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_switchInstructionAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOfSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mEndOfSwitchExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_switchInstructionAST::getter_mEndOfSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfSwitchExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchInstructionAST::getter_mBranches (UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mBranches ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST cPtr_switchInstructionAST::getter_mBranches (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBranches ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_switchInstructionAST * p = (const cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    result = p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_switchInstructionAST::getter_mEndOf_5F_switch_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_switch_5F_instruction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMSwitchExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::setter_setMSwitchExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSwitchExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMEndOfSwitchExpression (GALGAS_location inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOfSwitchExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::setter_setMEndOfSwitchExpression (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfSwitchExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMBranches (GALGAS_switchBranchesAST inValue
                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mBranches = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::setter_setMBranches (GALGAS_switchBranchesAST inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mBranches = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchInstructionAST::setter_setMEndOf_5F_switch_5F_instruction (GALGAS_location inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    p->mProperty_mEndOf_5F_switch_5F_instruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::setter_setMEndOf_5F_switch_5F_instruction (GALGAS_location inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_switch_5F_instruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                                                      const GALGAS_location & in_mEndOfSwitchExpression,
                                                      const GALGAS_switchBranchesAST & in_mBranches,
                                                      const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mEndOfSwitchExpression (in_mEndOfSwitchExpression),
mProperty_mBranches (in_mBranches),
mProperty_mEndOf_5F_switch_5F_instruction (in_mEndOf_5F_switch_5F_instruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@switchInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOfSwitchExpression, mProperty_mBranches, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@switchInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  const GALGAS_switchInstructionAST * p = (const GALGAS_switchInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@switchBranchesForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_switchBranchesForGeneration : public cCollectionElement {
  public: GALGAS_switchBranchesForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_switchBranchesForGeneration (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                          const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                          const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                          const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GALGAS_lstringlist & in_mSwitchConstantList,
                                                                                                const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSwitchConstantList, inElement.mProperty_mExtractedAssociatedValuesForGeneration, inElement.mProperty_mEndOfBranchLocationIndex, inElement.mProperty_mInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_switchBranchesForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchBranchesForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchBranchesForGeneration (mObject.mProperty_mSwitchConstantList, mObject.mProperty_mExtractedAssociatedValuesForGeneration, mObject.mProperty_mEndOfBranchLocationIndex, mObject.mProperty_mInstructions COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_switchBranchesForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSwitchConstantList" ":" ;
  mObject.mProperty_mSwitchConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedAssociatedValuesForGeneration" ":" ;
  mObject.mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranchLocationIndex" ":" ;
  mObject.mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructions" ":" ;
  mObject.mProperty_mInstructions.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_switchBranchesForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchBranchesForGeneration * operand = (cCollectionElement_switchBranchesForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchBranchesForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration::GALGAS_switchBranchesForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration::GALGAS_switchBranchesForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                  const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                  const GALGAS_uint & inOperand2,
                                                                                                  const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_switchBranchesForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchBranchesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstringlist & in_mSwitchConstantList,
                                                                    const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                    const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_switchBranchesForGeneration (in_mSwitchConstantList,
                                                                 in_mExtractedAssociatedValuesForGeneration,
                                                                 in_mEndOfBranchLocationIndex,
                                                                 in_mInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                              const GALGAS_uint & inOperand2,
                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_switchBranchesForGeneration::setter_append (GALGAS_switchBranchesForGeneration_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_switchBranchesForGeneration::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                               const GALGAS_extractedAssociatedValuesForGeneration inOperand1,
                                                               const GALGAS_uint inOperand2,
                                                               const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_switchBranchesForGeneration::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                               GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                               GALGAS_uint & outOperand2,
                                                               GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
        outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
        outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
        outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
        outOperand3 = p->mObject.mProperty_mInstructions ;
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
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::plusAssign_operation (const GALGAS_switchBranchesForGeneration inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMSwitchConstantListAtIndex (GALGAS_lstringlist inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSwitchConstantList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_switchBranchesForGeneration::getter_mSwitchConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mSwitchConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMExtractedAssociatedValuesForGenerationAtIndex (GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                                                                   GALGAS_uint inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedAssociatedValuesForGeneration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_switchBranchesForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMEndOfBranchLocationIndexAtIndex (GALGAS_uint inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranchLocationIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_switchBranchesForGeneration::getter_mEndOfBranchLocationIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mEndOfBranchLocationIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMInstructionsAtIndex (GALGAS_semanticInstructionListForGeneration inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructions = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_switchBranchesForGeneration::getter_mInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mInstructions ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_switchBranchesForGeneration::cEnumerator_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element cEnumerator_switchBranchesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_switchBranchesForGeneration::current_mSwitchConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mSwitchConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration cEnumerator_switchBranchesForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_switchBranchesForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mEndOfBranchLocationIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cEnumerator_switchBranchesForGeneration::current_mInstructions (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mInstructions ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@switchBranchesForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchBranchesForGeneration ("switchBranchesForGeneration",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchBranchesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchBranchesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_warningInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_warningInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocationExpression.objectCompare (p->mProperty_mLocationExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMessageExpression.objectCompare (p->mProperty_mMessageExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListAST.objectCompare (p->mProperty_mFixitListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_warningInstructionAST::objectCompare (const GALGAS_warningInstructionAST & inOperand) const {
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

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLocationExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mMessageExpression,
                                                                            const GALGAS_fixitListAST & inAttribute_mFixitListAST
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLocationExpression.isValid () && inAttribute_mMessageExpression.isValid () && inAttribute_mFixitListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_warningInstructionAST (inAttribute_mInstructionLocation, inAttribute_mLocationExpression, inAttribute_mMessageExpression, inAttribute_mFixitListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_warningInstructionAST::getter_mLocationExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    result = p->mProperty_mLocationExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_warningInstructionAST::getter_mLocationExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocationExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_warningInstructionAST::getter_mMessageExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    result = p->mProperty_mMessageExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_warningInstructionAST::getter_mMessageExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMessageExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_warningInstructionAST::getter_mFixitListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    result = p->mProperty_mFixitListAST ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST cPtr_warningInstructionAST::getter_mFixitListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFixitListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionAST::setter_setMLocationExpression (GALGAS_semanticExpressionAST inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    p->mProperty_mLocationExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::setter_setMLocationExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocationExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionAST::setter_setMMessageExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    p->mProperty_mMessageExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::setter_setMMessageExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMessageExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_warningInstructionAST::setter_setMFixitListAST (GALGAS_fixitListAST inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    p->mProperty_mFixitListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::setter_setMFixitListAST (GALGAS_fixitListAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mFixitListAST = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                                        const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                                        const GALGAS_fixitListAST & in_mFixitListAST
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLocationExpression (in_mLocationExpression),
mProperty_mMessageExpression (in_mMessageExpression),
mProperty_mFixitListAST (in_mFixitListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_warningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

void cPtr_warningInstructionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@warningInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_warningInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_warningInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mFixitListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@warningInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_warningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_warningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST result ;
  const GALGAS_warningInstructionAST * p = (const GALGAS_warningInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_warningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_nonterminalInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonterminalName.objectCompare (p->mProperty_mNonterminalName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_nonterminalInstructionForGeneration::objectCompare (const GALGAS_nonterminalInstructionForGeneration & inOperand) const {
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

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (const cPtr_nonterminalInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_string & inAttribute_mNonterminalName,
                                                                                                        const GALGAS_string & inAttribute_mLabelName,
                                                                                                        const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mNonterminalName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_nonterminalInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mNonterminalName, inAttribute_mLabelName, inAttribute_mActualParameterList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_nonterminalInstructionForGeneration::getter_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mProperty_mNonterminalName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_nonterminalInstructionForGeneration::getter_mNonterminalName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNonterminalName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_nonterminalInstructionForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mProperty_mLabelName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_nonterminalInstructionForGeneration::getter_mLabelName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLabelName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_nonterminalInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mProperty_mActualParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration cPtr_nonterminalInstructionForGeneration::getter_mActualParameterList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_nonterminalInstructionForGeneration::getter_mGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (NULL != mObjectPtr) {
    const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    result = p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult cPtr_nonterminalInstructionForGeneration::getter_mGrammarInstructionSyntaxDirectedTranslationResult (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalInstructionForGeneration::setter_setMNonterminalName (GALGAS_string inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    p->mProperty_mNonterminalName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::setter_setMNonterminalName (GALGAS_string inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mNonterminalName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalInstructionForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    p->mProperty_mLabelName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::setter_setMLabelName (GALGAS_string inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLabelName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    p->mProperty_mActualParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::setter_setMActualParameterList (GALGAS_actualParameterListForGeneration inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualParameterList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonterminalInstructionForGeneration::setter_setMGrammarInstructionSyntaxDirectedTranslationResult (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue
                                                                                                               COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::setter_setMGrammarInstructionSyntaxDirectedTranslationResult (GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult inValue
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mNonterminalName,
                                                                                    const GALGAS_string & in_mLabelName,
                                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mNonterminalName (in_mNonterminalName),
mProperty_mLabelName (in_mLabelName),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult (in_mGrammarInstructionSyntaxDirectedTranslationResult) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nonterminalInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

void cPtr_nonterminalInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@nonterminalInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nonterminalInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_nonterminalInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mLabelName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@nonterminalInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration result ;
  const GALGAS_nonterminalInstructionForGeneration * p = (const GALGAS_nonterminalInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_nonterminalInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_repeatInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepeatedInstructionList.objectCompare (p->mProperty_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.objectCompare (p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepeatBranchList.objectCompare (p->mProperty_mRepeatBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_repeat_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_repeat_5F_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_repeatInstruction::objectCompare (const GALGAS_repeatInstruction & inOperand) const {
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

GALGAS_repeatInstruction::GALGAS_repeatInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_repeatInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_syntaxInstructionList::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_listOfSyntaxInstructionList::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction::GALGAS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_syntaxInstructionList & inAttribute_mRepeatedInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                                    const GALGAS_listOfSyntaxInstructionList & inAttribute_mRepeatBranchList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_repeat_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch.isValid () && inAttribute_mRepeatBranchList.isValid () && inAttribute_mEndOf_5F_repeat_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstruction (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, inAttribute_mRepeatBranchList, inAttribute_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_repeatInstruction::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mProperty_mRepeatedInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList cPtr_repeatInstruction::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRepeatedInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_repeatInstruction::getter_mEndOf_5F_repeated_5F_instructions_5F_branch (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_repeatInstruction::getter_mEndOf_5F_repeated_5F_instructions_5F_branch (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_repeatInstruction::getter_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mProperty_mRepeatBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList cPtr_repeatInstruction::getter_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRepeatBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_repeatInstruction::getter_mEndOf_5F_repeat_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    result = p->mProperty_mEndOf_5F_repeat_5F_instruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_repeatInstruction::getter_mEndOf_5F_repeat_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_repeat_5F_instruction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstruction::setter_setMRepeatedInstructionList (GALGAS_syntaxInstructionList inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::setter_setMRepeatedInstructionList (GALGAS_syntaxInstructionList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRepeatedInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstruction::setter_setMEndOf_5F_repeated_5F_instructions_5F_branch (GALGAS_location inValue
                                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::setter_setMEndOf_5F_repeated_5F_instructions_5F_branch (GALGAS_location inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstruction::setter_setMRepeatBranchList (GALGAS_listOfSyntaxInstructionList inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    p->mProperty_mRepeatBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::setter_setMRepeatBranchList (GALGAS_listOfSyntaxInstructionList inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRepeatBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstruction::setter_setMEndOf_5F_repeat_5F_instruction (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    p->mProperty_mEndOf_5F_repeat_5F_instruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::setter_setMEndOf_5F_repeat_5F_instruction (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_repeat_5F_instruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (in_mRepeatedInstructionList),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (in_mEndOf_5F_repeated_5F_instructions_5F_branch),
mProperty_mRepeatBranchList (in_mRepeatBranchList),
mProperty_mEndOf_5F_repeat_5F_instruction (in_mEndOf_5F_repeat_5F_instruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

void cPtr_repeatInstruction::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@repeatInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_repeat_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_repeatInstruction (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch, mProperty_mRepeatBranchList, mProperty_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@repeatInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
                                          & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction result ;
  const GALGAS_repeatInstruction * p = (const GALGAS_repeatInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_repeatInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_repeatInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mChoiceIndex.objectCompare (p->mProperty_mChoiceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_repeated_5F_instructionList.objectCompare (p->mProperty_m_5F_repeated_5F_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfRepeatedInstructions.objectCompare (p->mProperty_mEndOfRepeatedInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListOfSemanticInstructionListForGeneration.objectCompare (p->mProperty_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_repeatInstructionForGeneration::objectCompare (const GALGAS_repeatInstructionForGeneration & inOperand) const {
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

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_repeatInstructionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE),
                                                                 GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE),
                                                                 GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (const cPtr_repeatInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                              const GALGAS_uint & inAttribute_mChoiceIndex,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_m_5F_repeated_5F_instructionList,
                                                                                              const GALGAS_location & inAttribute_mEndOfRepeatedInstructions,
                                                                                              const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mChoiceIndex.isValid () && inAttribute_m_5F_repeated_5F_instructionList.isValid () && inAttribute_mEndOfRepeatedInstructions.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mSyntaxComponentName, inAttribute_mChoiceIndex, inAttribute_m_5F_repeated_5F_instructionList, inAttribute_mEndOfRepeatedInstructions, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_repeatInstructionForGeneration::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_repeatInstructionForGeneration::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_repeatInstructionForGeneration::getter_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mProperty_mChoiceIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_repeatInstructionForGeneration::getter_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mChoiceIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_repeatInstructionForGeneration::getter_m_5F_repeated_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mProperty_m_5F_repeated_5F_instructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cPtr_repeatInstructionForGeneration::getter_m_5F_repeated_5F_instructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_m_5F_repeated_5F_instructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_repeatInstructionForGeneration::getter_mEndOfRepeatedInstructions (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mProperty_mEndOfRepeatedInstructions ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_repeatInstructionForGeneration::getter_mEndOfRepeatedInstructions (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfRepeatedInstructions ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_repeatInstructionForGeneration::getter_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    result = p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration cPtr_repeatInstructionForGeneration::getter_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mListOfSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstructionForGeneration::setter_setMSyntaxComponentName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    p->mProperty_mSyntaxComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::setter_setMSyntaxComponentName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstructionForGeneration::setter_setMChoiceIndex (GALGAS_uint inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    p->mProperty_mChoiceIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::setter_setMChoiceIndex (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mChoiceIndex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstructionForGeneration::setter_setM_5F_repeated_5F_instructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    p->mProperty_m_5F_repeated_5F_instructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::setter_setM_5F_repeated_5F_instructionList (GALGAS_semanticInstructionListForGeneration inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_m_5F_repeated_5F_instructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstructionForGeneration::setter_setMEndOfRepeatedInstructions (GALGAS_location inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    p->mProperty_mEndOfRepeatedInstructions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::setter_setMEndOfRepeatedInstructions (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfRepeatedInstructions = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstructionForGeneration::setter_setMListOfSemanticInstructionListForGeneration (GALGAS_listOfSemanticInstructionListForGeneration inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    p->mProperty_mListOfSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::setter_setMListOfSemanticInstructionListForGeneration (GALGAS_listOfSemanticInstructionListForGeneration inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mListOfSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_uint & in_mChoiceIndex,
                                                                          const GALGAS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                          const GALGAS_location & in_mEndOfRepeatedInstructions,
                                                                          const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mChoiceIndex (in_mChoiceIndex),
mProperty_m_5F_repeated_5F_instructionList (in_m_5F_repeated_5F_instructionList),
mProperty_mEndOfRepeatedInstructions (in_mEndOfRepeatedInstructions),
mProperty_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

void cPtr_repeatInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@repeatInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_m_5F_repeated_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfRepeatedInstructions.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_repeatInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_m_5F_repeated_5F_instructionList, mProperty_mEndOfRepeatedInstructions, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@repeatInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration result ;
  const GALGAS_repeatInstructionForGeneration * p = (const GALGAS_repeatInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_repeatInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstruction * p = (const cPtr_selectInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectBranchList.objectCompare (p->mProperty_mSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_select_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_select_5F_instruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectInstruction::objectCompare (const GALGAS_selectInstruction & inOperand) const {
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

GALGAS_selectInstruction::GALGAS_selectInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                    GALGAS_listOfSyntaxInstructionList::constructor_emptyList (HERE),
                                                    GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstruction::GALGAS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_listOfSyntaxInstructionList & inAttribute_mSelectBranchList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_select_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSelectBranchList.isValid () && inAttribute_mEndOf_5F_select_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstruction (inAttribute_mInstructionLocation, inAttribute_mSelectBranchList, inAttribute_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_selectInstruction::getter_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstruction * p = (const cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    result = p->mProperty_mSelectBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList cPtr_selectInstruction::getter_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_selectInstruction::getter_mEndOf_5F_select_5F_instruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstruction * p = (const cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    result = p->mProperty_mEndOf_5F_select_5F_instruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_selectInstruction::getter_mEndOf_5F_select_5F_instruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOf_5F_select_5F_instruction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstruction::setter_setMSelectBranchList (GALGAS_listOfSyntaxInstructionList inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    p->mProperty_mSelectBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::setter_setMSelectBranchList (GALGAS_listOfSyntaxInstructionList inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelectBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstruction::setter_setMEndOf_5F_select_5F_instruction (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    p->mProperty_mEndOf_5F_select_5F_instruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::setter_setMEndOf_5F_select_5F_instruction (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOf_5F_select_5F_instruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selectInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                const GALGAS_location & in_mEndOf_5F_select_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSelectBranchList (in_mSelectBranchList),
mProperty_mEndOf_5F_select_5F_instruction (in_mEndOf_5F_select_5F_instruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

void cPtr_selectInstruction::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@selectInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOf_5F_select_5F_instruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstruction (mProperty_mInstructionLocation, mProperty_mSelectBranchList, mProperty_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selectInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
                                          & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction result ;
  const GALGAS_selectInstruction * p = (const GALGAS_selectInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mChoiceIndex.objectCompare (p->mProperty_mChoiceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListOfSemanticInstructionListForGeneration.objectCompare (p->mProperty_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectInstructionForGeneration::objectCompare (const GALGAS_selectInstructionForGeneration & inOperand) const {
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

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectInstructionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                 GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_uint::constructor_default (HERE),
                                                                 GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                              const GALGAS_uint & inAttribute_mChoiceIndex,
                                                                                              const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mChoiceIndex.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mSyntaxComponentName, inAttribute_mChoiceIndex, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectInstructionForGeneration::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    result = p->mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_selectInstructionForGeneration::getter_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSyntaxComponentName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_selectInstructionForGeneration::getter_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    result = p->mProperty_mChoiceIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_selectInstructionForGeneration::getter_mChoiceIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mChoiceIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_selectInstructionForGeneration::getter_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    result = p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration cPtr_selectInstructionForGeneration::getter_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mListOfSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionForGeneration::setter_setMSyntaxComponentName (GALGAS_string inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    p->mProperty_mSyntaxComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::setter_setMSyntaxComponentName (GALGAS_string inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSyntaxComponentName = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionForGeneration::setter_setMChoiceIndex (GALGAS_uint inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    p->mProperty_mChoiceIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::setter_setMChoiceIndex (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mChoiceIndex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionForGeneration::setter_setMListOfSemanticInstructionListForGeneration (GALGAS_listOfSemanticInstructionListForGeneration inValue
                                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    p->mProperty_mListOfSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::setter_setMListOfSemanticInstructionListForGeneration (GALGAS_listOfSemanticInstructionListForGeneration inValue
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mListOfSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_uint & in_mChoiceIndex,
                                                                          const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mChoiceIndex (in_mChoiceIndex),
mProperty_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

void cPtr_selectInstructionForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@selectInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selectInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
                                                       & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration result ;
  const GALGAS_selectInstructionForGeneration * p = (const GALGAS_selectInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseLoopInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariantExpression.objectCompare (p->mProperty_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfVariantExpression.objectCompare (p->mProperty_mEndOfVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfWhileExpression.objectCompare (p->mProperty_mEndOfWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstructionList.objectCompare (p->mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseLoopInstruction::objectCompare (const GALGAS_parseLoopInstruction & inOperand) const {
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

GALGAS_parseLoopInstruction::GALGAS_parseLoopInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction::GALGAS_parseLoopInstruction (const cPtr_parseLoopInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction GALGAS_parseLoopInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mVariantExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfVariantExpression,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mWhileExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfWhileExpression,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mDoInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mEndOfVariantExpression.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOfWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOfInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseLoopInstruction (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mEndOfVariantExpression, inAttribute_mWhileExpression, inAttribute_mEndOfWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOfInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_parseLoopInstruction::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mProperty_mVariantExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_parseLoopInstruction::getter_mVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mVariantExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseLoopInstruction::getter_mEndOfVariantExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mProperty_mEndOfVariantExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_parseLoopInstruction::getter_mEndOfVariantExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfVariantExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_parseLoopInstruction::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mProperty_mWhileExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_parseLoopInstruction::getter_mWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhileExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseLoopInstruction::getter_mEndOfWhileExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mProperty_mEndOfWhileExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_parseLoopInstruction::getter_mEndOfWhileExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfWhileExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_parseLoopInstruction::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mProperty_mDoInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList cPtr_parseLoopInstruction::getter_mDoInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDoInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseLoopInstruction::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    result = p->mProperty_mEndOfInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_parseLoopInstruction::getter_mEndOfInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstruction::setter_setMVariantExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    p->mProperty_mVariantExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::setter_setMVariantExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mVariantExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstruction::setter_setMEndOfVariantExpression (GALGAS_location inValue
                                                                     COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    p->mProperty_mEndOfVariantExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::setter_setMEndOfVariantExpression (GALGAS_location inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfVariantExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstruction::setter_setMWhileExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    p->mProperty_mWhileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::setter_setMWhileExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhileExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstruction::setter_setMEndOfWhileExpression (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    p->mProperty_mEndOfWhileExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::setter_setMEndOfWhileExpression (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfWhileExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstruction::setter_setMDoInstructionList (GALGAS_syntaxInstructionList inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    p->mProperty_mDoInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::setter_setMDoInstructionList (GALGAS_syntaxInstructionList inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDoInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseLoopInstruction::setter_setMEndOfInstructionList (GALGAS_location inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    p->mProperty_mEndOfInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::setter_setMEndOfInstructionList (GALGAS_location inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @parseLoopInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_parseLoopInstruction::cPtr_parseLoopInstruction (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                                      const GALGAS_location & in_mEndOfVariantExpression,
                                                      const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                                      const GALGAS_location & in_mEndOfWhileExpression,
                                                      const GALGAS_syntaxInstructionList & in_mDoInstructionList,
                                                      const GALGAS_location & in_mEndOfInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (in_mVariantExpression),
mProperty_mEndOfVariantExpression (in_mEndOfVariantExpression),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOfWhileExpression (in_mEndOfWhileExpression),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOfInstructionList (in_mEndOfInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseLoopInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

void cPtr_parseLoopInstruction::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@parseLoopInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfWhileExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseLoopInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseLoopInstruction (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mWhileExpression, mProperty_mEndOfWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@parseLoopInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstruction ("parseLoopInstruction",
                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseLoopInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseLoopInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction GALGAS_parseLoopInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstruction result ;
  const GALGAS_parseLoopInstruction * p = (const GALGAS_parseLoopInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseLoopInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseRewindInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseRewindInstruction * p = (const cPtr_parseRewindInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParseRewindBranchList.objectCompare (p->mProperty_mParseRewindBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfParseDoInstruction.objectCompare (p->mProperty_mEndOfParseDoInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseRewindInstruction::objectCompare (const GALGAS_parseRewindInstruction & inOperand) const {
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

GALGAS_parseRewindInstruction::GALGAS_parseRewindInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_parseRewindInstruction::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_listOfSyntaxInstructionList::constructor_emptyList (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction::GALGAS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                              const GALGAS_listOfSyntaxInstructionList & inAttribute_mParseRewindBranchList,
                                                                              const GALGAS_location & inAttribute_mEndOfParseDoInstruction
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mParseRewindBranchList.isValid () && inAttribute_mEndOfParseDoInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseRewindInstruction (inAttribute_mInstructionLocation, inAttribute_mParseRewindBranchList, inAttribute_mEndOfParseDoInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_parseRewindInstruction::getter_mParseRewindBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseRewindInstruction * p = (const cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    result = p->mProperty_mParseRewindBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList cPtr_parseRewindInstruction::getter_mParseRewindBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mParseRewindBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseRewindInstruction::getter_mEndOfParseDoInstruction (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseRewindInstruction * p = (const cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    result = p->mProperty_mEndOfParseDoInstruction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_parseRewindInstruction::getter_mEndOfParseDoInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfParseDoInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseRewindInstruction::setter_setMParseRewindBranchList (GALGAS_listOfSyntaxInstructionList inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    p->mProperty_mParseRewindBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::setter_setMParseRewindBranchList (GALGAS_listOfSyntaxInstructionList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mParseRewindBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseRewindInstruction::setter_setMEndOfParseDoInstruction (GALGAS_location inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    p->mProperty_mEndOfParseDoInstruction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::setter_setMEndOfParseDoInstruction (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfParseDoInstruction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                          const GALGAS_location & in_mEndOfParseDoInstruction
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mParseRewindBranchList (in_mParseRewindBranchList),
mProperty_mEndOfParseDoInstruction (in_mEndOfParseDoInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

void cPtr_parseRewindInstruction::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@parseRewindInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mParseRewindBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfParseDoInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseRewindInstruction (mProperty_mInstructionLocation, mProperty_mParseRewindBranchList, mProperty_mEndOfParseDoInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@parseRewindInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstruction ("parseRewindInstruction",
                                               & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseRewindInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseRewindInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstruction result ;
  const GALGAS_parseRewindInstruction * p = (const GALGAS_parseRewindInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseRewindInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseRewindInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseRewindInstructionForGeneration * p = (const cPtr_parseRewindInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListOfSemanticInstructionListForGeneration.objectCompare (p->mProperty_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseRewindInstructionForGeneration::objectCompare (const GALGAS_parseRewindInstructionForGeneration & inOperand) const {
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

GALGAS_parseRewindInstructionForGeneration::GALGAS_parseRewindInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_parseRewindInstructionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration::GALGAS_parseRewindInstructionForGeneration (const cPtr_parseRewindInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstructionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseRewindInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_parseRewindInstructionForGeneration::getter_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseRewindInstructionForGeneration * p = (const cPtr_parseRewindInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
    result = p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration cPtr_parseRewindInstructionForGeneration::getter_mListOfSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mListOfSemanticInstructionListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseRewindInstructionForGeneration::setter_setMListOfSemanticInstructionListForGeneration (GALGAS_listOfSemanticInstructionListForGeneration inValue
                                                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseRewindInstructionForGeneration * p = (cPtr_parseRewindInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
    p->mProperty_mListOfSemanticInstructionListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::setter_setMListOfSemanticInstructionListForGeneration (GALGAS_listOfSemanticInstructionListForGeneration inValue
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mListOfSemanticInstructionListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstructionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_parseRewindInstructionForGeneration::cPtr_parseRewindInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

void cPtr_parseRewindInstructionForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@parseRewindInstructionForGeneration:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseRewindInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@parseRewindInstructionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ("parseRewindInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseRewindInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseRewindInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstructionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration result ;
  const GALGAS_parseRewindInstructionForGeneration * p = (const GALGAS_parseRewindInstructionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseRewindInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseWhenInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhenExpression.objectCompare (p->mProperty_mWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfWhenExpression.objectCompare (p->mProperty_mEndOfWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhenInstructionList.objectCompare (p->mProperty_mWhenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfWhenInstructionList.objectCompare (p->mProperty_mEndOfWhenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfElseInstructionList.objectCompare (p->mProperty_mEndOfElseInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseWhenInstruction::objectCompare (const GALGAS_parseWhenInstruction & inOperand) const {
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

GALGAS_parseWhenInstruction::GALGAS_parseWhenInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction::GALGAS_parseWhenInstruction (const cPtr_parseWhenInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction GALGAS_parseWhenInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mWhenExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfWhenExpression,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mWhenInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfWhenInstructionList,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mElseInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfElseInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mWhenExpression.isValid () && inAttribute_mEndOfWhenExpression.isValid () && inAttribute_mWhenInstructionList.isValid () && inAttribute_mEndOfWhenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseWhenInstruction (inAttribute_mInstructionLocation, inAttribute_mWhenExpression, inAttribute_mEndOfWhenExpression, inAttribute_mWhenInstructionList, inAttribute_mEndOfWhenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_parseWhenInstruction::getter_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mProperty_mWhenExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_parseWhenInstruction::getter_mWhenExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhenExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseWhenInstruction::getter_mEndOfWhenExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mProperty_mEndOfWhenExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_parseWhenInstruction::getter_mEndOfWhenExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfWhenExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_parseWhenInstruction::getter_mWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mProperty_mWhenInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList cPtr_parseWhenInstruction::getter_mWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mWhenInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseWhenInstruction::getter_mEndOfWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mProperty_mEndOfWhenInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_parseWhenInstruction::getter_mEndOfWhenInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfWhenInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_parseWhenInstruction::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mProperty_mElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList cPtr_parseWhenInstruction::getter_mElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseWhenInstruction::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    result = p->mProperty_mEndOfElseInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_parseWhenInstruction::getter_mEndOfElseInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEndOfElseInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstruction::setter_setMWhenExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    p->mProperty_mWhenExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::setter_setMWhenExpression (GALGAS_semanticExpressionAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhenExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstruction::setter_setMEndOfWhenExpression (GALGAS_location inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    p->mProperty_mEndOfWhenExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::setter_setMEndOfWhenExpression (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfWhenExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstruction::setter_setMWhenInstructionList (GALGAS_syntaxInstructionList inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    p->mProperty_mWhenInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::setter_setMWhenInstructionList (GALGAS_syntaxInstructionList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mWhenInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstruction::setter_setMEndOfWhenInstructionList (GALGAS_location inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    p->mProperty_mEndOfWhenInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::setter_setMEndOfWhenInstructionList (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfWhenInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstruction::setter_setMElseInstructionList (GALGAS_syntaxInstructionList inValue
                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    p->mProperty_mElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::setter_setMElseInstructionList (GALGAS_syntaxInstructionList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_parseWhenInstruction::setter_setMEndOfElseInstructionList (GALGAS_location inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    p->mProperty_mEndOfElseInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::setter_setMEndOfElseInstructionList (GALGAS_location inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEndOfElseInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @parseWhenInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mWhenExpression,
                                                      const GALGAS_location & in_mEndOfWhenExpression,
                                                      const GALGAS_syntaxInstructionList & in_mWhenInstructionList,
                                                      const GALGAS_location & in_mEndOfWhenInstructionList,
                                                      const GALGAS_syntaxInstructionList & in_mElseInstructionList,
                                                      const GALGAS_location & in_mEndOfElseInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mWhenExpression (in_mWhenExpression),
mProperty_mEndOfWhenExpression (in_mEndOfWhenExpression),
mProperty_mWhenInstructionList (in_mWhenInstructionList),
mProperty_mEndOfWhenInstructionList (in_mEndOfWhenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElseInstructionList (in_mEndOfElseInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseWhenInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

void cPtr_parseWhenInstruction::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@parseWhenInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfWhenExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseWhenInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_parseWhenInstruction (mProperty_mInstructionLocation, mProperty_mWhenExpression, mProperty_mEndOfWhenExpression, mProperty_mWhenInstructionList, mProperty_mEndOfWhenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@parseWhenInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstruction ("parseWhenInstruction",
                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseWhenInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseWhenInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction GALGAS_parseWhenInstruction::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstruction result ;
  const GALGAS_parseWhenInstruction * p = (const GALGAS_parseWhenInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_parseWhenInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_syntaxSendInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syntaxSendInstruction * p = (const cPtr_syntaxSendInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxSendInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_syntaxSendInstruction::objectCompare (const GALGAS_syntaxSendInstruction & inOperand) const {
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

GALGAS_syntaxSendInstruction::GALGAS_syntaxSendInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction::GALGAS_syntaxSendInstruction (const cPtr_syntaxSendInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstruction) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction GALGAS_syntaxSendInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstruction (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_syntaxSendInstruction::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_syntaxSendInstruction * p = (const cPtr_syntaxSendInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstruction) ;
    result = p->mProperty_mExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cPtr_syntaxSendInstruction::getter_mExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxSendInstruction::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_syntaxSendInstruction * p = (cPtr_syntaxSendInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstruction) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstruction::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstruction::cPtr_syntaxSendInstruction (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxSendInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstruction ;
}

void cPtr_syntaxSendInstruction::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@syntaxSendInstruction:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_syntaxSendInstruction (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxSendInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstruction ("syntaxSendInstruction",
                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxSendInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxSendInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction GALGAS_syntaxSendInstruction::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction result ;
  const GALGAS_syntaxSendInstruction * p = (const GALGAS_syntaxSendInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_syntaxSendInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionForGeneration appendSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature> gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_appendSyntaxSignature (const int32_t inClassIndex,
                                                 extensionMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature inMethod) {
  gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                const GALGAS_string constin_inPosfix,
                                                GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticInstructionForGeneration_appendSyntaxSignature f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.count ()) {
      f = gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.count ()) {
           f = gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inPosfix, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_semanticInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * /* inObject */,
                                                                                    const GALGAS_string /* constinArgument_inPosfix */,
                                                                                    GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_semanticInstructionForGeneration_appendSyntaxSignature (void) {
  enterExtensionMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_semanticInstructionForGeneration.mSlotID,
                                              extensionMethod_semanticInstructionForGeneration_appendSyntaxSignature) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticInstructionForGeneration_appendSyntaxSignature (void) {
  gExtensionMethodTable_semanticInstructionForGeneration_appendSyntaxSignature.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticInstructionForGeneration_appendSyntaxSignature (defineExtensionMethod_semanticInstructionForGeneration_appendSyntaxSignature,
                                                                                   freeExtensionMethod_semanticInstructionForGeneration_appendSyntaxSignature) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticInstructionForGeneration compareInstructionSyntaxSignature'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature> gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_compareInstructionSyntaxSignature (const int32_t inClassIndex,
                                                             enterExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature inGetter) {
  gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                   const GALGAS_semanticInstructionForGeneration in_inTestedInstruction,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature f = NULL ;
    if (classIndex < gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature.count ()) {
      f = gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature.count ()) {
           f = gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY READER CALL ERROR", __FILE__, __LINE__) ;
    }else{
      result = f (inObject, in_inTestedInstruction, inCompiler COMMA_THERE) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * /* inObject */,
                                                                                                       const GALGAS_semanticInstructionForGeneration /* constinArgument_inTestedInstruction */,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  result_outOk = GALGAS_bool (true) ;
//---
  return result_outOk ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  enterExtensionGetter_compareInstructionSyntaxSignature (kTypeDescriptor_GALGAS_semanticInstructionForGeneration.mSlotID,
                                                          extensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature (void) {
  gExtensionGetterTable_semanticInstructionForGeneration_compareInstructionSyntaxSignature.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature (defineExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature,
                                                                                               freeExtensionGetter_semanticInstructionForGeneration_compareInstructionSyntaxSignature) ;

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractSyntaxInstructionForGrammarAnalysis::objectCompare (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const {
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

GALGAS_abstractSyntaxInstructionForGrammarAnalysis::GALGAS_abstractSyntaxInstructionForGrammarAnalysis (void) :
AC_GALGAS_value_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis::GALGAS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) :
AC_GALGAS_value_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_abstractSyntaxInstructionForGrammarAnalysis::getter_mStartLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    result = p->mProperty_mStartLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_abstractSyntaxInstructionForGrammarAnalysis::getter_mStartLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStartLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractSyntaxInstructionForGrammarAnalysis::setter_setMStartLocation (GALGAS_location inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    p->mProperty_mStartLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractSyntaxInstructionForGrammarAnalysis::setter_setMStartLocation (GALGAS_location inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mStartLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mStartLocation (in_mStartLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractSyntaxInstructionForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ("abstractSyntaxInstructionForGrammarAnalysis",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractSyntaxInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractSyntaxInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractSyntaxInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_abstractSyntaxInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis result ;
  const GALGAS_abstractSyntaxInstructionForGrammarAnalysis * p = (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractSyntaxInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxInstructionListForGrammarAnalysis' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxInstructionListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxInstructionListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxInstructionListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxInstructionListForGrammarAnalysis (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxInstructionListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_syntaxInstructionListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * operand = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis::GALGAS_syntaxInstructionListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis::GALGAS_syntaxInstructionListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxInstructionListForGrammarAnalysis  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_listWithValue (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::addAssign_operation (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
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

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_append (GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inElement COMMA_THERE)) ;
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

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
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

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_removeAtIndex (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::plusAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_setMInstructionAtIndex (GALGAS_abstractSyntaxInstructionForGrammarAnalysis inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_syntaxInstructionListForGrammarAnalysis::cEnumerator_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element cEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis cEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxInstructionListForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ("syntaxInstructionListForGrammarAnalysis",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@productionRuleListForGrammarAnalysis' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_productionRuleListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_productionRuleListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                   const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                   const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                   const GALGAS_uint & in_mProductionIndex
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                  const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                  const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                  const GALGAS_uint & in_mProductionIndex
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeftNonterminalSymbol, in_mLeftNonterminalSymbolIndex, in_mInstructionList, in_mProductionIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLeftNonterminalSymbol, inElement.mProperty_mLeftNonterminalSymbolIndex, inElement.mProperty_mInstructionList, inElement.mProperty_mProductionIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_productionRuleListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_productionRuleListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_productionRuleListForGrammarAnalysis (mObject.mProperty_mLeftNonterminalSymbol, mObject.mProperty_mLeftNonterminalSymbolIndex, mObject.mProperty_mInstructionList, mObject.mProperty_mProductionIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_productionRuleListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeftNonterminalSymbol" ":" ;
  mObject.mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLeftNonterminalSymbolIndex" ":" ;
  mObject.mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductionIndex" ":" ;
  mObject.mProperty_mProductionIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_productionRuleListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_productionRuleListForGrammarAnalysis * operand = (cCollectionElement_productionRuleListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis::GALGAS_productionRuleListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis::GALGAS_productionRuleListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_productionRuleListForGrammarAnalysis  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                                    const GALGAS_uint & inOperand3
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                       const GALGAS_uint & inOperand1,
                                                                       const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                       const GALGAS_uint & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_productionRuleListForGrammarAnalysis::setter_append (GALGAS_productionRuleListForGrammarAnalysis_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inElement COMMA_THERE)) ;
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

void GALGAS_productionRuleListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                        const GALGAS_uint inOperand1,
                                                                        const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                                        const GALGAS_uint inOperand3,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_productionRuleListForGrammarAnalysis::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                        GALGAS_uint & outOperand1,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                        GALGAS_uint & outOperand3,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
        outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
        outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
        outOperand3 = p->mObject.mProperty_mProductionIndex ;
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
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::plusAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeftNonterminalSymbol = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbol ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolIndexAtIndex (GALGAS_uint inOperand,
                                                                                                GALGAS_uint inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeftNonterminalSymbolIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMInstructionListAtIndex (GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMProductionIndexAtIndex (GALGAS_uint inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductionIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis::getter_mProductionIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mProductionIndex ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_productionRuleListForGrammarAnalysis::cEnumerator_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis_2D_element cEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbol ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis cEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionIndex ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@productionRuleListForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ("productionRuleListForGrammarAnalysis",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_productionRuleListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_productionRuleListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_productionRuleListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                                    const GALGAS_uint & in_mNonTerminalIndex
                                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mNonTerminalIndex (in_mNonTerminalIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (mProperty_lkey, mProperty_mNonTerminalIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalIndex" ":" ;
  mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * operand = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mNonTerminalIndex.objectCompare (operand->mProperty_mNonTerminalIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::operator = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonTerminalIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                             GALGAS_string inKey,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonTerminalIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                              GALGAS_uint & outArgument0) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mNonTerminalIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unusedNonTerminalSymbolMapForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ("unusedNonTerminalSymbolMapForGrammarAnalysis",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@nonTerminalSymbolSortedListForGrammarAnalysis' sorted list
//
//----------------------------------------------------------------------------------------------------------------------

class cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis : public cSortedListElement {
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                            const GALGAS_uint & in_mNonTerminalIndex,
                                                                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
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

cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                                                                                    const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mNonTerminalSymbol, in_mNonTerminalIndex, in_mNonterminalSymbolParametersMap) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::copy (void) {
  cSortedListElement * result = NULL ;
  macroMyNew (result, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (mObject.mProperty_mNonTerminalSymbol, mObject.mProperty_mNonTerminalIndex, mObject.mProperty_mNonterminalSymbolParametersMap COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalSymbol" ":" ;
  mObject.mProperty_mNonTerminalSymbol.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonTerminalIndex" ":" ;
  mObject.mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mNonterminalSymbolParametersMap" ":" ;
  mObject.mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * operand = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (void) :
AC_GALGAS_sortedlist () {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * operand = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mNonTerminalIndex.objectCompare (operand->mObject.mProperty_mNonTerminalIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  result.appendObject (attributes) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::plusAssign_operation (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject,
                                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalSymbol ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonterminalSymbolParametersMap ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@nonTerminalSymbolSortedListForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ("nonTerminalSymbolSortedListForGrammarAnalysis",
                                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@branchListForGrammarAnalysis' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_branchListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_branchListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_branchListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_branchListForGrammarAnalysis::cCollectionElement_branchListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_branchListForGrammarAnalysis::cCollectionElement_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_branchListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_branchListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_branchListForGrammarAnalysis (mObject.mProperty_mSyntaxInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_branchListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxInstructionList" ":" ;
  mObject.mProperty_mSyntaxInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_branchListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_branchListForGrammarAnalysis * operand = (cCollectionElement_branchListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_branchListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis::GALGAS_branchListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis::GALGAS_branchListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_branchListForGrammarAnalysis  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_branchListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_branchListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_branchListForGrammarAnalysis * p = NULL ;
  macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (in_mSyntaxInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::addAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
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

void GALGAS_branchListForGrammarAnalysis::setter_append (GALGAS_branchListForGrammarAnalysis_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inElement COMMA_THERE)) ;
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

void GALGAS_branchListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
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

void GALGAS_branchListForGrammarAnalysis::setter_removeAtIndex (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
        outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::plusAssign_operation (const GALGAS_branchListForGrammarAnalysis inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::setter_setMSyntaxInstructionListAtIndex (GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_mSyntaxInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mSyntaxInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_branchListForGrammarAnalysis::cEnumerator_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element cEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis cEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@branchListForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ("branchListForGrammarAnalysis",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionForGrammarAnalysis * p = (const cPtr_selectInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mProperty_mStartLocation.objectCompare (p->mProperty_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectBranchList.objectCompare (p->mProperty_mSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddedNonTerminalSymbolIndex.objectCompare (p->mProperty_mAddedNonTerminalSymbolIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectInstructionForGrammarAnalysis::objectCompare (const GALGAS_selectInstructionForGrammarAnalysis & inOperand) const {
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

GALGAS_selectInstructionForGrammarAnalysis::GALGAS_selectInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectInstructionForGrammarAnalysis::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_branchListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                      GALGAS_uint::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis::GALGAS_selectInstructionForGrammarAnalysis (const cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGrammarAnalysis) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                        const GALGAS_branchListForGrammarAnalysis & inAttribute_mSelectBranchList,
                                                                                                        const GALGAS_uint & inAttribute_mAddedNonTerminalSymbolIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mSelectBranchList.isValid () && inAttribute_mAddedNonTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mSelectBranchList, inAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::getter_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGrammarAnalysis * p = (const cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    result = p->mProperty_mSelectBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis cPtr_selectInstructionForGrammarAnalysis::getter_mSelectBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_selectInstructionForGrammarAnalysis::getter_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectInstructionForGrammarAnalysis * p = (const cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    result = p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_selectInstructionForGrammarAnalysis::getter_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddedNonTerminalSymbolIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionForGrammarAnalysis::setter_setMSelectBranchList (GALGAS_branchListForGrammarAnalysis inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    p->mProperty_mSelectBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::setter_setMSelectBranchList (GALGAS_branchListForGrammarAnalysis inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSelectBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selectInstructionForGrammarAnalysis::setter_setMAddedNonTerminalSymbolIndex (GALGAS_uint inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    p->mProperty_mAddedNonTerminalSymbolIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::setter_setMAddedNonTerminalSymbolIndex (GALGAS_uint inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAddedNonTerminalSymbolIndex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGrammarAnalysis class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                    const GALGAS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                                                    const GALGAS_uint & in_mAddedNonTerminalSymbolIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mProperty_mSelectBranchList (in_mSelectBranchList),
mProperty_mAddedNonTerminalSymbolIndex (in_mAddedNonTerminalSymbolIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

void cPtr_selectInstructionForGrammarAnalysis::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@selectInstructionForGrammarAnalysis:" ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mSelectBranchList, mProperty_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selectInstructionForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ("selectInstructionForGrammarAnalysis",
                                                            & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  const GALGAS_selectInstructionForGrammarAnalysis * p = (const GALGAS_selectInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_repeatInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstructionForGrammarAnalysis * p = (const cPtr_repeatInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mProperty_mStartLocation.objectCompare (p->mProperty_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepeatBranchList.objectCompare (p->mProperty_mRepeatBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddedNonTerminalSymbolIndex.objectCompare (p->mProperty_mAddedNonTerminalSymbolIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_repeatInstructionForGrammarAnalysis::objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis & inOperand) const {
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

GALGAS_repeatInstructionForGrammarAnalysis::GALGAS_repeatInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::constructor_default (LOCATION_ARGS) {
  return GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                      GALGAS_branchListForGrammarAnalysis::constructor_emptyList (HERE),
                                                                      GALGAS_uint::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis::GALGAS_repeatInstructionForGrammarAnalysis (const cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGrammarAnalysis) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                        const GALGAS_branchListForGrammarAnalysis & inAttribute_mRepeatBranchList,
                                                                                                        const GALGAS_uint & inAttribute_mAddedNonTerminalSymbolIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mRepeatBranchList.isValid () && inAttribute_mAddedNonTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mRepeatBranchList, inAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::getter_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGrammarAnalysis * p = (const cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    result = p->mProperty_mRepeatBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis cPtr_repeatInstructionForGrammarAnalysis::getter_mRepeatBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRepeatBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_repeatInstructionForGrammarAnalysis::getter_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_repeatInstructionForGrammarAnalysis * p = (const cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    result = p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_repeatInstructionForGrammarAnalysis::getter_mAddedNonTerminalSymbolIndex (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAddedNonTerminalSymbolIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstructionForGrammarAnalysis::setter_setMRepeatBranchList (GALGAS_branchListForGrammarAnalysis inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    p->mProperty_mRepeatBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::setter_setMRepeatBranchList (GALGAS_branchListForGrammarAnalysis inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRepeatBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_repeatInstructionForGrammarAnalysis::setter_setMAddedNonTerminalSymbolIndex (GALGAS_uint inValue
                                                                                         COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    p->mProperty_mAddedNonTerminalSymbolIndex = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::setter_setMAddedNonTerminalSymbolIndex (GALGAS_uint inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mAddedNonTerminalSymbolIndex = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGrammarAnalysis class
//----------------------------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                    const GALGAS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                                                    const GALGAS_uint & in_mAddedNonTerminalSymbolIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mProperty_mRepeatBranchList (in_mRepeatBranchList),
mProperty_mAddedNonTerminalSymbolIndex (in_mAddedNonTerminalSymbolIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

void cPtr_repeatInstructionForGrammarAnalysis::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@repeatInstructionForGrammarAnalysis:" ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_repeatInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mRepeatBranchList, mProperty_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@repeatInstructionForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ("repeatInstructionForGrammarAnalysis",
                                                            & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  const GALGAS_repeatInstructionForGrammarAnalysis * p = (const GALGAS_repeatInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_repeatInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxComponentListForGrammarAnalysis' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxComponentListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_syntaxComponentListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                    const GALGAS_lstring & in_mSyntaxComponentName
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_syntaxComponentListForGrammarAnalysis::cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                    const GALGAS_lstring & in_mSyntaxComponentName
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProductionRulesList, in_mSyntaxComponentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_syntaxComponentListForGrammarAnalysis::cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProductionRulesList, inElement.mProperty_mSyntaxComponentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxComponentListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxComponentListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_syntaxComponentListForGrammarAnalysis (mObject.mProperty_mProductionRulesList, mObject.mProperty_mSyntaxComponentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxComponentListForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mProductionRulesList" ":" ;
  mObject.mProperty_mProductionRulesList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxComponentName" ":" ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_syntaxComponentListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * operand = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis::GALGAS_syntaxComponentListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis::GALGAS_syntaxComponentListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentListForGrammarAnalysis  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::constructor_listWithValue (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                      const GALGAS_lstring & inOperand1
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxComponentListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::addAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                        const GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_append (GALGAS_syntaxComponentListForGrammarAnalysis_2D_element inElement,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inElement COMMA_THERE)) ;
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

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_productionRuleListForGrammarAnalysis inOperand0,
                                                                         const GALGAS_lstring inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_removeAtIndex (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
        outOperand0 = p->mObject.mProperty_mProductionRulesList ;
        outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
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
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::plusAssign_operation (const GALGAS_syntaxComponentListForGrammarAnalysis inOperand,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_setMProductionRulesListAtIndex (GALGAS_productionRuleListForGrammarAnalysis inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductionRulesList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_mProductionRulesListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mProductionRulesList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_setMSyntaxComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxComponentListForGrammarAnalysis::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_syntaxComponentListForGrammarAnalysis::cEnumerator_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element cEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis cEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionRulesList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@syntaxComponentListForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ("syntaxComponentListForGrammarAnalysis",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_terminalSymbolsMapForGrammarAnalysis::cMapElement_terminalSymbolsMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_uint & in_mTerminalIndex
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTerminalIndex (in_mTerminalIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_terminalSymbolsMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminalIndex.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_terminalSymbolsMapForGrammarAnalysis::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_terminalSymbolsMapForGrammarAnalysis (mProperty_lkey, mProperty_mTerminalIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_terminalSymbolsMapForGrammarAnalysis::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalIndex" ":" ;
  mProperty_mTerminalIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_terminalSymbolsMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * operand = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTerminalIndex.objectCompare (operand->mProperty_mTerminalIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis::GALGAS_terminalSymbolsMapForGrammarAnalysis (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis::GALGAS_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis & GALGAS_terminalSymbolsMapForGrammarAnalysis::operator = (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey = "the terminal symbol '$%K$' is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

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
    outArgument0 = p->mProperty_mTerminalIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalSymbolsMapForGrammarAnalysis::getter_mTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    result = p->mProperty_mTerminalIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis::setter_setMTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    p->mProperty_mTerminalIndex = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_terminalSymbolsMapForGrammarAnalysis * GALGAS_terminalSymbolsMapForGrammarAnalysis::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * result = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_terminalSymbolsMapForGrammarAnalysis::cEnumerator_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element cEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mTerminalIndex) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return p->mProperty_mTerminalIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_terminalSymbolsMapForGrammarAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                      GALGAS_uint & outArgument0) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mTerminalIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@terminalSymbolsMapForGrammarAnalysis type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ("terminalSymbolsMapForGrammarAnalysis",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalSymbolsMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST transformInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_syntaxInstructionAST_transformInstruction> gExtensionMethodTable_syntaxInstructionAST_transformInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_transformInstruction (const int32_t inClassIndex,
                                                extensionMethodSignature_syntaxInstructionAST_transformInstruction inMethod) {
  gExtensionMethodTable_syntaxInstructionAST_transformInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_syntaxInstructionAST_transformInstruction (void) {
  gExtensionMethodTable_syntaxInstructionAST_transformInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_syntaxInstructionAST_transformInstruction (NULL,
                                                                      freeExtensionMethod_syntaxInstructionAST_transformInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                               GALGAS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                               GALGAS_uint & io_ioAddedNonTerminalIndex,
                                               GALGAS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_syntaxInstructionAST_transformInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_syntaxInstructionAST_transformInstruction.count ()) {
      f = gExtensionMethodTable_syntaxInstructionAST_transformInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_syntaxInstructionAST_transformInstruction.count ()) {
          f = gExtensionMethodTable_syntaxInstructionAST_transformInstruction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_syntaxInstructionAST_transformInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioActuallyUsedTerminalSymbolMap, constin_inNonTerminalSymbolMap, io_ioAddedNonTerminalIndex, io_ioSyntaxInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const GALGAS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   GALGAS_rowList & ioArgument_ioRowList,
                                                   const GALGAS_uint constinArgument_inRow,
                                                   GALGAS_uint & ioArgument_ioColumn,
                                                   GALGAS_string & ioArgument_ioCurrentNode,
                                                   GALGAS_string & ioArgument_ioArrowShape,
                                                   GALGAS_string & ioArgument_ioArrows,
                                                   GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                   const GALGAS_bool constinArgument_inDebug,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 232)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_nodeName_9362 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9362, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 233)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (var_nodeName_9362, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)) ;
      ioArgument_ioCurrentNode = var_nodeName_9362 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.increment_operation (inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 242)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_syntaxInstructionListForGrammarAnalysis temp_2 = inObject ;
    cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_9569 (temp_2, kENUMERATION_UP) ;
    while (enumerator_9569.hasCurrentObject ()) {
      callExtensionMethod_tikzNodeForSyntaxInstruction ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_9569.current_mInstruction (HERE).ptr (), ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, ioArgument_ioMaxUsedRowIndex, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 245)) ;
      enumerator_9569.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@rowList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_rowList : public cCollectionElement {
  public: GALGAS_rowList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_rowList (const GALGAS__32_stringlist & in_columns
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_rowList (const GALGAS_rowList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_rowList::cCollectionElement_rowList (const GALGAS__32_stringlist & in_columns
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_columns) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_rowList::cCollectionElement_rowList (const GALGAS_rowList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_columns) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_rowList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_rowList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_rowList (mObject.mProperty_columns COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_rowList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "columns" ":" ;
  mObject.mProperty_columns.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_rowList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_rowList * operand = (cCollectionElement_rowList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_rowList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList::GALGAS_rowList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList::GALGAS_rowList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_rowList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::constructor_listWithValue (const GALGAS__32_stringlist & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_rowList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_rowList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_rowList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GALGAS__32_stringlist & in_columns
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_rowList * p = NULL ;
  macroMyNew (p, cCollectionElement_rowList (in_columns COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::addAssign_operation (const GALGAS__32_stringlist & inOperand0
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_rowList::setter_append (GALGAS_rowList_2D_element inElement,
                                    C_Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_rowList (inElement COMMA_THERE)) ;
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

void GALGAS_rowList::setter_insertAtIndex (const GALGAS__32_stringlist inOperand0,
                                           const GALGAS_uint inInsertionIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_rowList::setter_removeAtIndex (GALGAS__32_stringlist & outOperand0,
                                           const GALGAS_uint inRemoveIndex,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_rowList) ;
        outOperand0 = p->mObject.mProperty_columns ;
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

void GALGAS_rowList::setter_popFirst (GALGAS__32_stringlist & outOperand0,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_popLast (GALGAS__32_stringlist & outOperand0,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::method_first (GALGAS__32_stringlist & outOperand0,
                                   C_Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::method_last (GALGAS__32_stringlist & outOperand0,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::add_operation (const GALGAS_rowList & inOperand,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_rowList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_rowList result = GALGAS_rowList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_rowList result = GALGAS_rowList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_rowList result = GALGAS_rowList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::plusAssign_operation (const GALGAS_rowList inOperand,
                                           C_Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_setColumnsAtIndex (GALGAS__32_stringlist inOperand,
                                               GALGAS_uint inIndex,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_columns = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_rowList::getter_columnsAtIndex (const GALGAS_uint & inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    result = p->mObject.mProperty_columns ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_rowList::cEnumerator_rowList (const GALGAS_rowList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element cEnumerator_rowList::current (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_rowList::current_columns (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject.mProperty_columns ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@rowList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rowList ("rowList",
                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rowList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rowList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rowList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::extractObject (const GALGAS_object & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_rowList result ;
  const GALGAS_rowList * p = (const GALGAS_rowList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rowList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@rowList appendRow'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (GALGAS_rowList & ioObject,
                                const GALGAS_string constinArgument_inNodeDefinition,
                                const GALGAS_uint constinArgument_inRow,
                                const GALGAS_uint constinArgument_inColumn,
                                GALGAS_string & outArgument_outNodeName,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNodeName.drop () ; // Release 'out' argument
  const GALGAS_rowList temp_0 = ioObject ;
  GALGAS_uint var_length_10357 = temp_0.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 274)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsInfOrEqual, var_length_10357.objectCompare (constinArgument_inRow)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_range enumerator_10429 (GALGAS_range (var_length_10357, constinArgument_inRow.substract_operation (var_length_10357, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 276)).add_operation (GALGAS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 276))), kENUMERATION_UP) ;
      while (enumerator_10429.hasCurrentObject ()) {
        ioObject.addAssign_operation (GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 277))  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 277)) ;
        enumerator_10429.gotoNextObject () ;
      }
    }
  }
  const GALGAS_rowList temp_2 = ioObject ;
  GALGAS__32_stringlist var_cols_10488 = temp_2.getter_columnsAtIndex (constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 281)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsInfOrEqual, var_cols_10488.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 283)).objectCompare (constinArgument_inColumn)).boolEnum () ;
    if (kBoolTrue == test_3) {
      cEnumerator_range enumerator_10623 (GALGAS_range (var_cols_10488.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 284)), constinArgument_inColumn.substract_operation (var_cols_10488.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284)).add_operation (GALGAS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284))), kENUMERATION_UP) ;
      while (enumerator_10623.hasCurrentObject ()) {
        var_cols_10488.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 285)) ;
        enumerator_10623.gotoNextObject () ;
      }
    }
  }
  outArgument_outNodeName = GALGAS_string ("p").add_operation (constinArgument_inRow.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)).add_operation (var_cols_10488.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 289)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)) ;
  var_cols_10488.addAssign_operation (outArgument_outNodeName, constinArgument_inNodeDefinition  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 290)) ;
  {
  ioObject.setter_setColumnsAtIndex (var_cols_10488, constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 292)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction> gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_tikzNodeForSyntaxInstruction (const int32_t inClassIndex,
                                                        extensionMethodSignature_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction inMethod) {
  gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (void) {
  gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (NULL,
                                                                                                     freeExtensionMethod_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       GALGAS_rowList & io_ioRowList,
                                                       const GALGAS_uint constin_inRow,
                                                       GALGAS_uint & io_ioColumn,
                                                       GALGAS_string & io_ioCurrentNode,
                                                       GALGAS_string & io_ioArrowShape,
                                                       GALGAS_string & io_ioArrows,
                                                       GALGAS_uint & io_ioMaxUsedRowIndex,
                                                       const GALGAS_bool constin_inDebug,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction.count ()) {
      f = gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction.count ()) {
          f = gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractSyntaxInstructionForGrammarAnalysis_tikzNodeForSyntaxInstruction.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioRowList, constin_inRow, io_ioColumn, io_ioCurrentNode, io_ioArrowShape, io_ioArrows, io_ioMaxUsedRowIndex, constin_inDebug, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@syntaxInstructionListForGrammarAnalysis displayVertically'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_displayVertically (const GALGAS_syntaxInstructionListForGrammarAnalysis & inObject,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_syntaxInstructionListForGrammarAnalysis temp_0 = inObject ;
  result_result = GALGAS_bool (kIsStrictSup, temp_0.getter_length (SOURCE_FILE ("production-rules-in-tex.galgas", 564)).objectCompare (GALGAS_uint ((uint32_t) 4U))) ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_19955 (temp_1, kENUMERATION_UP) ;
  bool bool_2 = result_result.isValidAndTrue () ;
  if (enumerator_19955.hasCurrentObject () && bool_2) {
    while (enumerator_19955.hasCurrentObject () && bool_2) {
      result_result = callExtensionGetter_isLinear ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_19955.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 566)) ;
      enumerator_19955.gotoNextObject () ;
      if (enumerator_19955.hasCurrentObject ()) {
        bool_2 = result_result.isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractSyntaxInstructionForGrammarAnalysis isLinear'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <enterExtensionGetter_abstractSyntaxInstructionForGrammarAnalysis_isLinear> gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionGetter_isLinear (const int32_t inClassIndex,
                                    enterExtensionGetter_abstractSyntaxInstructionForGrammarAnalysis_isLinear inGetter) {
  gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionGetter_abstractSyntaxInstructionForGrammarAnalysis_isLinear (void) {
  gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_abstractSyntaxInstructionForGrammarAnalysis_isLinear (NULL,
                                                                                 freeExtensionGetter_abstractSyntaxInstructionForGrammarAnalysis_isLinear) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractSyntaxInstructionForGrammarAnalysis_isLinear f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear.count ()) {
      f = gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear.count ()) {
           f = gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractSyntaxInstructionForGrammarAnalysis_isLinear.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//Class for element of '@programListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_programListForGeneration : public cCollectionElement {
  public: GALGAS_programListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_programListForGeneration (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_programListForGeneration (const GALGAS_programListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GALGAS_programListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_programListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_programListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_programListForGeneration (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_programListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaration" ":" ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_programListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_programListForGeneration * operand = (cCollectionElement_programListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_programListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration::GALGAS_programListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration::GALGAS_programListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_programListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::constructor_listWithValue (const GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_programListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_programListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_programListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_programListForGeneration (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::addAssign_operation (const GALGAS_semanticDeclarationForGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_programListForGeneration::setter_append (GALGAS_programListForGeneration_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_programListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_programListForGeneration::setter_insertAtIndex (const GALGAS_semanticDeclarationForGeneration inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_programListForGeneration::setter_removeAtIndex (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mDeclaration ;
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
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::plusAssign_operation (const GALGAS_programListForGeneration inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::setter_setMDeclarationAtIndex (GALGAS_semanticDeclarationForGeneration inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration GALGAS_programListForGeneration::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  GALGAS_semanticDeclarationForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_programListForGeneration::cEnumerator_programListForGeneration (const GALGAS_programListForGeneration & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element cEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration cEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@programListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programListForGeneration ("programListForGeneration",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap::GALGAS_genericExtensionMethodListMap (void) :
AC_GALGAS_listmap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap GALGAS_genericExtensionMethodListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMap::addAssign_operation (const GALGAS_string & inKey,
                                                                const GALGAS_lstring & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_lstringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_genericExtensionMethodListMap::getter_listForKey (const GALGAS_string & inKey
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_lstringlist (listForKey (inKey)) ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_genericExtensionMethodListMap::cEnumerator_genericExtensionMethodListMap (const GALGAS_genericExtensionMethodListMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element cEnumerator_genericExtensionMethodListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_genericExtensionMethodListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_genericExtensionMethodListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_genericExtensionMethodListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_lstringlist (p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@genericExtensionMethodListMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericExtensionMethodListMap ("genericExtensionMethodListMap",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericExtensionMethodListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticDeclarationAST_buildExtensionListMaps> gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_buildExtensionListMaps (const int32_t inClassIndex,
                                                  extensionMethodSignature_semanticDeclarationAST_buildExtensionListMaps inMethod) {
  gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionSettierListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticDeclarationAST_buildExtensionListMaps f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps.count ()) {
      f = gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps.count ()) {
           f = gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioAbstractExtensionSetterListMap, io_ioExtensionSettierListMap, io_ioOverridingExtensionSetterListMap, io_ioOverridingAbstractExtensionSetterListMap, io_ioAbstractExtensionMethodListMapAST, io_ioExtensionMethodListMap, io_ioOverridingExtensionMethodListMap, io_ioOverridingAbstractExtensionMethodListMap, io_ioAbstractExtensionGetterListMap, io_ioExtensionGetterListMap, io_ioOverridingExtensionGetterListMap, io_ioOverridingAbstractExtensionGetterListMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_semanticDeclarationAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                           GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_semanticDeclarationAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_semanticDeclarationAST.mSlotID,
                                               extensionMethod_semanticDeclarationAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticDeclarationAST_buildExtensionListMaps (void) {
  gExtensionMethodTable_semanticDeclarationAST_buildExtensionListMaps.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticDeclarationAST_buildExtensionListMaps (defineExtensionMethod_semanticDeclarationAST_buildExtensionListMaps,
                                                                          freeExtensionMethod_semanticDeclarationAST_buildExtensionListMaps) ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap::GALGAS_descendantClassListMap (void) :
AC_GALGAS_listmap () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap GALGAS_descendantClassListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_descendantClassListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMap::addAssign_operation (const GALGAS_string & inKey,
                                                         const GALGAS_unifiedTypeMap_2D_entry & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapEntryList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_descendantClassListMap::getter_listForKey (const GALGAS_string & inKey
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_unifiedTypeMapEntryList (listForKey (inKey)) ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_descendantClassListMap::cEnumerator_descendantClassListMap (const GALGAS_descendantClassListMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element cEnumerator_descendantClassListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_descendantClassListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_descendantClassListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList cEnumerator_descendantClassListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_unifiedTypeMapEntryList (p->mSharedListMapList) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@descendantClassListMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap ("descendantClassListMap",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_descendantClassListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_descendantClassListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForGlobalCheckings::cMapElement_extensionMethodMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForGlobalCheckings::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForGlobalCheckings::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionMethodMapForGlobalCheckings (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForGlobalCheckings::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionMethodMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMethodMapForGlobalCheckings * operand = (cMapElement_extensionMethodMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings::GALGAS_extensionMethodMapForGlobalCheckings (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings::GALGAS_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings & GALGAS_extensionMethodMapForGlobalCheckings::operator = (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionMethodMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForGlobalCheckings * GALGAS_extensionMethodMapForGlobalCheckings::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * result = (cMapElement_extensionMethodMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForGlobalCheckings::cEnumerator_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element cEnumerator_extensionMethodMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForGlobalCheckings * p = (const cMapElement_extensionMethodMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return GALGAS_extensionMethodMapForGlobalCheckings_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionMethodMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForGlobalCheckings::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_extensionMethodMapForGlobalCheckings * p = (const cMapElement_extensionMethodMapForGlobalCheckings *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionMethodMapForGlobalCheckings type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ("extensionMethodMapForGlobalCheckings",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForGlobalCheckings::cMapElement_extensionSetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionSetterMapForGlobalCheckings::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionSetterMapForGlobalCheckings::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionSetterMapForGlobalCheckings (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionSetterMapForGlobalCheckings::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionSetterMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionSetterMapForGlobalCheckings * operand = (cMapElement_extensionSetterMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings::GALGAS_extensionSetterMapForGlobalCheckings (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings::GALGAS_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings & GALGAS_extensionSetterMapForGlobalCheckings::operator = (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionSetterMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForGlobalCheckings * GALGAS_extensionSetterMapForGlobalCheckings::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * result = (cMapElement_extensionSetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionSetterMapForGlobalCheckings::cEnumerator_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element cEnumerator_extensionSetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForGlobalCheckings * p = (const cMapElement_extensionSetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return GALGAS_extensionSetterMapForGlobalCheckings_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionSetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForGlobalCheckings::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_extensionSetterMapForGlobalCheckings * p = (const cMapElement_extensionSetterMapForGlobalCheckings *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionSetterMapForGlobalCheckings type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ("extensionSetterMapForGlobalCheckings",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForGlobalCheckings::cMapElement_extensionGetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_extensionGetterMapForGlobalCheckings::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionGetterMapForGlobalCheckings::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_extensionGetterMapForGlobalCheckings (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_extensionGetterMapForGlobalCheckings::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionGetterMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionGetterMapForGlobalCheckings * operand = (cMapElement_extensionGetterMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings::GALGAS_extensionGetterMapForGlobalCheckings (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings::GALGAS_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings & GALGAS_extensionGetterMapForGlobalCheckings::operator = (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionGetterMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForGlobalCheckings * GALGAS_extensionGetterMapForGlobalCheckings::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * result = (cMapElement_extensionGetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extensionGetterMapForGlobalCheckings::cEnumerator_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element cEnumerator_extensionGetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForGlobalCheckings * p = (const cMapElement_extensionGetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return GALGAS_extensionGetterMapForGlobalCheckings_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionGetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForGlobalCheckings::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_extensionGetterMapForGlobalCheckings * p = (const cMapElement_extensionGetterMapForGlobalCheckings *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterMapForGlobalCheckings type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ("extensionGetterMapForGlobalCheckings",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//----------------------------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgas_33_Scanner::C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                                                          const C_String & inSourceFileName
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

C_Lexique_galgas_33_Scanner::C_Lexique_galgas_33_Scanner (C_Compiler * inCallerCompiler,
                                                          const C_String & inSourceString,
                                                          const C_String & inStringForError
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------
//                 I N D E X I N G    D I R E C T O R Y                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgas_33_Scanner::indexingDirectory (void) const {
  return "../build/indexes" ;
}

//----------------------------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//          Syntax error messages, for every terminal symbol                                     
//----------------------------------------------------------------------------------------------------------------------

//--- Syntax error message for terminal '$identifier$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_identifier = "an identifier" ;

//--- Syntax error message for terminal '$double.xxx$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_double_2E_xxx = "a float number" ;

//--- Syntax error message for terminal '$uint32$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_uint_33__32_ = "a 32-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$sint32_S$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_sint_33__32__5F_S = "a 32-bit signed decimal number" ;

//--- Syntax error message for terminal '$uint64_L$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_uint_36__34__5F_L = "a 64-bit unsigned decimal number" ;

//--- Syntax error message for terminal '$sint64_LS$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_sint_36__34__5F_LS = "a 64-bit signed decimal number" ;

//--- Syntax error message for terminal '$bigint_G$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_bigint_5F_G = "a big integer number" ;

//--- Syntax error message for terminal '$.$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2E_ = "the '.' delimitor" ;

//--- Syntax error message for terminal '$...$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__2E_ = "the '...' delimitor" ;

//--- Syntax error message for terminal '$..<$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__3C_ = "the '..<' delimitor" ;

//--- Syntax error message for terminal '$@type$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__40_type = "a type name (@...)" ;

//--- Syntax error message for terminal '$%attribute$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__25_attribute = "an attribute (%...)" ;

//--- Syntax error message for terminal '$'char'$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__27_char_27_ = "a character constant" ;

//--- Syntax error message for terminal '$$terminal$$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__24_terminal_24_ = "a terminal symbol ($...$)" ;

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

//--- Syntax error message for terminal '$<non_terminal>$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__3C_non_5F_terminal_3E_ = "a non terminal symbol <...>" ;

//--- Syntax error message for terminal '$"string"$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner__22_string_22_ = "a character string constant \"...\"" ;

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

//--- Syntax error message for terminal '$boolset$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_boolset = "the 'boolset' keyword" ;

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

//--- Syntax error message for terminal '$dict$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_dict = "the 'dict' keyword" ;

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

//--- Syntax error message for terminal '$fixit$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_fixit = "the 'fixit' keyword" ;

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

//--- Syntax error message for terminal '$refclass$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_refclass = "the 'refclass' keyword" ;

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

//--- Syntax error message for terminal '$shared$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_shared = "the 'shared' keyword" ;

//--- Syntax error message for terminal '$unused$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_unused = "the 'unused' keyword" ;

//--- Syntax error message for terminal '$valueclass$' :
static const char * gSyntaxErrorMessage_galgas_33_Scanner_valueclass = "the 'valueclass' keyword" ;

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

//----------------------------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgas_33_Scanner::getMessageForTerminal (const int16_t inTerminalIndex) const {
  C_String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 153)) {
    static const char * syntaxErrorMessageArray [153] = {kEndOfSourceLexicalErrorMessage,
        gSyntaxErrorMessage_galgas_33_Scanner_identifier,
        gSyntaxErrorMessage_galgas_33_Scanner_double_2E_xxx,
        gSyntaxErrorMessage_galgas_33_Scanner_uint_33__32_,
        gSyntaxErrorMessage_galgas_33_Scanner_sint_33__32__5F_S,
        gSyntaxErrorMessage_galgas_33_Scanner_uint_36__34__5F_L,
        gSyntaxErrorMessage_galgas_33_Scanner_sint_36__34__5F_LS,
        gSyntaxErrorMessage_galgas_33_Scanner_bigint_5F_G,
        gSyntaxErrorMessage_galgas_33_Scanner__2E_,
        gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__2E_,
        gSyntaxErrorMessage_galgas_33_Scanner__2E__2E__3C_,
        gSyntaxErrorMessage_galgas_33_Scanner__40_type,
        gSyntaxErrorMessage_galgas_33_Scanner__25_attribute,
        gSyntaxErrorMessage_galgas_33_Scanner__27_char_27_,
        gSyntaxErrorMessage_galgas_33_Scanner__24_terminal_24_,
        gSyntaxErrorMessage_galgas_33_Scanner__3F_,
        gSyntaxErrorMessage_galgas_33_Scanner__3F__21_,
        gSyntaxErrorMessage_galgas_33_Scanner__21_,
        gSyntaxErrorMessage_galgas_33_Scanner__21__3F_,
        gSyntaxErrorMessage_galgas_33_Scanner__3C_,
        gSyntaxErrorMessage_galgas_33_Scanner__3C__3D_,
        gSyntaxErrorMessage_galgas_33_Scanner__3C__3C_,
        gSyntaxErrorMessage_galgas_33_Scanner__3C_non_5F_terminal_3E_,
        gSyntaxErrorMessage_galgas_33_Scanner__22_string_22_,
        gSyntaxErrorMessage_galgas_33_Scanner_comment,
        gSyntaxErrorMessage_galgas_33_Scanner_commentMark,
        gSyntaxErrorMessage_galgas_33_Scanner_abstract,
        gSyntaxErrorMessage_galgas_33_Scanner_after,
        gSyntaxErrorMessage_galgas_33_Scanner_array,
        gSyntaxErrorMessage_galgas_33_Scanner_as,
        gSyntaxErrorMessage_galgas_33_Scanner_before,
        gSyntaxErrorMessage_galgas_33_Scanner_between,
        gSyntaxErrorMessage_galgas_33_Scanner_block,
        gSyntaxErrorMessage_galgas_33_Scanner_boolset,
        gSyntaxErrorMessage_galgas_33_Scanner_cast,
        gSyntaxErrorMessage_galgas_33_Scanner_case,
        gSyntaxErrorMessage_galgas_33_Scanner_class,
        gSyntaxErrorMessage_galgas_33_Scanner_constructor,
        gSyntaxErrorMessage_galgas_33_Scanner_default,
        gSyntaxErrorMessage_galgas_33_Scanner_dict,
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
        gSyntaxErrorMessage_galgas_33_Scanner_fixit,
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
        gSyntaxErrorMessage_galgas_33_Scanner_refclass,
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
        gSyntaxErrorMessage_galgas_33_Scanner_shared,
        gSyntaxErrorMessage_galgas_33_Scanner_unused,
        gSyntaxErrorMessage_galgas_33_Scanner_valueclass,
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
        gSyntaxErrorMessage_galgas_33_Scanner__26__2B__2B_
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//----------------------------------------------------------------------------------------------------------------------

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

//--- Unicode string for '$_5C__24_$'
static const utf32 kUnicodeString_galgas_33_Scanner__5C__24_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('$'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__5C_$'
static const utf32 kUnicodeString_galgas_33_Scanner__5C__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
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

//--- Unicode string for '$boolset$'
static const utf32 kUnicodeString_galgas_33_Scanner_boolset [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$dict$'
static const utf32 kUnicodeString_galgas_33_Scanner_dict [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
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

//--- Unicode string for '$fixit$'
static const utf32 kUnicodeString_galgas_33_Scanner_fixit [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
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

//--- Unicode string for '$refclass$'
static const utf32 kUnicodeString_galgas_33_Scanner_refclass [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
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

//--- Unicode string for '$shared$'
static const utf32 kUnicodeString_galgas_33_Scanner_shared [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('h'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
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

//--- Unicode string for '$valueclass$'
static const utf32 kUnicodeString_galgas_33_Scanner_valueclass [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
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

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//----------------------------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgas_33_Scanner_galgasKeyWordList = 87 ;

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
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_dict, 4, C_Lexique_galgas_33_Scanner::kToken_dict),
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
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_fixit, 5, C_Lexique_galgas_33_Scanner::kToken_fixit),
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
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_shared, 6, C_Lexique_galgas_33_Scanner::kToken_shared),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_struct, 6, C_Lexique_galgas_33_Scanner::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_switch, 6, C_Lexique_galgas_33_Scanner::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_syntax, 6, C_Lexique_galgas_33_Scanner::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_unused, 6, C_Lexique_galgas_33_Scanner::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_between, 7, C_Lexique_galgas_33_Scanner::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_boolset, 7, C_Lexique_galgas_33_Scanner::kToken_boolset),
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
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_refclass, 8, C_Lexique_galgas_33_Scanner::kToken_refclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_template, 8, C_Lexique_galgas_33_Scanner::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_extension, 9, C_Lexique_galgas_33_Scanner::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_sortedlist, 10, C_Lexique_galgas_33_Scanner::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_valueclass, 10, C_Lexique_galgas_33_Scanner::kToken_valueclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_constructor, 11, C_Lexique_galgas_33_Scanner::kToken_constructor),
  C_unicode_lexique_table_entry (kUnicodeString_galgas_33_Scanner_filewrapper, 11, C_Lexique_galgas_33_Scanner::kToken_filewrapper)
} ;

int16_t C_Lexique_galgas_33_Scanner::search_into_galgasKeyWordList (const C_String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgas_33_Scanner_galgasKeyWordList, ktable_size_galgas_33_Scanner_galgasKeyWordList) ;
}


//----------------------------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//----------------------------------------------------------------------------------------------------------------------

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
    case kToken_double_2E_xxx:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("double.xxx") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_uint_33__32_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("uint32") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_sint_33__32__5F_S:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sint32_S") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_33__32_value) ;
      break ;
    case kToken_uint_36__34__5F_L:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("uint64_L") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_36__34_value) ;
      break ;
    case kToken_sint_36__34__5F_LS:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("sint64_LS") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendSigned (ptr->mLexicalAttribute_sint_36__34_value) ;
      break ;
    case kToken_bigint_5F_G:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("bigint_G") ;
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
    case kToken__40_type:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("@type") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__25_attribute:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("%attribute") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__27_char_27_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("'char'") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendUnicodeCharacter (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken__24_terminal_24_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("$terminal$") ;
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
    case kToken__3C_non_5F_terminal_3E_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("<non_terminal>") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;
      s.appendCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__22_string_22_:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("\"string\"") ;
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
    case kToken_boolset:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("boolset") ;
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
    case kToken_dict:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("dict") ;
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
    case kToken_fixit:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("fixit") ;
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
    case kToken_refclass:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("refclass") ;
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
    case kToken_shared:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("shared") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unused:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("unused") ;
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_valueclass:
      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;
      s.appendCString ("valueclass") ;
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

//----------------------------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//----------------------------------------------------------------------------------------------------------------------


//----------------------------------------------------------------------------------------------------------------------
//            Unicode test functions                                                             
//----------------------------------------------------------------------------------------------------------------------
 
bool C_Lexique_galgas_33_Scanner::galgasUnicodeLetter (const utf32 inUnicodeCharacter) {
  return ((0x61 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x7A)) ||
         ((0x41 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x5A)) ||
         ((0xC0 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0xD6)) ||
         ((0xD8 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0xF6)) ||
         ((0xF8 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x2B4)) ||
         ((0x38E <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x3A1)) ||
         ((0x3A3 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x3F5)) ||
         ((0x3F7 <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x481)) ||
         ((0x48A <= UNICODE_VALUE (inUnicodeCharacter)) && (UNICODE_VALUE (inUnicodeCharacter) <= 0x523)) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//----------------------------------------------------------------------------------------------------------------------

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
      if (testForCharWithFunction (galgasUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (galgasUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
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
            token.mTokenCode = kToken_sint_36__34__5F_LS ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('S')) || testForInputUTF32Char (TO_UNICODE ('s'))) {
            ::scanner_routine_convertHexStringIntoSInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_33__32_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_sint_33__32__5F_S ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
            ::scanner_routine_convertHexStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_uint_36__34__5F_L ;
            enterToken (token) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
            ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_bigint_5F_G ;
            enterToken (token) ;
          }else{
            ::scanner_routine_convertHexStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
            token.mTokenCode = kToken_uint_33__32_ ;
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
          token.mTokenCode = kToken_sint_33__32__5F_S ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner_LS, 2, true)) {
          ::scanner_routine_convertDecimalStringIntoSInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_sint_36__34_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_sint_36__34__5F_LS ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('L'))) {
          ::scanner_routine_convertDecimalStringIntoUInt64 (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_36__34_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_uint_36__34__5F_L ;
          enterToken (token) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('G'))) {
          ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_bigint_5F_G ;
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
          token.mTokenCode = kToken_double_2E_xxx ;
          enterToken (token) ;
        }else{
          ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgas_33_Scanner_decimalNumberTooLarge, gLexicalMessage_galgas_33_Scanner_internalError) ;
          token.mTokenCode = kToken_uint_33__32_ ;
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
          token.mTokenCode = kToken_double_2E_xxx ;
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
        token.mTokenCode = kToken__40_type ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('%'))) {
        if (testForCharWithFunction (galgasUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (galgasUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('-')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
        }
        token.mTokenCode = kToken__25_attribute ;
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
          token.mTokenCode = kToken__27_char_27_ ;
          enterToken (token) ;
        }else{
          lexicalError (gLexicalMessage_galgas_33_Scanner_incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
        if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__5C_, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__24_, 2, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
        }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          do {
            if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__5C_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
            }else if (testForInputUTF32String (kUnicodeString_galgas_33_Scanner__5C__24_, 2, true)) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
            }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
              ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
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
        token.mTokenCode = kToken__24_terminal_24_ ;
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
        }else if (testForCharWithFunction (galgasUnicodeLetter)) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForCharWithFunction (galgasUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              mLoop = false ;
            }
          }while (mLoop) ;
          mLoop = true ;
          if (testForInputUTF32Char (TO_UNICODE ('>'))) {
            token.mTokenCode = kToken__3C_non_5F_terminal_3E_ ;
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
          token.mTokenCode = kToken__22_string_22_ ;
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
        token.mTokenCode = -1 ; // No token
        advance () ; // ... go throught unknown character
      }
    }catch (const C_lexicalErrorException &) {
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//----------------------------------------------------------------------------------------------------------------------

void C_Lexique_galgas_33_Scanner::enterToken (cTokenFor_galgas_33_Scanner & ioToken) {
  cTokenFor_galgas_33_Scanner * ptr = NULL ;
  macroMyNew (ptr, cTokenFor_galgas_33_Scanner ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_sint_33__32_value = ioToken.mLexicalAttribute_sint_33__32_value ;
  ptr->mLexicalAttribute_sint_36__34_value = ioToken.mLexicalAttribute_sint_36__34_value ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  ptr->mLexicalAttribute_uint_36__34_value = ioToken.mLexicalAttribute_uint_36__34_value ;
  enterTokenFromPointer (ptr) ;
}

//----------------------------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//----------------------------------------------------------------------------------------------------------------------

C_BigInt C_Lexique_galgas_33_Scanner::attributeValue_bigintValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//----------------------------------------------------------------------------------------------------------------------

utf32 C_Lexique_galgas_33_Scanner::attributeValue_charValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//----------------------------------------------------------------------------------------------------------------------

double C_Lexique_galgas_33_Scanner::attributeValue_floatValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgas_33_Scanner::attributeValue_identifierString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//----------------------------------------------------------------------------------------------------------------------

int32_t C_Lexique_galgas_33_Scanner::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

int64_t C_Lexique_galgas_33_Scanner::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------

C_String C_Lexique_galgas_33_Scanner::attributeValue_tokenString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgas_33_Scanner::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//----------------------------------------------------------------------------------------------------------------------

uint64_t C_Lexique_galgas_33_Scanner::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//----------------------------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lbigint C_Lexique_galgas_33_Scanner::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar C_Lexique_galgas_33_Scanner::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_galgas_33_Scanner::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgas_33_Scanner::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint C_Lexique_galgas_33_Scanner::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ C_Lexique_galgas_33_Scanner::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgas_33_Scanner::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_galgas_33_Scanner::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ C_Lexique_galgas_33_Scanner::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgas_33_Scanner * ptr = (cTokenFor_galgas_33_Scanner *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgas_33_Scanner) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_galgas_33_Scanner::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint32") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint32_S") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("uint64_L") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("sint64_LS") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("bigint_G") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("%attribute") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("$terminal$") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("<non_terminal>") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("constructor") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("dict") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("refclass") COMMA_THERE) ;
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
  result.addAssign_operation (GALGAS_string ("shared") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_THERE) ;
  result.addAssign_operation (GALGAS_string ("valueclass") COMMA_THERE) ;
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

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordLists_galgas_33_Scanner (TC_UniqueArray <C_String> & ioList) {
  ioList.appendObject ("galgas3Scanner:galgasDelimitorsList") ;
  ioList.appendObject ("galgas3Scanner:galgasKeyWordList") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgas_33_Scanner (const C_String & inIdentifier,
                                                        bool & ioFound,
                                                        TC_UniqueArray <C_String> & ioList) {
  if (inIdentifier == "galgas3Scanner:galgasDelimitorsList") {
    ioFound = true ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("`") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&*") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&-") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("++") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("--") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("&++") ;
    ioList.appendObject ("&--") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgas3Scanner:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("as") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("is") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("gui") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("log") ;
    ioList.appendObject ("map") ;
    ioList.appendObject ("mod") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("tag") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("cast") ;
    ioList.appendObject ("dict") ;
    ioList.appendObject ("drop") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("array") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("match") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("state") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("getter") ;
    ioList.appendObject ("insert") ;
    ioList.appendObject ("method") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("rewind") ;
    ioList.appendObject ("search") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("setter") ;
    ioList.appendObject ("shared") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("grammar") ;
    ioList.appendObject ("lexique") ;
    ioList.appendObject ("listmap") ;
    ioList.appendObject ("message") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("project") ;
    ioList.appendObject ("replace") ;
    ioList.appendObject ("warning") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("indexing") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("refclass") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("valueclass") ;
    ioList.appendObject ("constructor") ;
    ioList.appendObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgas_33_Scanner
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgas_33_Scanner, getKeywordsForIdentifier_galgas_33_Scanner) ;

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//----------------------------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgas_33_Scanner::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [153] = {0,
    0 /* galgas3Scanner_1_identifier */,
    8 /* galgas3Scanner_1_double_2E_xxx */,
    6 /* galgas3Scanner_1_uint_33__32_ */,
    6 /* galgas3Scanner_1_sint_33__32__5F_S */,
    6 /* galgas3Scanner_1_uint_36__34__5F_L */,
    6 /* galgas3Scanner_1_sint_36__34__5F_LS */,
    7 /* galgas3Scanner_1_bigint_5F_G */,
    2 /* galgas3Scanner_1__2E_ */,
    2 /* galgas3Scanner_1__2E__2E__2E_ */,
    2 /* galgas3Scanner_1__2E__2E__3C_ */,
    11 /* galgas3Scanner_1__40_type */,
    12 /* galgas3Scanner_1__25_attribute */,
    9 /* galgas3Scanner_1__27_char_27_ */,
    4 /* galgas3Scanner_1__24_terminal_24_ */,
    3 /* galgas3Scanner_1__3F_ */,
    3 /* galgas3Scanner_1__3F__21_ */,
    3 /* galgas3Scanner_1__21_ */,
    3 /* galgas3Scanner_1__21__3F_ */,
    2 /* galgas3Scanner_1__3C_ */,
    2 /* galgas3Scanner_1__3C__3D_ */,
    2 /* galgas3Scanner_1__3C__3C_ */,
    5 /* galgas3Scanner_1__3C_non_5F_terminal_3E_ */,
    10 /* galgas3Scanner_1__22_string_22_ */,
    13 /* galgas3Scanner_1_comment */,
    13 /* galgas3Scanner_1_commentMark */,
    1 /* galgas3Scanner_1_abstract */,
    1 /* galgas3Scanner_1_after */,
    1 /* galgas3Scanner_1_array */,
    1 /* galgas3Scanner_1_as */,
    1 /* galgas3Scanner_1_before */,
    1 /* galgas3Scanner_1_between */,
    1 /* galgas3Scanner_1_block */,
    1 /* galgas3Scanner_1_boolset */,
    1 /* galgas3Scanner_1_cast */,
    1 /* galgas3Scanner_1_case */,
    1 /* galgas3Scanner_1_class */,
    1 /* galgas3Scanner_1_constructor */,
    1 /* galgas3Scanner_1_default */,
    1 /* galgas3Scanner_1_dict */,
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
    1 /* galgas3Scanner_1_fixit */,
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
    1 /* galgas3Scanner_1_refclass */,
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
    1 /* galgas3Scanner_1_shared */,
    1 /* galgas3Scanner_1_unused */,
    1 /* galgas3Scanner_1_valueclass */,
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

//----------------------------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//----------------------------------------------------------------------------------------------------------------------

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

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GALGAS_luint & outArgument_majorVersion,
                                                                                          GALGAS_luint & outArgument_minorVersion,
                                                                                          GALGAS_luint & outArgument_revisionVersion,
                                                                                          GALGAS_lstring & outArgument_targetName,
                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_majorVersion.drop () ; // Release 'out' argument
  outArgument_minorVersion.drop () ; // Release 'out' argument
  outArgument_revisionVersion.drop () ; // Release 'out' argument
  outArgument_targetName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_project COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 22)) ;
  outArgument_majorVersion = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  outArgument_minorVersion = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  outArgument_revisionVersion = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  outArgument_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_project COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_project COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 27)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 28)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 29)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 30)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GALGAS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  GALGAS_luint var_majorVersion_1821 ;
  GALGAS_luint var_minorVersion_1850 ;
  GALGAS_luint var_revisionVersion_1882 ;
  GALGAS_lstring var_targetName_1911 ;
  nt_project_5F_header_ (var_majorVersion_1821, var_minorVersion_1850, var_revisionVersion_1882, var_targetName_1911, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 41)) ;
  GALGAS_lstringlist var_projectSourceList_1950 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 42)) ;
  GALGAS_lstringlist var_generateFeatureList_1990 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 43)) ;
  GALGAS_galgas_33_QualifiedFeatureList var_qualifiedFeatureList_2047 = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (SOURCE_FILE ("galgas3ProjectSyntax.galgas", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_featureName_2112 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 47)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
        GALGAS_lstring var_featureValue_2177 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 50)) ;
        var_qualifiedFeatureList_2047.addAssign_operation (var_featureName_2112, var_featureValue_2177  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 51)) ;
      } break ;
      case 2: {
        var_generateFeatureList_1990.addAssign_operation (var_featureName_2112  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 53)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      GALGAS_lstring var_filePath_2337 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 56)) ;
      var_projectSourceList_1950.addAssign_operation (var_filePath_2337  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 57)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 59)) ;
  outArgument_outProjectComponentAST = GALGAS_galgas_33_ProjectComponentAST::constructor_new (var_projectSourceList_1950, var_majorVersion_1821, var_minorVersion_1850, var_revisionVersion_1882, var_generateFeatureList_1990, var_qualifiedFeatureList_2047, var_targetName_1911, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 68))  COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 60)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_project_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 47)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 50)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_project_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__25_attribute COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 47)) ;
      switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 49)) ;
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 50)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("galgas3ProjectSyntax.galgas", 59)) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_QualifiedFeatureList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_QualifiedFeatureList : public cCollectionElement {
  public: GALGAS_galgas_33_QualifiedFeatureList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                             const GALGAS_lstring & in_mFeatureValue
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_lstring & in_mFeatureName,
                                                                                                      const GALGAS_lstring & in_mFeatureValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFeatureName, in_mFeatureValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFeatureName, inElement.mProperty_mFeatureValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_QualifiedFeatureList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_galgas_33_QualifiedFeatureList (mObject.mProperty_mFeatureName, mObject.mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_QualifiedFeatureList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureName" ":" ;
  mObject.mProperty_mFeatureName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureValue" ":" ;
  mObject.mProperty_mFeatureValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_galgas_33_QualifiedFeatureList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_QualifiedFeatureList * operand = (cCollectionElement_galgas_33_QualifiedFeatureList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList::GALGAS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_QualifiedFeatureList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_QualifiedFeatureList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_galgas_33_QualifiedFeatureList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                 const GALGAS_lstring & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_galgas_33_QualifiedFeatureList::setter_append (GALGAS_galgas_33_QualifiedFeatureList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inElement COMMA_THERE)) ;
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

void GALGAS_galgas_33_QualifiedFeatureList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_galgas_33_QualifiedFeatureList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
        outOperand0 = p->mObject.mProperty_mFeatureName ;
        outOperand1 = p->mObject.mProperty_mFeatureValue ;
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
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList GALGAS_galgas_33_QualifiedFeatureList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_QualifiedFeatureList result = GALGAS_galgas_33_QualifiedFeatureList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::plusAssign_operation (const GALGAS_galgas_33_QualifiedFeatureList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_setMFeatureNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_QualifiedFeatureList::setter_setMFeatureValueAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_QualifiedFeatureList::getter_mFeatureValueAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_QualifiedFeatureList::cEnumerator_galgas_33_QualifiedFeatureList (const GALGAS_galgas_33_QualifiedFeatureList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_galgas_33_QualifiedFeatureList_2D_element cEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@galgas3QualifiedFeatureList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_QualifiedFeatureList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 23)) ;
  nt_expression_ (outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 23)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i0_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 23)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("galgas3ExpressionSyntax.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  GALGAS_semanticExpressionAST var_ifExpression_979 ;
  nt_expression_ (var_ifExpression_979, inCompiler) ;
  GALGAS_location var_operatorLocation_1004 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-if.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  GALGAS_semanticExpressionAST var_thenExpression_1069 ;
  nt_expression_ (var_thenExpression_1069, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  GALGAS_semanticExpressionAST var_elseExpression_1117 ;
  nt_expression_ (var_elseExpression_1117, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  outArgument_outExpression = GALGAS_ifExpressionAST::constructor_new (var_operatorLocation_1004, var_ifExpression_979, var_thenExpression_1069, var_elseExpression_1117  COMMA_SOURCE_FILE ("expression-if.galgas", 29)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i1_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_if COMMA_SOURCE_FILE ("expression-if.galgas", 21)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_then COMMA_SOURCE_FILE ("expression-if.galgas", 24)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_else COMMA_SOURCE_FILE ("expression-if.galgas", 26)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_end COMMA_SOURCE_FILE ("expression-if.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_882 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryPlusExpressionAST::constructor_new (var_operatorLocation_882, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i2_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                     C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_883 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryMinusExpressionAST::constructor_new (var_operatorLocation_883, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i3_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_identifier_842 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  outArgument_outExpression = GALGAS_varInExpressionAST::constructor_new (var_identifier_842  COMMA_SOURCE_FILE ("expression-var.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i4_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-var.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_ (GALGAS_actualOutputExpressionList & outArgument_outExpressionList,
                                                                                                           C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-output-expression-list.galgas", 20)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_selector_963 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      GALGAS_semanticExpressionAST var_expression_1021 ;
      nt_expression_ (var_expression_1021, inCompiler) ;
      outArgument_outExpressionList.addAssign_operation (var_selector_963, var_expression_1021, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_i5_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 23)) ;
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  outArgument_outExpression = GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i6_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_true COMMA_SOURCE_FILE ("expression-true-false.galgas", 24)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  outArgument_outExpression = GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32))  COMMA_SOURCE_FILE ("expression-true-false.galgas", 32)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i7_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_false COMMA_SOURCE_FILE ("expression-true-false.galgas", 31)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_stringlist var_literalStringList_883 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("expression-literal-string.galgas", 19)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_literalString_935 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    var_literalStringList_883.addAssign_operation (var_literalString_935.getter_string (HERE)  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 22)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outExpression = GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)), var_literalStringList_883  COMMA_SOURCE_FILE ("expression-literal-string.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i8_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-literal-string.galgas", 21)) ;
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lchar var_literalChar_852 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalCharExpressionAST::constructor_new (var_literalChar_852  COMMA_SOURCE_FILE ("expression-literal-char.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i9_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-literal-char.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_ldouble var_literalDouble_860 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  outArgument_outExpression = GALGAS_literalDoubleExpressionAST::constructor_new (var_literalDouble_860  COMMA_SOURCE_FILE ("expression-literal-double.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i10_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-literal-double.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint var_literalInt_1671 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  outArgument_outExpression = GALGAS_literalUIntExpressionAST::constructor_new (var_literalInt_1671  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 43)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i11_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_33__32_ COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i12_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint var_literalInt_1959 = inCompiler->synthetizedAttribute_sint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
  outArgument_outExpression = GALGAS_literalSIntExpressionAST::constructor_new (var_literalInt_1959  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i12_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i12_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_33__32__5F_S COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_luint_36__34_ var_literalInt_2249 = inCompiler->synthetizedAttribute_uint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
  outArgument_outExpression = GALGAS_literalUInt_36__34_ExpressionAST::constructor_new (var_literalInt_2249  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 57)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i13_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_uint_36__34__5F_L COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lsint_36__34_ var_literalInt_2542 = inCompiler->synthetizedAttribute_sint_36__34_value () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
  outArgument_outExpression = GALGAS_literalSInt_36__34_ExpressionAST::constructor_new (var_literalInt_2542  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i14_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_sint_36__34__5F_LS COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 63)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lbigint var_literalInt_2834 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
  outArgument_outExpression = GALGAS_literalBigIntExpressionAST::constructor_new (var_literalInt_2834  COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i15_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_bigint_5F_G COMMA_SOURCE_FILE ("expression-literal-integer.galgas", 70)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1286 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 35)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 36)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1336 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1396 ;
      nt_simple_5F_expression_ (var_rightOperand_1396, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1286, var_leftOperand_1336, GALGAS_comparison::constructor_equal (SOURCE_FILE ("expression-comparison.galgas", 39)), var_rightOperand_1396  COMMA_SOURCE_FILE ("expression-comparison.galgas", 39)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1539 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 41)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 42)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1589 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1649 ;
      nt_simple_5F_expression_ (var_rightOperand_1649, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1539, var_leftOperand_1589, GALGAS_comparison::constructor_notEqual (SOURCE_FILE ("expression-comparison.galgas", 45)), var_rightOperand_1649  COMMA_SOURCE_FILE ("expression-comparison.galgas", 45)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_1795 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 47)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 48)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1845 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1905 ;
      nt_simple_5F_expression_ (var_rightOperand_1905, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_1795, var_leftOperand_1845, GALGAS_comparison::constructor_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 51)), var_rightOperand_1905  COMMA_SOURCE_FILE ("expression-comparison.galgas", 51)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2055 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 53)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 54)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2105 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2165 ;
      nt_simple_5F_expression_ (var_rightOperand_2165, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2055, var_leftOperand_2105, GALGAS_comparison::constructor_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 57)), var_rightOperand_2165  COMMA_SOURCE_FILE ("expression-comparison.galgas", 57)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_2317 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 59)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 60)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2366 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2426 ;
      nt_simple_5F_expression_ (var_rightOperand_2426, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2317, var_leftOperand_2366, GALGAS_comparison::constructor_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 63)), var_rightOperand_2426  COMMA_SOURCE_FILE ("expression-comparison.galgas", 63)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_2575 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 66)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2624 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2684 ;
      nt_simple_5F_expression_ (var_rightOperand_2684, inCompiler) ;
      outArgument_outExpression = GALGAS_comparisonExpressionAST::constructor_new (var_operatorLocation_2575, var_leftOperand_2624, GALGAS_comparison::constructor_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 69)), var_rightOperand_2684  COMMA_SOURCE_FILE ("expression-comparison.galgas", 69)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 36)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 42)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 48)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 54)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 60)) ;
      nt_simple_5F_expression_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 66)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_i16_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 36)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 42)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 48)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 54)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 60)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 66)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2488 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 63)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2538 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2585 ;
      nt_term_ (var_rightOperand_2585, inCompiler) ;
      outArgument_outExpression = GALGAS_leftShiftExpressionAST::constructor_new (var_operatorLocation_2488, var_leftOperand_2538, var_rightOperand_2585  COMMA_SOURCE_FILE ("expression-additive.galgas", 67)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2719 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 69)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2769 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2816 ;
      nt_term_ (var_rightOperand_2816, inCompiler) ;
      outArgument_outExpression = GALGAS_rightShiftExpressionAST::constructor_new (var_operatorLocation_2719, var_leftOperand_2769, var_rightOperand_2816  COMMA_SOURCE_FILE ("expression-additive.galgas", 73)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2951 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 75)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3000 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3047 ;
      nt_term_ (var_rightOperand_3047, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionAST::constructor_new (var_operatorLocation_2951, var_leftOperand_3000, var_rightOperand_3047  COMMA_SOURCE_FILE ("expression-additive.galgas", 79)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_3175 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 81)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3225 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3272 ;
      nt_term_ (var_rightOperand_3272, inCompiler) ;
      outArgument_outExpression = GALGAS_addExpressionNoOverflowAST::constructor_new (var_operatorLocation_3175, var_leftOperand_3225, var_rightOperand_3272  COMMA_SOURCE_FILE ("expression-additive.galgas", 85)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3410 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 87)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3459 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3506 ;
      nt_term_ (var_rightOperand_3506, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionAST::constructor_new (var_operatorLocation_3410, var_leftOperand_3459, var_rightOperand_3506  COMMA_SOURCE_FILE ("expression-additive.galgas", 91)) ;
    } break ;
    case 7: {
      GALGAS_location var_operatorLocation_3634 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 93)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3684 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3731 ;
      nt_term_ (var_rightOperand_3731, inCompiler) ;
      outArgument_outExpression = GALGAS_subExpressionNoOverflowAST::constructor_new (var_operatorLocation_3634, var_leftOperand_3684, var_rightOperand_3731  COMMA_SOURCE_FILE ("expression-additive.galgas", 97)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_i17_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 64)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 70)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 76)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i18_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                          C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GALGAS_location var_endOfReceiverExpression_1558 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 41)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 42)) ;
    GALGAS_dynamicTypeComparisonKind var_kind_1624 ;
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 45)) ;
      var_kind_1624 = GALGAS_dynamicTypeComparisonKind::constructor_equal (SOURCE_FILE ("expression-cast-expression.galgas", 46)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 48)) ;
      var_kind_1624 = GALGAS_dynamicTypeComparisonKind::constructor_inherited (SOURCE_FILE ("expression-cast-expression.galgas", 49)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 51)) ;
      var_kind_1624 = GALGAS_dynamicTypeComparisonKind::constructor_strictlyInherited (SOURCE_FILE ("expression-cast-expression.galgas", 52)) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_typeName_1813 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 54)) ;
    outArgument_outExpression = GALGAS_testDynamicClassInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_1558, var_kind_1624, var_typeName_1813  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 55)) ;
  } break ;
  case 3: {
    GALGAS_location var_endOfReceiverExpression_2011 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 62)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 63)) ;
    GALGAS_lstring var_typeName_2067 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 64)) ;
    outArgument_outExpression = GALGAS_castInExpressionAST::constructor_new (outArgument_outExpression, var_endOfReceiverExpression_2011, var_typeName_2067  COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 65)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i18_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_or_parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 54)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_i18_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_is COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 42)) ;
    switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 45)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 48)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3E_ COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 54)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_as COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 63)) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-cast-expression.galgas", 64)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  GALGAS_lstring var_optionComponentName_940 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  GALGAS_lstring var_optionName_1015 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  GALGAS_lstring var_getterName_1048 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (var_optionComponentName_940, var_optionName_1015, var_getterName_1048  COMMA_SOURCE_FILE ("expression-option.galgas", 26)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i19_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 21)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  GALGAS_lstring var_optionName_1398 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  GALGAS_lstring var_getterName_1431 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  outArgument_outExpression = GALGAS_optionExpressionAST::constructor_new (GALGAS_lstring::constructor_new (GALGAS_string ("galgas_builtin_options"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-option.galgas", 38))  COMMA_SOURCE_FILE ("expression-option.galgas", 38)), var_optionName_1398, var_getterName_1431  COMMA_SOURCE_FILE ("expression-option.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i20_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-option.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_option COMMA_SOURCE_FILE ("expression-option.galgas", 34)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-option.galgas", 35)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-option.galgas", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-option.galgas", 39)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  GALGAS_lstring var_lexiqueName_923 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  GALGAS_lstring var_getterName_964 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  outArgument_outExpression = GALGAS_lexiqueIntrospectionExpressionAST::constructor_new (var_lexiqueName_923, var_getterName_964  COMMA_SOURCE_FILE ("expression-lexique.galgas", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i21_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_lexique COMMA_SOURCE_FILE ("expression-lexique.galgas", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__3A_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-lexique.galgas", 23)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-lexique.galgas", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  GALGAS_lstring var_filewrapperName_1461 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GALGAS_filewrapperObjectInstanciationInExpressionAST::constructor_new (var_filewrapperName_1461  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 37)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_filePath_1682 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
      outArgument_outExpression = GALGAS_filewrapperInExpressionAST::constructor_new (var_filewrapperName_1461, var_filePath_1682  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 44)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_filewrapperTemplateName_1865 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      GALGAS_actualOutputExpressionList var_expressionList_1946 ;
      nt_output_5F_expression_5F_list_ (var_expressionList_1946, inCompiler) ;
      outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionAST::constructor_new (var_filewrapperName_1461, var_filewrapperTemplateName_1865, var_expressionList_1946  COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 51)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i22_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_filewrapper COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 34)) ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 35)) ;
  switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 41)) ;
    switch (select_galgas_33_ExpressionSyntax_7 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 49)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-filewrapper.galgas", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
  GALGAS_semanticExpressionAST var_receiverExpression_1010 ;
  nt_expression_ (var_receiverExpression_1010, inCompiler) ;
  GALGAS_lstring var_getterName_1075 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 24)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1177 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1177, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
  outArgument_outExpression = GALGAS_getterCallExpressionAST::constructor_new (var_receiverExpression_1010, var_getterName_1075, var_expressionList_1177  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 28)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
  nt_expression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 24)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i23_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 20)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 24)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i24_ (GALGAS_lstring & outArgument_outTypeName,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GALGAS_lstring::constructor_new (GALGAS_string::makeEmptyString (), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-constructor.galgas", 27))  COMMA_SOURCE_FILE ("expression-constructor.galgas", 27)) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i24_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_i24_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-constructor.galgas", 29)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1467 ;
  nt_optional_5F_type_ (var_typeName_1467, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 38)) ;
  GALGAS_lstring var_constructorName_1546 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1617 ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    var_expressionList_1617 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-constructor.galgas", 44)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 46)) ;
    nt_output_5F_expression_5F_list_ (var_expressionList_1617, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionAST::constructor_new (var_typeName_1467, var_constructorName_1546, var_expressionList_1617  COMMA_SOURCE_FILE ("expression-constructor.galgas", 50)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 46)) ;
    nt_output_5F_expression_5F_list_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i25_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-constructor.galgas", 40)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 46)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 48)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_2081 ;
  nt_optional_5F_type_ (var_typeName_2081, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 61)) ;
  outArgument_outExpression = GALGAS_defaultConstructorExpressionAST::constructor_new (var_typeName_2081  COMMA_SOURCE_FILE ("expression-constructor.galgas", 62)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i26_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-constructor.galgas", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_default COMMA_SOURCE_FILE ("expression-constructor.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_functionName_911 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  GALGAS_actualOutputExpressionList var_expressionList_1018 ;
  nt_output_5F_expression_5F_list_ (var_expressionList_1018, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  outArgument_outExpression = GALGAS_functionCallExpressionAST::constructor_new (var_functionName_911, var_expressionList_1018  COMMA_SOURCE_FILE ("expression-function-call.galgas", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i27_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->enterIndexing (C_Lexique_galgas_33_Scanner::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 20)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i28_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  GALGAS_lstring var_typeName_866 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionAST::constructor_new (var_typeName_866  COMMA_SOURCE_FILE ("expression-literal-type.galgas", 20)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i28_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i28_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__60_ COMMA_SOURCE_FILE ("expression-literal-type.galgas", 18)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__40_type COMMA_SOURCE_FILE ("expression-literal-type.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_lstring var_typeName_1887 ;
  nt_optional_5F_type_ (var_typeName_1887, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  GALGAS_collectionValueElementList var_elementList_1939 = GALGAS_collectionValueElementList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 46)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_abstractCollectionValueElement var_element_2055 ;
      nt_collection_5F_value_5F_element_ (var_element_2055, inCompiler) ;
      var_elementList_1939.addAssign_operation (var_element_2055  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 51)) ;
      switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
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
  outArgument_outExpression = GALGAS_collectionValueAST::constructor_new (var_typeName_1887, var_elementList_1939, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 59))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_parse (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i29_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_optional_5F_type_indexing (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7B_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 45)) ;
  switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_collection_5F_value_5F_element_indexing (inCompiler) ;
      switch (select_galgas_33_ExpressionSyntax_11 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2C_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 53)) ;
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
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7D_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 61)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i30_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_actualOutputExpressionList var_expressionList_2511 = GALGAS_actualOutputExpressionList::constructor_emptyList (SOURCE_FILE ("expression-collection-value.galgas", 67)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_selector_2551 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    GALGAS_semanticExpressionAST var_expression_2609 ;
    nt_expression_ (var_expression_2609, inCompiler) ;
    var_expressionList_2511.addAssign_operation (var_selector_2551, var_expression_2609, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 71)) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outValueElement = GALGAS_expressionListCollectionValue::constructor_new (var_expressionList_2511, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 74)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i30_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_parse (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i30_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__21_ COMMA_SOURCE_FILE ("expression-collection-value.galgas", 69)) ;
    nt_expression_indexing (inCompiler) ;
    switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
    case 2: {
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_ (GALGAS_abstractCollectionValueElement & outArgument_outValueElement,
                                                                                                              C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outValueElement.drop () ; // Release 'out' argument
  GALGAS_semanticExpressionAST var_expression_3052 ;
  nt_expression_ (var_expression_3052, inCompiler) ;
  outArgument_outValueElement = GALGAS_expressionCollectionValue::constructor_new (var_expression_3052, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81))  COMMA_SOURCE_FILE ("expression-collection-value.galgas", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_collection_5F_value_5F_element_i31_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i32_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                       C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  outArgument_outExpression = GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-self.galgas", 19))  COMMA_SOURCE_FILE ("expression-self.galgas", 19)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i32_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_i32_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_self COMMA_SOURCE_FILE ("expression-self.galgas", 18)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i33_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      GALGAS_lstring var_structFieldName_999 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
      outArgument_outExpression = GALGAS_structPropertyAccessExpressionAST::constructor_new (var_structFieldName_999.getter_location (HERE), outArgument_outExpression, var_structFieldName_999  COMMA_SOURCE_FILE ("expression-property-access.galgas", 25)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i33_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i33_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E_ COMMA_SOURCE_FILE ("expression-property-access.galgas", 23)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_identifier COMMA_SOURCE_FILE ("expression-property-access.galgas", 24)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_878 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_notExpressionAST::constructor_new (var_operatorLocation_878, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-not.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i34_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i35_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_880 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_tildeExpressionAST::constructor_new (var_operatorLocation_880, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-tilde.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i35_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i35_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i36_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                      C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_location var_operatorLocation_893 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GALGAS_unaryWrappingMinusExpressionAST::constructor_new (var_operatorLocation_893, outArgument_outExpression  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i36_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_i36_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 20)) ;
  nt_factor_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i37_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2178 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2227 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2284 ;
      nt_expression_5F_and_ (var_rightOperand_2284, inCompiler) ;
      outArgument_outExpression = GALGAS_orExpressionAST::constructor_new (var_operatorLocation_2178, var_leftOperand_2227, var_rightOperand_2284  COMMA_SOURCE_FILE ("expression-or.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2411 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2461 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2518 ;
      nt_expression_5F_and_ (var_rightOperand_2518, inCompiler) ;
      outArgument_outExpression = GALGAS_orShortExpressionAST::constructor_new (var_operatorLocation_2411, var_leftOperand_2461, var_rightOperand_2518  COMMA_SOURCE_FILE ("expression-or.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2650 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2699 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2756 ;
      nt_expression_5F_and_ (var_rightOperand_2756, inCompiler) ;
      outArgument_outExpression = GALGAS_xorExpressionAST::constructor_new (var_operatorLocation_2650, var_leftOperand_2699, var_rightOperand_2756  COMMA_SOURCE_FILE ("expression-or.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2884 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2935 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2992 ;
      nt_expression_5F_and_ (var_rightOperand_2992, inCompiler) ;
      outArgument_outExpression = GALGAS_closedSliceExpressionAST::constructor_new (var_operatorLocation_2884, var_leftOperand_2935, var_rightOperand_2992  COMMA_SOURCE_FILE ("expression-or.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3128 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3179 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3236 ;
      nt_expression_5F_and_ (var_rightOperand_3236, inCompiler) ;
      outArgument_outExpression = GALGAS_openedSliceExpressionAST::constructor_new (var_operatorLocation_3128, var_leftOperand_3179, var_rightOperand_3236  COMMA_SOURCE_FILE ("expression-or.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i37_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_and_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_i37_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 56)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 62)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 68)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i38_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_1292 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 31)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1341 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1422 ;
      nt_relation_5F_factor_ (var_rightOperand_1422, inCompiler) ;
      outArgument_outExpression = GALGAS_andExpressionAST::constructor_new (var_operatorLocation_1292, var_leftOperand_1341, var_rightOperand_1422  COMMA_SOURCE_FILE ("expression-and.galgas", 35)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_1550 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      GALGAS_semanticExpressionAST var_leftOperand_1600 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_1681 ;
      nt_relation_5F_factor_ (var_rightOperand_1681, inCompiler) ;
      outArgument_outExpression = GALGAS_andShortExpressionAST::constructor_new (var_operatorLocation_1550, var_leftOperand_1600, var_rightOperand_1681  COMMA_SOURCE_FILE ("expression-and.galgas", 41)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i38_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_i38_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 32)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 38)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i39_ (GALGAS_semanticExpressionAST & outArgument_outExpression,
                                                                                    C_Lexique_galgas_33_Scanner * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      GALGAS_location var_operatorLocation_2205 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 55)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2254 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2326 ;
      nt_factor_ (var_rightOperand_2326, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionAST::constructor_new (var_operatorLocation_2205, var_leftOperand_2254, var_rightOperand_2326  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 59)) ;
    } break ;
    case 3: {
      GALGAS_location var_operatorLocation_2465 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 61)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2515 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2587 ;
      nt_factor_ (var_rightOperand_2587, inCompiler) ;
      outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (var_operatorLocation_2465, var_leftOperand_2515, var_rightOperand_2587  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 65)) ;
    } break ;
    case 4: {
      GALGAS_location var_operatorLocation_2736 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      GALGAS_semanticExpressionAST var_leftOperand_2785 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_2834 ;
      nt_factor_ (var_rightOperand_2834, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionAST::constructor_new (var_operatorLocation_2736, var_leftOperand_2785, var_rightOperand_2834  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 71)) ;
    } break ;
    case 5: {
      GALGAS_location var_operatorLocation_2967 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 73)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3017 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3066 ;
      nt_factor_ (var_rightOperand_3066, inCompiler) ;
      outArgument_outExpression = GALGAS_divisionExpressionNoOverflowAST::constructor_new (var_operatorLocation_2967, var_leftOperand_3017, var_rightOperand_3066  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 77)) ;
    } break ;
    case 6: {
      GALGAS_location var_operatorLocation_3209 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 79)) ;
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      GALGAS_semanticExpressionAST var_leftOperand_3260 = outArgument_outExpression ;
      GALGAS_semanticExpressionAST var_rightOperand_3309 ;
      nt_factor_ (var_rightOperand_3309, inCompiler) ;
      outArgument_outExpression = GALGAS_moduloExpressionAST::constructor_new (var_operatorLocation_3209, var_leftOperand_3260, var_rightOperand_3309  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 83)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i39_parse (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
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

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_i39_indexing (C_Lexique_galgas_33_Scanner * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_16 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 56)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 62)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 68)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_galgas_33_Scanner::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

