#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-1.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration> gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration ;

//---------------------------------------------------------------------------------------------------------------------*

void enterExtensionMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                  extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) {
  gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeExtensionMethod_templateInstructionForGeneration_templateCodeGeneration (void) {
  gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_templateInstructionForGeneration_templateCodeGeneration (NULL,
                                                                                    freeExtensionMethod_templateInstructionForGeneration_templateCodeGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

void callExtensionMethod_templateCodeGeneration (const cPtr_templateInstructionForGeneration * inObject,
                                                 GALGAS_string & io_ioGeneratedCode,
                                                 GALGAS_stringset & io_ioInclusionSet,
                                                 GALGAS_uint & io_ioTemporaryVariableIndex,
                                                 GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GALGAS_bool & io_ioUseColumnMarker,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration f = NULL ;
    if (classIndex < gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.count ()) {
      f = gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.count ()) {
          f = gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, io_ioUseColumnMarker, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_semanticDeclarationAST::objectCompare (const GALGAS_semanticDeclarationAST & inOperand) const {
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

GALGAS_semanticDeclarationAST::GALGAS_semanticDeclarationAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationAST::GALGAS_semanticDeclarationAST (const cPtr_semanticDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_semanticDeclarationAST::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationAST * p = (const cPtr_semanticDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationAST) ;
    result = p->mAttribute_mIsPredefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_semanticDeclarationAST::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @semanticDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticDeclarationAST::cPtr_semanticDeclarationAST (const GALGAS_bool & in_mIsPredefined
                                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mIsPredefined (in_mIsPredefined) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @semanticDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationAST ("semanticDeclarationAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationAST result ;
  const GALGAS_semanticDeclarationAST * p = (const GALGAS_semanticDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_lexicalExpressionAST::objectCompare (const GALGAS_lexicalExpressionAST & inOperand) const {
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

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @lexicalExpressionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalExpressionAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExpressionAST result ;
  const GALGAS_lexicalExpressionAST * p = (const GALGAS_lexicalExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_lexicalInstructionAST::objectCompare (const GALGAS_lexicalInstructionAST & inOperand) const {
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

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (const cPtr_lexicalInstructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalInstructionAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalInstructionAST::cPtr_lexicalInstructionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalInstructionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionAST ("lexicalInstructionAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionAST result ;
  const GALGAS_lexicalInstructionAST * p = (const GALGAS_lexicalInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalInstructionListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalInstructionListAST : public cCollectionElement {
  public : GALGAS_lexicalInstructionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
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

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalInstructionListAST (mObject.mAttribute_mInstruction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mAttribute_mInstruction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalInstructionListAST * operand = (cCollectionElement_lexicalInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_listWithValue (const GALGAS_lexicalInstructionAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::addAssign_operation (const GALGAS_lexicalInstructionAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::setter_insertAtIndex (const GALGAS_lexicalInstructionAST inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::setter_removeAtIndex (GALGAS_lexicalInstructionAST & outOperand0,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
      outOperand0 = p->mObject.mAttribute_mInstruction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::setter_popFirst (GALGAS_lexicalInstructionAST & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::setter_popLast (GALGAS_lexicalInstructionAST & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::method_first (GALGAS_lexicalInstructionAST & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::method_last (GALGAS_lexicalInstructionAST & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    outOperand0 = p->mObject.mAttribute_mInstruction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::add_operation (const GALGAS_lexicalInstructionListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalInstructionListAST::plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalInstructionListAST::cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST_2D_element cEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionAST cEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mAttribute_mInstruction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalInstructionListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  const GALGAS_lexicalInstructionListAST * p = (const GALGAS_lexicalInstructionListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalInstructionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalInstructionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Class for element of '@metamodelTemplateDelimitorListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_metamodelTemplateDelimitorListAST : public cCollectionElement {
  public : GALGAS_metamodelTemplateDelimitorListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                 const GALGAS_lstringlist & in_mOptionList,
                                                                 const GALGAS_lstring & in_mEndString
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

cCollectionElement_metamodelTemplateDelimitorListAST::cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                                                            const GALGAS_lstringlist & in_mOptionList,
                                                                                                            const GALGAS_lstring & in_mEndString
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mOptionList, in_mEndString) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_metamodelTemplateDelimitorListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_metamodelTemplateDelimitorListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_metamodelTemplateDelimitorListAST (mObject.mAttribute_mStartString, mObject.mAttribute_mOptionList, mObject.mAttribute_mEndString COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_metamodelTemplateDelimitorListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mAttribute_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mAttribute_mOptionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mAttribute_mEndString.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_metamodelTemplateDelimitorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_metamodelTemplateDelimitorListAST * operand = (cCollectionElement_metamodelTemplateDelimitorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mStartString,
                                                                          const GALGAS_lstringlist & in_mOptionList,
                                                                          const GALGAS_lstring & in_mEndString
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (in_mStartString,
                                                                       in_mOptionList,
                                                                       in_mEndString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstringlist & inOperand1,
                                                                    const GALGAS_lstring & inOperand2
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_lstringlist inOperand1,
                                                                     const GALGAS_lstring inOperand2,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_lstringlist & outOperand1,
                                                                     GALGAS_lstring & outOperand2,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
      outOperand0 = p->mObject.mAttribute_mStartString ;
      outOperand1 = p->mObject.mAttribute_mOptionList ;
      outOperand2 = p->mObject.mAttribute_mEndString ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstringlist & outOperand1,
                                                                GALGAS_lstring & outOperand2,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstringlist & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstringlist & outOperand1,
                                                             GALGAS_lstring & outOperand2,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstringlist & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    outOperand0 = p->mObject.mAttribute_mStartString ;
    outOperand1 = p->mObject.mAttribute_mOptionList ;
    outOperand2 = p->mObject.mAttribute_mEndString ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::add_operation (const GALGAS_metamodelTemplateDelimitorListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_metamodelTemplateDelimitorListAST::plusAssign_operation (const GALGAS_metamodelTemplateDelimitorListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_metamodelTemplateDelimitorListAST::cEnumerator_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST_2D_element cEnumerator_metamodelTemplateDelimitorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mStartString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_metamodelTemplateDelimitorListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mOptionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mAttribute_mEndString ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @metamodelTemplateDelimitorListAST type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ("metamodelTemplateDelimitorListAST",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_metamodelTemplateDelimitorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_metamodelTemplateDelimitorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_metamodelTemplateDelimitorListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  const GALGAS_metamodelTemplateDelimitorListAST * p = (const GALGAS_metamodelTemplateDelimitorListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_metamodelTemplateDelimitorListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("metamodelTemplateDelimitorListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@templateReplacementListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_templateReplacementListAST : public cCollectionElement {
  public : GALGAS_templateReplacementListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                          const GALGAS_lstring & in_mReplacementString,
                                                          const GALGAS_lstring & in_mReplacementFunction
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

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                                                              const GALGAS_lstring & in_mReplacementString,
                                                                                              const GALGAS_lstring & in_mReplacementFunction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchString, in_mReplacementString, in_mReplacementFunction) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_templateReplacementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_templateReplacementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateReplacementListAST (mObject.mAttribute_mMatchString, mObject.mAttribute_mReplacementString, mObject.mAttribute_mReplacementFunction COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_templateReplacementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchString" ":" ;
  mObject.mAttribute_mMatchString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementString" ":" ;
  mObject.mAttribute_mReplacementString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunction" ":" ;
  mObject.mAttribute_mReplacementFunction.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_templateReplacementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateReplacementListAST * operand = (cCollectionElement_templateReplacementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateReplacementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_templateReplacementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mMatchString,
                                                                   const GALGAS_lstring & in_mReplacementString,
                                                                   const GALGAS_lstring & in_mReplacementFunction
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateReplacementListAST (in_mMatchString,
                                                                in_mReplacementString,
                                                                in_mReplacementFunction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_lstring & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_lstring inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
      outOperand0 = p->mObject.mAttribute_mMatchString ;
      outOperand1 = p->mObject.mAttribute_mReplacementString ;
      outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    outOperand0 = p->mObject.mAttribute_mMatchString ;
    outOperand1 = p->mObject.mAttribute_mReplacementString ;
    outOperand2 = p->mObject.mAttribute_mReplacementFunction ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::add_operation (const GALGAS_templateReplacementListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateReplacementListAST::plusAssign_operation (const GALGAS_templateReplacementListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_templateReplacementListAST::cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST_2D_element cEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mMatchString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mReplacementString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mAttribute_mReplacementFunction ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @templateReplacementListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReplacementListAST ("templateReplacementListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateReplacementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateReplacementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReplacementListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  const GALGAS_templateReplacementListAST * p = (const GALGAS_templateReplacementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateReplacementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateReplacementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractLexicalRuleAST::objectCompare (const GALGAS_abstractLexicalRuleAST & inOperand) const {
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

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRuleAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @abstractLexicalRuleAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractLexicalRuleAST::cPtr_abstractLexicalRuleAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @abstractLexicalRuleAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRuleAST ("abstractLexicalRuleAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractLexicalRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractLexicalRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRuleAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST GALGAS_abstractLexicalRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRuleAST result ;
  const GALGAS_abstractLexicalRuleAST * p = (const GALGAS_abstractLexicalRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLexicalRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Class for element of '@lexicalRuleListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalRuleListAST : public cCollectionElement {
  public : GALGAS_lexicalRuleListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
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

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRule) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalRuleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalRuleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRuleListAST (mObject.mAttribute_mLexicalRule COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalRuleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRule" ":" ;
  mObject.mAttribute_mLexicalRule.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRuleListAST * operand = (cCollectionElement_lexicalRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_listWithValue (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRuleListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (in_mLexicalRule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::addAssign_operation (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::setter_insertAtIndex (const GALGAS_abstractLexicalRuleAST inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::setter_removeAtIndex (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalRule ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::setter_popFirst (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::setter_popLast (GALGAS_abstractLexicalRuleAST & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::method_first (GALGAS_abstractLexicalRuleAST & outOperand0,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::method_last (GALGAS_abstractLexicalRuleAST & outOperand0,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRule ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::add_operation (const GALGAS_lexicalRuleListAST & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRuleListAST::plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRuleListAST::cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST_2D_element cEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRuleAST cEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mAttribute_mLexicalRule ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalRuleListAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST ("lexicalRuleListAST",
                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  const GALGAS_lexicalRuleListAST * p = (const GALGAS_lexicalRuleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalExplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalRuleExpression.objectCompare (p->mAttribute_mLexicalRuleExpression) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInstructionList.objectCompare (p->mAttribute_mInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalExplicitRuleAST::objectCompare (const GALGAS_lexicalExplicitRuleAST & inOperand) const {
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

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExplicitRuleAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLexicalRuleExpression,
                                                                              const GALGAS_lexicalInstructionListAST & inAttribute_mInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  if (inAttribute_mLexicalRuleExpression.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalExplicitRuleAST (inAttribute_mLexicalRuleExpression, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalExplicitRuleAST::getter_mLexicalRuleExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mAttribute_mLexicalRuleExpression ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cPtr_lexicalExplicitRuleAST::getter_mLexicalRuleExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRuleExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalExplicitRuleAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mAttribute_mInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cPtr_lexicalExplicitRuleAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalExplicitRuleAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mAttribute_mLexicalRuleExpression (in_mLexicalRuleExpression),
mAttribute_mInstructionList (in_mInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalExplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

void cPtr_lexicalExplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalExplicitRuleAST:" ;
  mAttribute_mLexicalRuleExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalExplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalExplicitRuleAST (mAttribute_mLexicalRuleExpression, mAttribute_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalExplicitRuleAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ("lexicalExplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitRuleAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  const GALGAS_lexicalExplicitRuleAST * p = (const GALGAS_lexicalExplicitRuleAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExplicitRuleAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitRuleAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Class for element of '@lexicalMessageDeclarationListAST' list                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalMessageDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalMessageDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                const GALGAS_lstring & in_mMessageValue
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

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                                                          const GALGAS_lstring & in_mMessageValue
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMessageName, in_mMessageValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalMessageDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalMessageDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalMessageDeclarationListAST (mObject.mAttribute_mMessageName, mObject.mAttribute_mMessageValue COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalMessageDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageName" ":" ;
  mObject.mAttribute_mMessageName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageValue" ":" ;
  mObject.mAttribute_mMessageValue.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalMessageDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalMessageDeclarationListAST * operand = (cCollectionElement_lexicalMessageDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mMessageName,
                                                                         const GALGAS_lstring & in_mMessageValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (in_mMessageName,
                                                                      in_mMessageValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstring inOperand1,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mMessageName ;
      outOperand1 = p->mObject.mAttribute_mMessageValue ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mMessageName ;
    outOperand1 = p->mObject.mAttribute_mMessageValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::add_operation (const GALGAS_lexicalMessageDeclarationListAST & inOperand,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalMessageDeclarationListAST::plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalMessageDeclarationListAST::cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST_2D_element cEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mAttribute_mMessageName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mAttribute_mMessageValue ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @lexicalMessageDeclarationListAST type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ("lexicalMessageDeclarationListAST",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  const GALGAS_lexicalMessageDeclarationListAST * p = (const GALGAS_lexicalMessageDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalMessageDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalAttributeListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_lexicalAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mName
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

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                                                        const GALGAS_lstring & in_mName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalAttributeListAST (mObject.mAttribute_mTypeName, mObject.mAttribute_mName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mAttribute_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalAttributeListAST * operand = (cCollectionElement_lexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mTypeName,
                                                                const GALGAS_lstring & in_mName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalAttributeListAST (in_mTypeName,
                                                             in_mName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mTypeName ;
      outOperand1 = p->mObject.mAttribute_mName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mTypeName ;
    outOperand1 = p->mObject.mAttribute_mName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::add_operation (const GALGAS_lexicalAttributeListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeListAST::plusAssign_operation (const GALGAS_lexicalAttributeListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalAttributeListAST::cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST_2D_element cEnumerator_lexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mAttribute_mName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalAttributeListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeListAST ("lexicalAttributeListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  const GALGAS_lexicalAttributeListAST * p = (const GALGAS_lexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@lexicalStyleListAST' list                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalStyleListAST : public cCollectionElement {
  public : GALGAS_lexicalStyleListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                   const GALGAS_lstring & in_mComment
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

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                                                const GALGAS_lstring & in_mComment
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalStyleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalStyleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalStyleListAST (mObject.mAttribute_mName, mObject.mAttribute_mComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalStyleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mAttribute_mComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalStyleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalStyleListAST * operand = (cCollectionElement_lexicalStyleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalStyleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalStyleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_lstring & in_mName,
                                                            const GALGAS_lstring & in_mComment
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalStyleListAST (in_mName,
                                                         in_mComment COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_uint inInsertionIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       const GALGAS_uint inRemoveIndex,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::method_first (GALGAS_lstring & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::method_last (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::add_operation (const GALGAS_lexicalStyleListAST & inOperand,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalStyleListAST::plusAssign_operation (const GALGAS_lexicalStyleListAST inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalStyleListAST::cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST_2D_element cEnumerator_lexicalStyleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mAttribute_mComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalStyleListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStyleListAST ("lexicalStyleListAST",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalStyleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalStyleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStyleListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  const GALGAS_lexicalStyleListAST * p = (const GALGAS_lexicalStyleListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStyleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStyleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@terminalDeclarationListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_terminalDeclarationListAST : public cCollectionElement {
  public : GALGAS_terminalDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                          const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                          const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                          const GALGAS_lstring & in_mStyle,
                                                          const GALGAS_lstringlist & in_mOptionList
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

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                              const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                              const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                              const GALGAS_lstring & in_mStyle,
                                                                                              const GALGAS_lstringlist & in_mOptionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mStyle, in_mOptionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_terminalDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_terminalDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalDeclarationListAST (mObject.mAttribute_mName, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mStyle, mObject.mAttribute_mOptionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_terminalDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
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
  ioString << "mStyle" ":" ;
  mObject.mAttribute_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mAttribute_mOptionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_terminalDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalDeclarationListAST * operand = (cCollectionElement_terminalDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3,
                                                                                                const GALGAS_lstringlist & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mName,
                                                                   const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                   const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                   const GALGAS_lstring & in_mStyle,
                                                                   const GALGAS_lstringlist & in_mOptionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_terminalDeclarationListAST (in_mName,
                                                                in_mSentAttributeList,
                                                                in_mSyntaxErrorMessage,
                                                                in_mStyle,
                                                                in_mOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                             const GALGAS_lstring & inOperand2,
                                                             const GALGAS_lstring & inOperand3,
                                                             const GALGAS_lstringlist & inOperand4
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_sentLexicalAttributeListAST inOperand1,
                                                              const GALGAS_lstring inOperand2,
                                                              const GALGAS_lstring inOperand3,
                                                              const GALGAS_lstringlist inOperand4,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_lstring & outOperand3,
                                                              GALGAS_lstringlist & outOperand4,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mStyle ;
      outOperand4 = p->mObject.mAttribute_mOptionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_lstring & outOperand3,
                                                         GALGAS_lstringlist & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_lstring & outOperand3,
                                                        GALGAS_lstringlist & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                      GALGAS_lstring & outOperand2,
                                                      GALGAS_lstring & outOperand3,
                                                      GALGAS_lstringlist & outOperand4,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_sentLexicalAttributeListAST & outOperand1,
                                                     GALGAS_lstring & outOperand2,
                                                     GALGAS_lstring & outOperand3,
                                                     GALGAS_lstringlist & outOperand4,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mStyle ;
    outOperand4 = p->mObject.mAttribute_mOptionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::add_operation (const GALGAS_terminalDeclarationListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalDeclarationListAST::plusAssign_operation (const GALGAS_terminalDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalDeclarationListAST::cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST_2D_element cEnumerator_terminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST cEnumerator_terminalDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_terminalDeclarationListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mAttribute_mOptionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @terminalDeclarationListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalDeclarationListAST ("terminalDeclarationListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  const GALGAS_terminalDeclarationListAST * p = (const GALGAS_terminalDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_terminalDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Class for element of '@sentLexicalAttributeListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_sentLexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_sentLexicalAttributeListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                           const GALGAS_lstring & in_mAttributeName
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

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mAttributeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mAttributeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_sentLexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_sentLexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sentLexicalAttributeListAST (mObject.mAttribute_mFormalSelector, mObject.mAttribute_mAttributeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_sentLexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mAttribute_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_sentLexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sentLexicalAttributeListAST * operand = (cCollectionElement_sentLexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sentLexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mFormalSelector,
                                                                    const GALGAS_lstring & in_mAttributeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (in_mFormalSelector,
                                                                 in_mAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
      outOperand0 = p->mObject.mAttribute_mFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mAttributeName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    outOperand0 = p->mObject.mAttribute_mFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mAttributeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::add_operation (const GALGAS_sentLexicalAttributeListAST & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_sentLexicalAttributeListAST::plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mAttribute_mFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mAttribute_mAttributeName ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_sentLexicalAttributeListAST::cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST_2D_element cEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mAttribute_mFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @sentLexicalAttributeListAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ("sentLexicalAttributeListAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  const GALGAS_sentLexicalAttributeListAST * p = (const GALGAS_sentLexicalAttributeListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sentLexicalAttributeListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sentLexicalAttributeListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalListEntryListAST' list                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalListEntryListAST : public cCollectionElement {
  public : GALGAS_lexicalListEntryListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                       const GALGAS_lstring & in_mTerminalSpelling,
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

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                                                        const GALGAS_lstring & in_mTerminalSpelling,
                                                                                        const GALGAS_lstringlist & in_mFeatureList
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntrySpelling, in_mTerminalSpelling, in_mFeatureList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalListEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalListEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListEntryListAST (mObject.mAttribute_mEntrySpelling, mObject.mAttribute_mTerminalSpelling, mObject.mAttribute_mFeatureList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalListEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntrySpelling" ":" ;
  mObject.mAttribute_mEntrySpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalSpelling" ":" ;
  mObject.mAttribute_mTerminalSpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFeatureList" ":" ;
  mObject.mAttribute_mFeatureList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalListEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListEntryListAST * operand = (cCollectionElement_lexicalListEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mEntrySpelling,
                                                                const GALGAS_lstring & in_mTerminalSpelling,
                                                                const GALGAS_lstringlist & in_mFeatureList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListEntryListAST (in_mEntrySpelling,
                                                             in_mTerminalSpelling,
                                                             in_mFeatureList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1,
                                                          const GALGAS_lstringlist & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_lstring inOperand1,
                                                           const GALGAS_lstringlist inOperand2,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstringlist & outOperand2,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
      outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
      outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
      outOperand2 = p->mObject.mAttribute_mFeatureList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_lstringlist & outOperand2,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_lstringlist & outOperand2,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstringlist & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_lstring & outOperand1,
                                                  GALGAS_lstringlist & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    outOperand0 = p->mObject.mAttribute_mEntrySpelling ;
    outOperand1 = p->mObject.mAttribute_mTerminalSpelling ;
    outOperand2 = p->mObject.mAttribute_mFeatureList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::add_operation (const GALGAS_lexicalListEntryListAST & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListEntryListAST::plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalListEntryListAST::cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST_2D_element cEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mEntrySpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mTerminalSpelling ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cEnumerator_lexicalListEntryListAST::current_mFeatureList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mAttribute_mFeatureList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalListEntryListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST ("lexicalListEntryListAST",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  const GALGAS_lexicalListEntryListAST * p = (const GALGAS_lexicalListEntryListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListEntryListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListEntryListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Class for element of '@lexicalListDeclarationListAST' list                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalListDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalListDeclarationListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                             const GALGAS_lstring & in_mStyle,
                                                             const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                             const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                             const GALGAS_lexicalListEntryListAST & in_mEntryList
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

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                    const GALGAS_lstring & in_mStyle,
                                                                                                    const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                                    const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                    const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mStyle, in_mSyntaxErrorMessage, in_mSentAttributeList, in_mEntryList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalListDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalListDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListDeclarationListAST (mObject.mAttribute_mName, mObject.mAttribute_mStyle, mObject.mAttribute_mSyntaxErrorMessage, mObject.mAttribute_mSentAttributeList, mObject.mAttribute_mEntryList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalListDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mAttribute_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mAttribute_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mAttribute_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntryList" ":" ;
  mObject.mAttribute_mEntryList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalListDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListDeclarationListAST * operand = (cCollectionElement_lexicalListDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                      const GALGAS_lexicalListEntryListAST & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mName,
                                                                      const GALGAS_lstring & in_mStyle,
                                                                      const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                      const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                      const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (in_mName,
                                                                   in_mStyle,
                                                                   in_mSyntaxErrorMessage,
                                                                   in_mSentAttributeList,
                                                                   in_mEntryList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_lstring & inOperand1,
                                                                const GALGAS_lstring & inOperand2,
                                                                const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                const GALGAS_lexicalListEntryListAST & inOperand4
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_lstring inOperand1,
                                                                 const GALGAS_lstring inOperand2,
                                                                 const GALGAS_sentLexicalAttributeListAST inOperand3,
                                                                 const GALGAS_lexicalListEntryListAST inOperand4,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                                 GALGAS_lexicalListEntryListAST & outOperand4,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
      outOperand0 = p->mObject.mAttribute_mName ;
      outOperand1 = p->mObject.mAttribute_mStyle ;
      outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
      outOperand4 = p->mObject.mAttribute_mEntryList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_lstring & outOperand2,
                                                            GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                            GALGAS_lexicalListEntryListAST & outOperand4,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_lstring & outOperand2,
                                                           GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                           GALGAS_lexicalListEntryListAST & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_lstring & outOperand2,
                                                         GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                         GALGAS_lexicalListEntryListAST & outOperand4,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_lstring & outOperand2,
                                                        GALGAS_sentLexicalAttributeListAST & outOperand3,
                                                        GALGAS_lexicalListEntryListAST & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    outOperand0 = p->mObject.mAttribute_mName ;
    outOperand1 = p->mObject.mAttribute_mStyle ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand4 = p->mObject.mAttribute_mEntryList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::add_operation (const GALGAS_lexicalListDeclarationListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalListDeclarationListAST::plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalListDeclarationListAST::cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST_2D_element cEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mStyle ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mSyntaxErrorMessage ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sentLexicalAttributeListAST cEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mSentAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListEntryListAST cEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mAttribute_mEntryList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalListDeclarationListAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ("lexicalListDeclarationListAST",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  const GALGAS_lexicalListDeclarationListAST * p = (const GALGAS_lexicalListDeclarationListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalListDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalListDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalOrExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLeftOperand.objectCompare (p->mAttribute_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRightOperand.objectCompare (p->mAttribute_mRightOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalOrExpressionAST::objectCompare (const GALGAS_lexicalOrExpressionAST & inOperand) const {
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

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (void) :
GALGAS_lexicalExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalOrExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLeftOperand,
                                                                              const GALGAS_lexicalExpressionAST & inAttribute_mRightOperand
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalOrExpressionAST (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mAttribute_mLeftOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cPtr_lexicalOrExpressionAST::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLeftOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mAttribute_mRightOperand ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cPtr_lexicalOrExpressionAST::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRightOperand ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @lexicalOrExpressionAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                                          const GALGAS_lexicalExpressionAST & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mAttribute_mLeftOperand (in_mLeftOperand),
mAttribute_mRightOperand (in_mRightOperand) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

void cPtr_lexicalOrExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalOrExpressionAST:" ;
  mAttribute_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalOrExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalOrExpressionAST (mAttribute_mLeftOperand, mAttribute_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @lexicalOrExpressionAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalOrExpressionAST ("lexicalOrExpressionAST",
                                               & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalOrExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalOrExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  const GALGAS_lexicalOrExpressionAST * p = (const GALGAS_lexicalOrExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalOrExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalOrExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Class for element of '@lexicalSendSearchListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSendSearchListAST : public cCollectionElement {
  public : GALGAS_lexicalSendSearchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                        const GALGAS_lstring & in_mSearchListName
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

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                          const GALGAS_lstring & in_mSearchListName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mSearchListName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSendSearchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSendSearchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSendSearchListAST (mObject.mAttribute_mAttributeName, mObject.mAttribute_mSearchListName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSendSearchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mAttribute_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSearchListName" ":" ;
  mObject.mAttribute_mSearchListName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSendSearchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSendSearchListAST * operand = (cCollectionElement_lexicalSendSearchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSendSearchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_lstring & in_mAttributeName,
                                                                 const GALGAS_lstring & in_mSearchListName
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (in_mAttributeName,
                                                              in_mSearchListName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                            const GALGAS_lstring inOperand1,
                                                            const GALGAS_uint inInsertionIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            const GALGAS_uint inRemoveIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
      outOperand0 = p->mObject.mAttribute_mAttributeName ;
      outOperand1 = p->mObject.mAttribute_mSearchListName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::method_first (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::method_last (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    outOperand0 = p->mObject.mAttribute_mAttributeName ;
    outOperand1 = p->mObject.mAttribute_mSearchListName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::add_operation (const GALGAS_lexicalSendSearchListAST & inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSendSearchListAST::plusAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSendSearchListAST::cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST_2D_element cEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mAttribute_mSearchListName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalSendSearchListAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSendSearchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSendSearchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendSearchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  const GALGAS_lexicalSendSearchListAST * p = (const GALGAS_lexicalSendSearchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendSearchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendSearchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_lexicalSendDefaultActionAST::objectCompare (const GALGAS_lexicalSendDefaultActionAST & inOperand) const {
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

GALGAS_lexicalSendDefaultActionAST::GALGAS_lexicalSendDefaultActionAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendDefaultActionAST::GALGAS_lexicalSendDefaultActionAST (const cPtr_lexicalSendDefaultActionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendDefaultActionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalSendDefaultActionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalSendDefaultActionAST::cPtr_lexicalSendDefaultActionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSendDefaultActionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ("lexicalSendDefaultActionAST",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSendDefaultActionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSendDefaultActionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendDefaultActionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendDefaultActionAST GALGAS_lexicalSendDefaultActionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendDefaultActionAST result ;
  const GALGAS_lexicalSendDefaultActionAST * p = (const GALGAS_lexicalSendDefaultActionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSendDefaultActionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSendDefaultActionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalStructuredSendInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStructuredSendInstructionAST * p = (const cPtr_lexicalStructuredSendInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalSendSearchList.objectCompare (p->mAttribute_mLexicalSendSearchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalSendDefaultAction.objectCompare (p->mAttribute_mLexicalSendDefaultAction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalStructuredSendInstructionAST::objectCompare (const GALGAS_lexicalStructuredSendInstructionAST & inOperand) const {
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

GALGAS_lexicalStructuredSendInstructionAST::GALGAS_lexicalStructuredSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStructuredSendInstructionAST::GALGAS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStructuredSendInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStructuredSendInstructionAST GALGAS_lexicalStructuredSendInstructionAST::constructor_new (const GALGAS_lexicalSendSearchListAST & inAttribute_mLexicalSendSearchList,
                                                                                                        const GALGAS_lexicalSendDefaultActionAST & inAttribute_mLexicalSendDefaultAction
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStructuredSendInstructionAST result ;
  if (inAttribute_mLexicalSendSearchList.isValid () && inAttribute_mLexicalSendDefaultAction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStructuredSendInstructionAST (inAttribute_mLexicalSendSearchList, inAttribute_mLexicalSendDefaultAction COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST GALGAS_lexicalStructuredSendInstructionAST::getter_mLexicalSendSearchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (const cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    result = p->mAttribute_mLexicalSendSearchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendSearchListAST cPtr_lexicalStructuredSendInstructionAST::getter_mLexicalSendSearchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalSendSearchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendDefaultActionAST GALGAS_lexicalStructuredSendInstructionAST::getter_mLexicalSendDefaultAction (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendDefaultActionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (const cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    result = p->mAttribute_mLexicalSendDefaultAction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSendDefaultActionAST cPtr_lexicalStructuredSendInstructionAST::getter_mLexicalSendDefaultAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalSendDefaultAction ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @lexicalStructuredSendInstructionAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                    const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mLexicalSendSearchList (in_mLexicalSendSearchList),
mAttribute_mLexicalSendDefaultAction (in_mLexicalSendDefaultAction) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalStructuredSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

void cPtr_lexicalStructuredSendInstructionAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@lexicalStructuredSendInstructionAST:" ;
  mAttribute_mLexicalSendSearchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalSendDefaultAction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalStructuredSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStructuredSendInstructionAST (mAttribute_mLexicalSendSearchList, mAttribute_mLexicalSendDefaultAction COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @lexicalStructuredSendInstructionAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ("lexicalStructuredSendInstructionAST",
                                                            & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalStructuredSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalStructuredSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStructuredSendInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStructuredSendInstructionAST GALGAS_lexicalStructuredSendInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStructuredSendInstructionAST result ;
  const GALGAS_lexicalStructuredSendInstructionAST * p = (const GALGAS_lexicalStructuredSendInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalStructuredSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalStructuredSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalWhileBranchListAST' list                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalWhileBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalWhileBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
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

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                            const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mWhileExpression, in_mWhileInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalWhileBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalWhileBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalWhileBranchListAST (mObject.mAttribute_mWhileExpression, mObject.mAttribute_mWhileInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalWhileBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileExpression" ":" ;
  mObject.mAttribute_mWhileExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileInstructionList" ":" ;
  mObject.mAttribute_mWhileInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalWhileBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalWhileBranchListAST * operand = (cCollectionElement_lexicalWhileBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalWhileBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                              const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                  const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (in_mWhileExpression,
                                                               in_mWhileInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                            const GALGAS_lexicalInstructionListAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::setter_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                             const GALGAS_lexicalInstructionListAST inOperand1,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::setter_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                             GALGAS_lexicalInstructionListAST & outOperand1,
                                                             const GALGAS_uint inRemoveIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mWhileExpression ;
      outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::setter_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                        GALGAS_lexicalInstructionListAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::setter_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                       GALGAS_lexicalInstructionListAST & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                    GALGAS_lexicalInstructionListAST & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mWhileExpression ;
    outOperand1 = p->mObject.mAttribute_mWhileInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::add_operation (const GALGAS_lexicalWhileBranchListAST & inOperand,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalWhileBranchListAST::plusAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalWhileBranchListAST::cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST_2D_element cEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mAttribute_mWhileExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mAttribute_mWhileInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalWhileBranchListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  const GALGAS_lexicalWhileBranchListAST * p = (const GALGAS_lexicalWhileBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalWhileBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalWhileBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalRepeatInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mRepeatedInstructionList.objectCompare (p->mAttribute_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalWhileBranchList.objectCompare (p->mAttribute_mLexicalWhileBranchList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalRepeatInstructionAST::objectCompare (const GALGAS_lexicalRepeatInstructionAST & inOperand) const {
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

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRepeatInstructionAST::constructor_new (GALGAS_lexicalInstructionListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalWhileBranchListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::constructor_new (const GALGAS_lexicalInstructionListAST & inAttribute_mRepeatedInstructionList,
                                                                                        const GALGAS_lexicalWhileBranchListAST & inAttribute_mLexicalWhileBranchList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST result ;
  if (inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mLexicalWhileBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRepeatInstructionAST (inAttribute_mRepeatedInstructionList, inAttribute_mLexicalWhileBranchList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalRepeatInstructionAST::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    result = p->mAttribute_mRepeatedInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cPtr_lexicalRepeatInstructionAST::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRepeatedInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalRepeatInstructionAST::getter_mLexicalWhileBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    result = p->mAttribute_mLexicalWhileBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalWhileBranchListAST cPtr_lexicalRepeatInstructionAST::getter_mLexicalWhileBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalWhileBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalRepeatInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                    const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mRepeatedInstructionList (in_mRepeatedInstructionList),
mAttribute_mLexicalWhileBranchList (in_mLexicalWhileBranchList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalRepeatInstructionAST:" ;
  mAttribute_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalRepeatInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mAttribute_mRepeatedInstructionList, mAttribute_mLexicalWhileBranchList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalRepeatInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRepeatInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRepeatInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST result ;
  const GALGAS_lexicalRepeatInstructionAST * p = (const GALGAS_lexicalRepeatInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRepeatInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRepeatInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Class for element of '@lexicalSelectBranchListAST' list                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSelectBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalSelectBranchListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
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

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                              const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelectExpression, in_mSelectInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSelectBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSelectBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSelectBranchListAST (mObject.mAttribute_mSelectExpression, mObject.mAttribute_mSelectInstructionList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSelectBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectExpression" ":" ;
  mObject.mAttribute_mSelectExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectInstructionList" ":" ;
  mObject.mAttribute_mSelectInstructionList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSelectBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSelectBranchListAST * operand = (cCollectionElement_lexicalSelectBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSelectBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                   const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (in_mSelectExpression,
                                                                in_mSelectInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                             const GALGAS_lexicalInstructionListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::setter_insertAtIndex (const GALGAS_lexicalExpressionAST inOperand0,
                                                              const GALGAS_lexicalInstructionListAST inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::setter_removeAtIndex (GALGAS_lexicalExpressionAST & outOperand0,
                                                              GALGAS_lexicalInstructionListAST & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
      outOperand0 = p->mObject.mAttribute_mSelectExpression ;
      outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::setter_popFirst (GALGAS_lexicalExpressionAST & outOperand0,
                                                         GALGAS_lexicalInstructionListAST & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::setter_popLast (GALGAS_lexicalExpressionAST & outOperand0,
                                                        GALGAS_lexicalInstructionListAST & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::method_first (GALGAS_lexicalExpressionAST & outOperand0,
                                                      GALGAS_lexicalInstructionListAST & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::method_last (GALGAS_lexicalExpressionAST & outOperand0,
                                                     GALGAS_lexicalInstructionListAST & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    outOperand0 = p->mObject.mAttribute_mSelectExpression ;
    outOperand1 = p->mObject.mAttribute_mSelectInstructionList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::add_operation (const GALGAS_lexicalSelectBranchListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSelectBranchListAST::plusAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSelectBranchListAST::cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST_2D_element cEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExpressionAST cEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mAttribute_mSelectExpression ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mAttribute_mSelectInstructionList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSelectBranchListAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  const GALGAS_lexicalSelectBranchListAST * p = (const GALGAS_lexicalSelectBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSelectBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalSelectInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalSelectBranchList.objectCompare (p->mAttribute_mLexicalSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mDefaultInstructionList.objectCompare (p->mAttribute_mDefaultInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalSelectInstructionAST::objectCompare (const GALGAS_lexicalSelectInstructionAST & inOperand) const {
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

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSelectInstructionAST::constructor_new (GALGAS_lexicalSelectBranchListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalInstructionListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::constructor_new (const GALGAS_lexicalSelectBranchListAST & inAttribute_mLexicalSelectBranchList,
                                                                                        const GALGAS_lexicalInstructionListAST & inAttribute_mDefaultInstructionList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST result ;
  if (inAttribute_mLexicalSelectBranchList.isValid () && inAttribute_mDefaultInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSelectInstructionAST (inAttribute_mLexicalSelectBranchList, inAttribute_mDefaultInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectInstructionAST::getter_mLexicalSelectBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    result = p->mAttribute_mLexicalSelectBranchList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectBranchListAST cPtr_lexicalSelectInstructionAST::getter_mLexicalSelectBranchList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalSelectBranchList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectInstructionAST::getter_mDefaultInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    result = p->mAttribute_mDefaultInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalInstructionListAST cPtr_lexicalSelectInstructionAST::getter_mDefaultInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @lexicalSelectInstructionAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mAttribute_mLexicalSelectBranchList (in_mLexicalSelectBranchList),
mAttribute_mDefaultInstructionList (in_mDefaultInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalSelectInstructionAST:" ;
  mAttribute_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalSelectInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mAttribute_mLexicalSelectBranchList, mAttribute_mDefaultInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @lexicalSelectInstructionAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSelectInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST result ;
  const GALGAS_lexicalSelectInstructionAST * p = (const GALGAS_lexicalSelectInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalSelectInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalSelectInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_abstractLexicalRoutineActualArgumentAST::objectCompare (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand) const {
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

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_abstractLexicalRoutineActualArgumentAST::getter_mActualPassingModeLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractLexicalRoutineActualArgumentAST * p = (const cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    result = p->mAttribute_mActualPassingModeLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_abstractLexicalRoutineActualArgumentAST::getter_mActualPassingModeLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActualPassingModeLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @abstractLexicalRoutineActualArgumentAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (const GALGAS_location & in_mActualPassingModeLocation
                                                                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mAttribute_mActualPassingModeLocation (in_mActualPassingModeLocation) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @abstractLexicalRoutineActualArgumentAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ("abstractLexicalRoutineActualArgumentAST",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractLexicalRoutineActualArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractLexicalRoutineActualArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRoutineActualArgumentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_abstractLexicalRoutineActualArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_abstractLexicalRoutineActualArgumentAST result ;
  const GALGAS_abstractLexicalRoutineActualArgumentAST * p = (const GALGAS_abstractLexicalRoutineActualArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractLexicalRoutineActualArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractLexicalRoutineActualArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@lexicalRoutineCallActualArgumentListAST' list                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalRoutineCallActualArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
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

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRoutineActualArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalRoutineCallActualArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalRoutineCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRoutineCallActualArgumentListAST (mObject.mAttribute_mLexicalRoutineActualArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalRoutineCallActualArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineActualArgument" ":" ;
  mObject.mAttribute_mLexicalRoutineActualArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalRoutineCallActualArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * operand = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_listWithValue (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (in_mLexicalRoutineActualArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::addAssign_operation (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_insertAtIndex (const GALGAS_abstractLexicalRoutineActualArgumentAST inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_removeAtIndex (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_popFirst (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_popLast (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::method_first (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::method_last (GALGAS_abstractLexicalRoutineActualArgumentAST & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalRoutineActualArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::add_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalRoutineCallActualArgumentListAST::cEnumerator_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element cEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractLexicalRoutineActualArgumentAST cEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalRoutineActualArgument ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalRoutineCallActualArgumentListAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ("lexicalRoutineCallActualArgumentListAST",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  const GALGAS_lexicalRoutineCallActualArgumentListAST * p = (const GALGAS_lexicalRoutineCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::objectCompare (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand) const {
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

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @lexicalRoutineOrFunctionFormalInputArgumentAST type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ("lexicalRoutineOrFunctionFormalInputArgumentAST",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST * p = (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineOrFunctionFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalFormalInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFormalInputArgumentAST * p = (const cPtr_lexicalFormalInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mActualPassingModeLocation.objectCompare (p->mAttribute_mActualPassingModeLocation) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineOrFunctionFormalInputArgument.objectCompare (p->mAttribute_mRoutineOrFunctionFormalInputArgument) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalFormalInputArgumentAST::objectCompare (const GALGAS_lexicalFormalInputArgumentAST & inOperand) const {
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

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFormalInputArgumentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mActualPassingModeLocation,
                                                                                            const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inAttribute_mRoutineOrFunctionFormalInputArgument
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST result ;
  if (inAttribute_mActualPassingModeLocation.isValid () && inAttribute_mRoutineOrFunctionFormalInputArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFormalInputArgumentAST (inAttribute_mActualPassingModeLocation, inAttribute_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::getter_mRoutineOrFunctionFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFormalInputArgumentAST * p = (const cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    result = p->mAttribute_mRoutineOrFunctionFormalInputArgument ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST cPtr_lexicalFormalInputArgumentAST::getter_mRoutineOrFunctionFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineOrFunctionFormalInputArgument ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @lexicalFormalInputArgumentAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                        const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mAttribute_mRoutineOrFunctionFormalInputArgument (in_mRoutineOrFunctionFormalInputArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalFormalInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

void cPtr_lexicalFormalInputArgumentAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@lexicalFormalInputArgumentAST:" ;
  mAttribute_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineOrFunctionFormalInputArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalFormalInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFormalInputArgumentAST (mAttribute_mActualPassingModeLocation, mAttribute_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @lexicalFormalInputArgumentAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ("lexicalFormalInputArgumentAST",
                                                      & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST result ;
  const GALGAS_lexicalFormalInputArgumentAST * p = (const GALGAS_lexicalFormalInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFormalInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFormalInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Class for element of '@lexicalFunctionCallActualArgumentListAST' list                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalFunctionCallActualArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
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

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalActualInputArgument) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalFunctionCallActualArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalFunctionCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalFunctionCallActualArgumentListAST (mObject.mAttribute_mLexicalActualInputArgument COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalFunctionCallActualArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalActualInputArgument" ":" ;
  mObject.mAttribute_mLexicalActualInputArgument.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalFunctionCallActualArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * operand = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_listWithValue (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (in_mLexicalActualInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::addAssign_operation (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_insertAtIndex (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand0,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_removeAtIndex (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_popFirst (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_popLast (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::method_first (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::method_last (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalActualInputArgument ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::add_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalFunctionCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalFunctionCallActualArgumentListAST::cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element cEnumerator_lexicalFunctionCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST cEnumerator_lexicalFunctionCallActualArgumentListAST::current_mLexicalActualInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalActualInputArgument ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalFunctionCallActualArgumentListAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ("lexicalFunctionCallActualArgumentListAST",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  const GALGAS_lexicalFunctionCallActualArgumentListAST * p = (const GALGAS_lexicalFunctionCallActualArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallActualArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallActualArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalCurrentCharacterInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCurrentCharacterInputArgumentAST * p = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLocation.objectCompare (p->mAttribute_mLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalCurrentCharacterInputArgumentAST::objectCompare (const GALGAS_lexicalCurrentCharacterInputArgumentAST & inOperand) const {
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

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCurrentCharacterInputArgumentAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_lexicalCurrentCharacterInputArgumentAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCurrentCharacterInputArgumentAST * p = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
    result = p->mAttribute_mLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_lexicalCurrentCharacterInputArgumentAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @lexicalCurrentCharacterInputArgumentAST class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (const GALGAS_location & in_mLocation
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mAttribute_mLocation (in_mLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalCurrentCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

void cPtr_lexicalCurrentCharacterInputArgumentAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@lexicalCurrentCharacterInputArgumentAST:" ;
  mAttribute_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalCurrentCharacterInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCurrentCharacterInputArgumentAST (mAttribute_mLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @lexicalCurrentCharacterInputArgumentAST type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ("lexicalCurrentCharacterInputArgumentAST",
                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalCurrentCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalCurrentCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCurrentCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST result ;
  const GALGAS_lexicalCurrentCharacterInputArgumentAST * p = (const GALGAS_lexicalCurrentCharacterInputArgumentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalCurrentCharacterInputArgumentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalCurrentCharacterInputArgumentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexicalLogInstructionAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexicalLogInstructionAST::objectCompare (const GALGAS_lexicalLogInstructionAST & inOperand) const {
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

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalLogInstructionAST::constructor_new (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalLogInstructionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::constructor_new (LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @lexicalLogInstructionAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "[@lexicalLogInstructionAST]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexicalLogInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @lexicalLogInstructionAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalLogInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalLogInstructionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST result ;
  const GALGAS_lexicalLogInstructionAST * p = (const GALGAS_lexicalLogInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalLogInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalLogInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST::GALGAS_lexicalArgumentModeAST (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputOutputMode ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_lexicalArgumentModeAST [3] = {
  "(not built)",
  "lexicalInputMode",
  "lexicalInputOutputMode"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputOutputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputOutputMode == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalArgumentModeAST::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @lexicalArgumentModeAST: " << gEnumNameArrayFor_lexicalArgumentModeAST [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_lexicalArgumentModeAST::objectCompare (const GALGAS_lexicalArgumentModeAST & inOperand) const {
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
//                                            @lexicalArgumentModeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalArgumentModeAST ("lexicalArgumentModeAST",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalArgumentModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalArgumentModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalArgumentModeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  const GALGAS_lexicalArgumentModeAST * p = (const GALGAS_lexicalArgumentModeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalArgumentModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalArgumentModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension Getter '@lexicalArgumentModeAST lexicalFormalModeName'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_lexicalFormalModeName (const GALGAS_lexicalArgumentModeAST & inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension Getter '@lexicalArgumentModeAST cppConstInFormalArgument'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cppConstInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string ("const ") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension Getter '@lexicalArgumentModeAST cppReferenceInFormalArgument'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cppReferenceInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string (" &") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Extension Getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_cocoaPointerInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_outResult = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_outResult = GALGAS_string (" *") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@lexicalExternRoutineFormalArgumentListAST' list                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalExternRoutineFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                         const GALGAS_lstring & in_mLexicalTypeName,
                                                                         const GALGAS_lstring & in_mFormalArgumentName
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

cCollectionElement_lexicalExternRoutineFormalArgumentListAST::cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                                                                            const GALGAS_lstring & in_mLexicalTypeName,
                                                                                                                            const GALGAS_lstring & in_mFormalArgumentName
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPassingMode, in_mLexicalTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalExternRoutineFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalExternRoutineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (mObject.mAttribute_mPassingMode, mObject.mAttribute_mLexicalTypeName, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalExternRoutineFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPassingMode" ":" ;
  mObject.mAttribute_mPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeName" ":" ;
  mObject.mAttribute_mLexicalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalExternRoutineFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * operand = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST::GALGAS_lexicalExternRoutineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST::GALGAS_lexicalExternRoutineFormalArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalExternRoutineFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                                  const GALGAS_lstring & in_mLexicalTypeName,
                                                                                  const GALGAS_lstring & in_mFormalArgumentName
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (in_mPassingMode,
                                                                               in_mLexicalTypeName,
                                                                               in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::addAssign_operation (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_lstring & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_insertAtIndex (const GALGAS_lexicalArgumentModeAST inOperand0,
                                                                             const GALGAS_lstring inOperand1,
                                                                             const GALGAS_lstring inOperand2,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_removeAtIndex (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                             GALGAS_lstring & outOperand1,
                                                                             GALGAS_lstring & outOperand2,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mPassingMode ;
      outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
      outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_popFirst (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                        GALGAS_lstring & outOperand1,
                                                                        GALGAS_lstring & outOperand2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_popLast (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::method_first (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     GALGAS_lstring & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::method_last (GALGAS_lexicalArgumentModeAST & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_lstring & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mPassingMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand2 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::add_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternRoutineFormalArgumentListAST::plusAssign_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExternRoutineFormalArgumentListAST::cEnumerator_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element cEnumerator_lexicalExternRoutineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mAttribute_mPassingMode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mLexicalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @lexicalExternRoutineFormalArgumentListAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ("lexicalExternRoutineFormalArgumentListAST",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExternRoutineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExternRoutineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternRoutineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  const GALGAS_lexicalExternRoutineFormalArgumentListAST * p = (const GALGAS_lexicalExternRoutineFormalArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternRoutineFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternRoutineFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@externRoutineListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externRoutineListAST : public cCollectionElement {
  public : GALGAS_externRoutineListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externRoutineListAST (const GALGAS_lstring & in_mRoutineName,
                                                    const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                    const GALGAS_stringlist & in_mErrorMessageList
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

cCollectionElement_externRoutineListAST::cCollectionElement_externRoutineListAST (const GALGAS_lstring & in_mRoutineName,
                                                                                  const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                                                  const GALGAS_stringlist & in_mErrorMessageList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mLexicalRoutineFormalArgumentList, in_mErrorMessageList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externRoutineListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externRoutineListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externRoutineListAST (mObject.mAttribute_mRoutineName, mObject.mAttribute_mLexicalRoutineFormalArgumentList, mObject.mAttribute_mErrorMessageList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externRoutineListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mAttribute_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineFormalArgumentList" ":" ;
  mObject.mAttribute_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessageList" ":" ;
  mObject.mAttribute_mErrorMessageList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externRoutineListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externRoutineListAST * operand = (cCollectionElement_externRoutineListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externRoutineListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST::GALGAS_externRoutineListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST::GALGAS_externRoutineListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externRoutineListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                    const GALGAS_stringlist & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externRoutineListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_lstring & in_mRoutineName,
                                                             const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                             const GALGAS_stringlist & in_mErrorMessageList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externRoutineListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_externRoutineListAST (in_mRoutineName,
                                                          in_mLexicalRoutineFormalArgumentList,
                                                          in_mErrorMessageList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                       const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                       const GALGAS_stringlist & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externRoutineListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                        const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand1,
                                                        const GALGAS_stringlist inOperand2,
                                                        const GALGAS_uint inInsertionIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externRoutineListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                        GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                        GALGAS_stringlist & outOperand2,
                                                        const GALGAS_uint inRemoveIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
      outOperand0 = p->mObject.mAttribute_mRoutineName ;
      outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
      outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                   GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                   GALGAS_stringlist & outOperand2,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                  GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                  GALGAS_stringlist & outOperand2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::method_first (GALGAS_lstring & outOperand0,
                                                GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                                GALGAS_stringlist & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::method_last (GALGAS_lstring & outOperand0,
                                               GALGAS_lexicalExternRoutineFormalArgumentListAST & outOperand1,
                                               GALGAS_stringlist & outOperand2,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    outOperand0 = p->mObject.mAttribute_mRoutineName ;
    outOperand1 = p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mErrorMessageList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::add_operation (const GALGAS_externRoutineListAST & inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externRoutineListAST::plusAssign_operation (const GALGAS_externRoutineListAST inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externRoutineListAST::cEnumerator_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST_2D_element cEnumerator_externRoutineListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externRoutineListAST::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternRoutineFormalArgumentListAST cEnumerator_externRoutineListAST::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mAttribute_mLexicalRoutineFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist cEnumerator_externRoutineListAST::current_mErrorMessageList (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mAttribute_mErrorMessageList ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externRoutineListAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineListAST ("externRoutineListAST",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externRoutineListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externRoutineListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineListAST result ;
  const GALGAS_externRoutineListAST * p = (const GALGAS_externRoutineListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Class for element of '@lexicalExternFunctionFormalArgumentListAST' list                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalExternFunctionFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lstring & in_mLexicalTypeName,
                                                                          const GALGAS_lstring & in_mFormalArgumentName
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

cCollectionElement_lexicalExternFunctionFormalArgumentListAST::cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lstring & in_mLexicalTypeName,
                                                                                                                              const GALGAS_lstring & in_mFormalArgumentName
                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalTypeName, in_mFormalArgumentName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalExternFunctionFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalExternFunctionFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (mObject.mAttribute_mLexicalTypeName, mObject.mAttribute_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalExternFunctionFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeName" ":" ;
  mObject.mAttribute_mLexicalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mAttribute_mFormalArgumentName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalExternFunctionFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * operand = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST::GALGAS_lexicalExternFunctionFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST::GALGAS_lexicalExternFunctionFormalArgumentListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalExternFunctionFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                   const GALGAS_lstring & in_mLexicalTypeName,
                                                                                   const GALGAS_lstring & in_mFormalArgumentName
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (in_mLexicalTypeName,
                                                                                in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                              const GALGAS_lstring inOperand1,
                                                                              const GALGAS_uint inInsertionIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                              GALGAS_lstring & outOperand1,
                                                                              const GALGAS_uint inRemoveIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
      outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
      outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                        GALGAS_lstring & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::method_first (GALGAS_lstring & outOperand0,
                                                                      GALGAS_lstring & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::method_last (GALGAS_lstring & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    outOperand0 = p->mObject.mAttribute_mLexicalTypeName ;
    outOperand1 = p->mObject.mAttribute_mFormalArgumentName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::add_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand,
                                                                                                                    C_Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalExternFunctionFormalArgumentListAST::plusAssign_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalExternFunctionFormalArgumentListAST::cEnumerator_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inEnumeratedObject,
                                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element cEnumerator_lexicalExternFunctionFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternFunctionFormalArgumentListAST::current_mLexicalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject.mAttribute_mLexicalTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalExternFunctionFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject.mAttribute_mFormalArgumentName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @lexicalExternFunctionFormalArgumentListAST type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ("lexicalExternFunctionFormalArgumentListAST",
                                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalExternFunctionFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalExternFunctionFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternFunctionFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  const GALGAS_lexicalExternFunctionFormalArgumentListAST * p = (const GALGAS_lexicalExternFunctionFormalArgumentListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalExternFunctionFormalArgumentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExternFunctionFormalArgumentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Class for element of '@externFunctionListAST' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_externFunctionListAST : public cCollectionElement {
  public : GALGAS_externFunctionListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_externFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                     const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                     const GALGAS_lstring & in_mReturnedTypeName
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

cCollectionElement_externFunctionListAST::cCollectionElement_externFunctionListAST (const GALGAS_lstring & in_mFunctionName,
                                                                                    const GALGAS_lexicalExternFunctionFormalArgumentListAST & in_mLexicalFunctionFormalArgumentList,
                                                                                    const GALGAS_lstring & in_mReturnedTypeName
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mLexicalFunctionFormalArgumentList, in_mReturnedTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_externFunctionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_externFunctionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externFunctionListAST (mObject.mAttribute_mFunctionName, mObject.mAttribute_mLexicalFunctionFormalArgumentList, mObject.mAttribute_mReturnedTypeName COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_externFunctionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mAttribute_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFunctionFormalArgumentList" ":" ;
  mObject.mAttribute_mLexicalFunctionFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReturnedTypeName" ":" ;
  mObject.mAttribute_mReturnedTypeName.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_externFunctionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externFunctionListAST * operand = (cCollectionElement_externFunctionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externFunctionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST::GALGAS_externFunctionListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST::GALGAS_externFunctionListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_externFunctionListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lexicalExternFunctionFormalArgumentListAST & inOperand1,
                                                                                      const GALGAS_lstring & inOperand2
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_externFunctionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
      outOperand0 = p->mObject.mAttribute_mFunctionName ;
      outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
      outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mFunctionName ;
    outOperand1 = p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
    outOperand2 = p->mObject.mAttribute_mReturnedTypeName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_externFunctionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result = GALGAS_externFunctionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionListAST::plusAssign_operation (const GALGAS_externFunctionListAST inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_externFunctionListAST::cEnumerator_externFunctionListAST (const GALGAS_externFunctionListAST & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST_2D_element cEnumerator_externFunctionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalExternFunctionFormalArgumentListAST cEnumerator_externFunctionListAST::current_mLexicalFunctionFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mAttribute_mLexicalFunctionFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_externFunctionListAST::current_mReturnedTypeName (LOCATION_ARGS) const {
  const cCollectionElement_externFunctionListAST * p = (const cCollectionElement_externFunctionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externFunctionListAST) ;
  return p->mObject.mAttribute_mReturnedTypeName ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @externFunctionListAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionListAST ("externFunctionListAST",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    Class for element of '@indexingListAST' list                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_indexingListAST : public cCollectionElement {
  public : GALGAS_indexingListAST_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                               const GALGAS_lstring & in_mIndexComment
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

cCollectionElement_indexingListAST::cCollectionElement_indexingListAST (const GALGAS_lstring & in_mIndexName,
                                                                        const GALGAS_lstring & in_mIndexComment
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mIndexName, in_mIndexComment) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_indexingListAST::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_indexingListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_indexingListAST (mObject.mAttribute_mIndexName, mObject.mAttribute_mIndexComment COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_indexingListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexName" ":" ;
  mObject.mAttribute_mIndexName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndexComment" ":" ;
  mObject.mAttribute_mIndexComment.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_indexingListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_indexingListAST * operand = (cCollectionElement_indexingListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_indexingListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST::GALGAS_indexingListAST (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST::GALGAS_indexingListAST (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_lstring & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_indexingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_indexingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_indexingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
      outOperand0 = p->mObject.mAttribute_mIndexName ;
      outOperand1 = p->mObject.mAttribute_mIndexComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mIndexName ;
    outOperand1 = p->mObject.mAttribute_mIndexComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_indexingListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_indexingListAST result = GALGAS_indexingListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_indexingListAST::plusAssign_operation (const GALGAS_indexingListAST inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_indexingListAST::cEnumerator_indexingListAST (const GALGAS_indexingListAST & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST_2D_element cEnumerator_indexingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexName (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mAttribute_mIndexName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_indexingListAST::current_mIndexComment (LOCATION_ARGS) const {
  const cCollectionElement_indexingListAST * p = (const cCollectionElement_indexingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_indexingListAST) ;
  return p->mObject.mAttribute_mIndexComment ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @indexingListAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_indexingListAST ("indexingListAST",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_indexingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_indexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_indexingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_indexingListAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum::GALGAS_lexicalTypeEnum (void) :
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_string (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_string ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_char (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_char ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_uint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_sint_36__34_ ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_double (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_double ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeEnum::constructor_lexicalType_5F_bigint (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalTypeEnum result ;
  result.mEnum = kEnum_lexicalType_5F_bigint ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_string (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_string == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_char (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_char == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_uint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_uint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_sint_36__34_ (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_sint_36__34_ == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_double (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_double == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexicalTypeEnum::getter_isLexicalType_5F_bigint (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalType_5F_bigint == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeEnum::description (C_String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString << "<enum @lexicalTypeEnum: " << gEnumNameArrayFor_lexicalTypeEnum [mEnum] ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeEnum type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeEnum ("lexicalTypeEnum",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTypeEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeEnum ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTypeEnum::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeEnum (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Class for element of '@lexicalSentValueList' list                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

class cCollectionElement_lexicalSentValueList : public cCollectionElement {
  public : GALGAS_lexicalSentValueList_2D_element mObject ;

//--- Constructor
  public : cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                    const GALGAS_string & in_mLexicalAttributeName,
                                                    const GALGAS_lexicalTypeEnum & in_mLexicalType
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

cCollectionElement_lexicalSentValueList::cCollectionElement_lexicalSentValueList (const GALGAS_lstring & in_mLexicalFormalSelector,
                                                                                  const GALGAS_string & in_mLexicalAttributeName,
                                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalFormalSelector, in_mLexicalAttributeName, in_mLexicalType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cCollectionElement_lexicalSentValueList::isValid (void) const {
  return mObject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cCollectionElement * cCollectionElement_lexicalSentValueList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSentValueList (mObject.mAttribute_mLexicalFormalSelector, mObject.mAttribute_mLexicalAttributeName, mObject.mAttribute_mLexicalType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cCollectionElement_lexicalSentValueList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalFormalSelector" ":" ;
  mObject.mAttribute_mLexicalFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalAttributeName" ":" ;
  mObject.mAttribute_mLexicalAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mObject.mAttribute_mLexicalType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cCollectionElement_lexicalSentValueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSentValueList * operand = (cCollectionElement_lexicalSentValueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSentValueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (void) :
AC_GALGAS_list () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList::GALGAS_lexicalSentValueList (cSharedList * inSharedListPtr) :
AC_GALGAS_list (inSharedListPtr) {
  if (NULL == inSharedListPtr) {
    createNewEmptyList (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_emptyList (LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  result.createNewEmptyList (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_string & inOperand1,
                                                                                    const GALGAS_lexicalTypeEnum & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSentValueList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result.createNewEmptyList (THERE) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSentValueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.addObject (attributes) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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
    addObject (attributes) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
      outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
      outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
      outOperand2 = p->mObject.mAttribute_mLexicalType ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalSelector ;
    outOperand1 = p->mObject.mAttribute_mLexicalAttributeName ;
    outOperand2 = p->mObject.mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_lexicalSentValueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSentValueList result = GALGAS_lexicalSentValueList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalSentValueList::plusAssign_operation (const GALGAS_lexicalSentValueList inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexicalSentValueList::getter_mLexicalFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mAttribute_mLexicalFormalSelector ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexicalSentValueList::getter_mLexicalAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mAttribute_mLexicalAttributeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalSentValueList::getter_mLexicalTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSentValueList * p = (cCollectionElement_lexicalSentValueList *) attributes.ptr () ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
    result = p->mObject.mAttribute_mLexicalType ;
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalSentValueList::cEnumerator_lexicalSentValueList (const GALGAS_lexicalSentValueList & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList_2D_element cEnumerator_lexicalSentValueList::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalSentValueList::current_mLexicalFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mAttribute_mLexicalFormalSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cEnumerator_lexicalSentValueList::current_mLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mAttribute_mLexicalAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalSentValueList::current_mLexicalType (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSentValueList * p = (const cCollectionElement_lexicalSentValueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSentValueList) ;
  return p->mObject.mAttribute_mLexicalType ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @lexicalSentValueList type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSentValueList ("lexicalSentValueList",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalSentValueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValueList ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalSentValueList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSentValueList (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_terminalMap::cMapElement_terminalMap (const GALGAS_lstring & inKey,
                                                  const GALGAS_lexicalSentValueList & in_mSentAttributeList
                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mSentAttributeList (in_mSentAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_terminalMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mSentAttributeList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_terminalMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_terminalMap (mAttribute_lkey, mAttribute_mSentAttributeList COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_terminalMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mAttribute_mSentAttributeList.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_terminalMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_terminalMap * operand = (cMapElement_terminalMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mSentAttributeList.objectCompare (operand->mAttribute_mSentAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap::GALGAS_terminalMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap::GALGAS_terminalMap (const GALGAS_terminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap & GALGAS_terminalMap::operator = (const GALGAS_terminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_terminalMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_terminalMap::constructor_mapWithMapToOverride (const GALGAS_terminalMap & inMapToOverride
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_terminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap GALGAS_terminalMap::getter_overriddenMap (C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_terminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_terminalMap_searchKey = "the '%K' terminal is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mSentAttributeList ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList GALGAS_terminalMap::getter_mSentAttributeListForKey (const GALGAS_string & inKey,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) attributes ;
  GALGAS_lexicalSentValueList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    result = p->mAttribute_mSentAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalMap::setter_setMSentAttributeListForKey (GALGAS_lexicalSentValueList inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_terminalMap * p = (cMapElement_terminalMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_terminalMap) ;
    p->mAttribute_mSentAttributeList = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_terminalMap * GALGAS_terminalMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                 const GALGAS_string & inKey
                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_terminalMap * result = (cMapElement_terminalMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_terminalMap::cEnumerator_terminalMap (const GALGAS_terminalMap & inEnumeratedObject,
                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalMap_2D_element cEnumerator_terminalMap::current (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return GALGAS_terminalMap_2D_element (p->mAttribute_lkey, p->mAttribute_mSentAttributeList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_terminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalSentValueList cEnumerator_terminalMap::current_mSentAttributeList (LOCATION_ARGS) const {
  const cMapElement_terminalMap * p = (const cMapElement_terminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalMap) ;
  return p->mAttribute_mSentAttributeList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                  @terminalMap type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalMap ("terminalMap",
                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_terminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_terminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTypeMap::cMapElement_lexicalTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalType (in_mLexicalType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalTypeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalTypeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalTypeMap (mAttribute_lkey, mAttribute_mLexicalType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalTypeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mAttribute_mLexicalType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalTypeMap * operand = (cMapElement_lexicalTypeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalType.objectCompare (operand->mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap::GALGAS_lexicalTypeMap (const GALGAS_lexicalTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap & GALGAS_lexicalTypeMap::operator = (const GALGAS_lexicalTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalTypeMap & inMapToOverride
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap GALGAS_lexicalTypeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalTypeMap_searchKey = "there is no '@%K' lexical type" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalTypeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    result = p->mAttribute_mLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalTypeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalTypeMap * p = (cMapElement_lexicalTypeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
    p->mAttribute_mLexicalType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalTypeMap * GALGAS_lexicalTypeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_lexicalTypeMap * result = (cMapElement_lexicalTypeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalTypeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalTypeMap::cEnumerator_lexicalTypeMap (const GALGAS_lexicalTypeMap & inEnumeratedObject,
                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeMap_2D_element cEnumerator_lexicalTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return GALGAS_lexicalTypeMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalTypeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalTypeMap * p = (const cMapElement_lexicalTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalTypeMap) ;
  return p->mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @lexicalTypeMap type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTypeMap ("lexicalTypeMap",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTypeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTypeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalAttributeMap::cMapElement_lexicalAttributeMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_lexicalTypeEnum & in_mLexicalType
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mAttribute_mLexicalType (in_mLexicalType) {
}

//---------------------------------------------------------------------------------------------------------------------*

bool cMapElement_lexicalAttributeMap::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mLexicalType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement * cMapElement_lexicalAttributeMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_lexicalAttributeMap (mAttribute_lkey, mAttribute_mLexicalType COMMA_HERE)) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cMapElement_lexicalAttributeMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalType" ":" ;
  mAttribute_mLexicalType.description (ioString, inIndentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cMapElement_lexicalAttributeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_lexicalAttributeMap * operand = (cMapElement_lexicalAttributeMap *) inOperand ;
  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalType.objectCompare (operand->mAttribute_mLexicalType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (void) :
AC_GALGAS_map () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap::GALGAS_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap & GALGAS_lexicalAttributeMap::operator = (const GALGAS_lexicalAttributeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::constructor_mapWithMapToOverride (const GALGAS_lexicalAttributeMap & inMapToOverride
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap GALGAS_lexicalAttributeMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

const char * kSearchErrorMessage_lexicalAttributeMap_searchKey = "the '%K' lexical attribute is not declared" ;

//---------------------------------------------------------------------------------------------------------------------*

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
    outArgument0 = p->mAttribute_mLexicalType ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum GALGAS_lexicalAttributeMap::getter_mLexicalTypeForKey (const GALGAS_string & inKey,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) attributes ;
  GALGAS_lexicalTypeEnum result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    result = p->mAttribute_mLexicalType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalAttributeMap::setter_setMLexicalTypeForKey (GALGAS_lexicalTypeEnum inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  cMapElement_lexicalAttributeMap * p = (cMapElement_lexicalAttributeMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
    p->mAttribute_mLexicalType = inAttributeValue ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

cMapElement_lexicalAttributeMap * GALGAS_lexicalAttributeMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_lexicalAttributeMap * result = (cMapElement_lexicalAttributeMap *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_lexicalAttributeMap) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumerator_lexicalAttributeMap::cEnumerator_lexicalAttributeMap (const GALGAS_lexicalAttributeMap & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator () {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeMap_2D_element cEnumerator_lexicalAttributeMap::current (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return GALGAS_lexicalAttributeMap_2D_element (p->mAttribute_lkey, p->mAttribute_mLexicalType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cEnumerator_lexicalAttributeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalTypeEnum cEnumerator_lexicalAttributeMap::current_mLexicalType (LOCATION_ARGS) const {
  const cMapElement_lexicalAttributeMap * p = (const cMapElement_lexicalAttributeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_lexicalAttributeMap) ;
  return p->mAttribute_mLexicalType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexicalAttributeMap type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeMap ("lexicalAttributeMap",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexicalAttributeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexicalAttributeMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeMap (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mTerminalName ;
    outOperand1 = p->mObject.mAttribute_mSentAttributeList ;
    outOperand2 = p->mObject.mAttribute_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mAttribute_mIsEndOfTemplateMark ;
    outOperand4 = p->mObject.mAttribute_mAtomicSelection ;
    outOperand5 = p->mObject.mAttribute_mStyleIndex ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_terminalList GALGAS_terminalList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalList GALGAS_terminalList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalList result = GALGAS_terminalList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_terminalList::plusAssign_operation (const GALGAS_terminalList inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_terminalList::getter_mTerminalNameAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lexicalSentValueList GALGAS_terminalList::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_terminalList::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_bool GALGAS_terminalList::getter_mIsEndOfTemplateMarkAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_bool GALGAS_terminalList::getter_mAtomicSelectionAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_uint GALGAS_terminalList::getter_mStyleIndexAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lstring GALGAS_lexicalExplicitTokenListMap::getter_mTerminalForKey (const GALGAS_string & inKey,
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

GALGAS_lstringlist GALGAS_lexicalExplicitTokenListMap::getter_mFeatureListForKey (const GALGAS_string & inKey,
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

void GALGAS_lexicalExplicitTokenListMap::setter_setMTerminalForKey (GALGAS_lstring inAttributeValue,
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

void GALGAS_lexicalExplicitTokenListMap::setter_setMFeatureListForKey (GALGAS_lstringlist inAttributeValue,
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

void GALGAS_tokenSortedlist::plusAssign_operation (const GALGAS_tokenSortedlist inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLength ;
    outOperand1 = p->mObject.mAttribute_mName ;
    outOperand2 = p->mObject.mAttribute_mTerminalName ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_lexicalExplicitTokenListMapMap GALGAS_lexicalExplicitTokenListMapMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lexicalExplicitTokenListMap GALGAS_lexicalExplicitTokenListMapMap::getter_mExplicitTokenListMapForKey (const GALGAS_string & inKey,
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

GALGAS_tokenSortedlist GALGAS_lexicalExplicitTokenListMapMap::getter_mTokenSortedListForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_lexicalExplicitTokenListMapMap::getter_mShouldBeGeneratedForKey (const GALGAS_string & inKey,
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

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMExplicitTokenListMapForKey (GALGAS_lexicalExplicitTokenListMap inAttributeValue,
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

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMTokenSortedListForKey (GALGAS_tokenSortedlist inAttributeValue,
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

void GALGAS_lexicalExplicitTokenListMapMap::setter_setMShouldBeGeneratedForKey (GALGAS_bool inAttributeValue,
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

GALGAS_lexicalMessageMap GALGAS_lexicalMessageMap::getter_overriddenMap (C_Compiler * inCompiler
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

GALGAS_lstring GALGAS_lexicalMessageMap::getter_mLexicalMessageForKey (const GALGAS_string & inKey,
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

GALGAS_bool GALGAS_lexicalMessageMap::getter_mMessageIsUsedForKey (const GALGAS_string & inKey,
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

void GALGAS_lexicalMessageMap::setter_setMLexicalMessageForKey (GALGAS_lstring inAttributeValue,
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

void GALGAS_lexicalMessageMap::setter_setMMessageIsUsedForKey (GALGAS_bool inAttributeValue,
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
    addObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
      outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
      outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
      outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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
    outOperand0 = p->mObject.mAttribute_mLexicalFormalArgumentMode ;
    outOperand1 = p->mObject.mAttribute_mLexicalFormalArgumentType ;
    outOperand2 = p->mObject.mAttribute_mArgumentNameForComment ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRoutineFormalArgumentList GALGAS_lexicalRoutineFormalArgumentList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineFormalArgumentList result = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_lexicalRoutineFormalArgumentList::plusAssign_operation (const GALGAS_lexicalRoutineFormalArgumentList inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalArgumentModeAST GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentModeAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_lexicalTypeEnum GALGAS_lexicalRoutineFormalArgumentList::getter_mLexicalFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
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

GALGAS_string GALGAS_lexicalRoutineFormalArgumentList::getter_mArgumentNameForCommentAtIndex (const GALGAS_uint & inIndex,
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

