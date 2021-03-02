#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateExpressionAST templateExpressionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis> gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateExpressionAnalysis (const int32_t inClassIndex,
                                                      extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis inMethod) {
  gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_templateExpressionAST_templateExpressionAnalysis (void) {
  gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateExpressionAST_templateExpressionAnalysis (NULL,
                                                                             freeExtensionMethod_templateExpressionAST_templateExpressionAnalysis) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateExpressionAnalysis (const cPtr_templateExpressionAST * inObject,
                                                     const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                     GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_templateExpressionAST_templateExpressionAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.count ()) {
      f = gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.count ()) {
          f = gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_templateExpressionAST_templateExpressionAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, out_outExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionAST templateInstructionAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis> gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateInstructionAnalysis (const int32_t inClassIndex,
                                                       extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis inMethod) {
  gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_templateInstructionAST_templateInstructionAnalysis (void) {
  gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionAST_templateInstructionAnalysis (NULL,
                                                                               freeExtensionMethod_templateInstructionAST_templateInstructionAnalysis) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_templateInstructionAnalysis (const cPtr_templateInstructionAST * inObject,
                                                      const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                      GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                      const GALGAS_templateAnalysisContext constin_inAnalysisContext,
                                                      GALGAS_templateInstructionListForGeneration & io_ioInstructionList,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_templateInstructionAST_templateInstructionAnalysis f = NULL ;
    if (classIndex < gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.count ()) {
      f = gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.count ()) {
          f = gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_templateInstructionAST_templateInstructionAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioInstructionList, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration> gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_templateCodeGeneration (const int32_t inClassIndex,
                                                  extensionMethodSignature_templateInstructionForGeneration_templateCodeGeneration inMethod) {
  gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_templateInstructionForGeneration_templateCodeGeneration (void) {
  gExtensionMethodTable_templateInstructionForGeneration_templateCodeGeneration.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_templateInstructionForGeneration_templateCodeGeneration (NULL,
                                                                                    freeExtensionMethod_templateInstructionForGeneration_templateCodeGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionSwitchBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionSwitchBranchListAST : public cCollectionElement {
  public : GALGAS_templateInstructionSwitchBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_lstringlist & in_mConstantList,
                                                                      const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                      const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                      const GALGAS_location & in_mEndOfBranch
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_templateInstructionSwitchBranchListAST::cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                      const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                                                                      const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                                                                      const GALGAS_location & in_mEndOfBranch
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mAssociatedValuesExtraction, in_mInstructionList, in_mEndOfBranch) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListAST::cCollectionElement_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantList, inElement.mProperty_mAssociatedValuesExtraction, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfBranch) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionSwitchBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListAST (mObject.mProperty_mConstantList, mObject.mProperty_mAssociatedValuesExtraction, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionSwitchBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mObject.mProperty_mConstantList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAssociatedValuesExtraction" ":" ;
  mObject.mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfBranch" ":" ;
  mObject.mProperty_mEndOfBranch.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionSwitchBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionSwitchBranchListAST * operand = (cCollectionElement_templateInstructionSwitchBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST::GALGAS_templateInstructionSwitchBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST::GALGAS_templateInstructionSwitchBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                                        const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                                                                        const GALGAS_templateInstructionListAST & inOperand2,
                                                                                                                        const GALGAS_location & inOperand3
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_lstringlist & in_mConstantList,
                                                                               const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                               const GALGAS_templateInstructionListAST & in_mInstructionList,
                                                                               const GALGAS_location & in_mEndOfBranch
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (in_mConstantList,
                                                                            in_mAssociatedValuesExtraction,
                                                                            in_mInstructionList,
                                                                            in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                                         const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                         const GALGAS_templateInstructionListAST & inOperand2,
                                                                         const GALGAS_location & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_append (GALGAS_templateInstructionSwitchBranchListAST_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                                          const GALGAS_switchExtractedValuesListAST inOperand1,
                                                                          const GALGAS_templateInstructionListAST inOperand2,
                                                                          const GALGAS_location inOperand3,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                                          GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                          GALGAS_templateInstructionListAST & outOperand2,
                                                                          GALGAS_location & outOperand3,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mConstantList ;
      outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
      outOperand3 = p->mObject.mProperty_mEndOfBranch ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                                     GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                     GALGAS_templateInstructionListAST & outOperand2,
                                                                     GALGAS_location & outOperand3,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_popLast (GALGAS_lstringlist & outOperand0,
                                                                    GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                    GALGAS_templateInstructionListAST & outOperand2,
                                                                    GALGAS_location & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::method_first (GALGAS_lstringlist & outOperand0,
                                                                  GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                  GALGAS_templateInstructionListAST & outOperand2,
                                                                  GALGAS_location & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::method_last (GALGAS_lstringlist & outOperand0,
                                                                 GALGAS_switchExtractedValuesListAST & outOperand1,
                                                                 GALGAS_templateInstructionListAST & outOperand2,
                                                                 GALGAS_location & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::add_operation (const GALGAS_templateInstructionSwitchBranchListAST & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result = GALGAS_templateInstructionSwitchBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListAST inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMConstantListAtIndex (GALGAS_lstringlist inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListAST::getter_mConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMAssociatedValuesExtractionAtIndex (GALGAS_switchExtractedValuesListAST inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociatedValuesExtraction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_templateInstructionSwitchBranchListAST::getter_mAssociatedValuesExtractionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_switchExtractedValuesListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mAssociatedValuesExtraction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMInstructionListAtIndex (GALGAS_templateInstructionListAST inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST GALGAS_templateInstructionSwitchBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_templateInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListAST::setter_setMEndOfBranchAtIndex (GALGAS_location inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranch = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInstructionSwitchBranchListAST::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListAST * p = (cCollectionElement_templateInstructionSwitchBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionSwitchBranchListAST::cEnumerator_templateInstructionSwitchBranchListAST (const GALGAS_templateInstructionSwitchBranchListAST & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST_2D_element cEnumerator_templateInstructionSwitchBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_templateInstructionSwitchBranchListAST::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST cEnumerator_templateInstructionSwitchBranchListAST::current_mAssociatedValuesExtraction (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mAssociatedValuesExtraction ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListAST cEnumerator_templateInstructionSwitchBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_templateInstructionSwitchBranchListAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListAST * p = (const cCollectionElement_templateInstructionSwitchBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ("templateInstructionSwitchBranchListAST",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  const GALGAS_templateInstructionSwitchBranchListAST * p = (const GALGAS_templateInstructionSwitchBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@switchExtractedValuesListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_switchExtractedValuesListAST : public cCollectionElement {
  public : GALGAS_switchExtractedValuesListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_switchExtractedValuesListAST (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                            const GALGAS_lstring & in_mExtractedValueName,
                                                            const GALGAS_bool & in_mMarkedAsUnused
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_switchExtractedValuesListAST::cCollectionElement_switchExtractedValuesListAST (const GALGAS_lstring & in_mExtractedValueTypeName,
                                                                                                  const GALGAS_lstring & in_mExtractedValueName,
                                                                                                  const GALGAS_bool & in_mMarkedAsUnused
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExtractedValueTypeName, in_mExtractedValueName, in_mMarkedAsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_switchExtractedValuesListAST::cCollectionElement_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExtractedValueTypeName, inElement.mProperty_mExtractedValueName, inElement.mProperty_mMarkedAsUnused) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_switchExtractedValuesListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchExtractedValuesListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_switchExtractedValuesListAST (mObject.mProperty_mExtractedValueTypeName, mObject.mProperty_mExtractedValueName, mObject.mProperty_mMarkedAsUnused COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_switchExtractedValuesListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedValueTypeName" ":" ;
  mObject.mProperty_mExtractedValueTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mExtractedValueName" ":" ;
  mObject.mProperty_mExtractedValueName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMarkedAsUnused" ":" ;
  mObject.mProperty_mMarkedAsUnused.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_switchExtractedValuesListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_switchExtractedValuesListAST * operand = (cCollectionElement_switchExtractedValuesListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_switchExtractedValuesListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST::GALGAS_switchExtractedValuesListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST::GALGAS_switchExtractedValuesListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchExtractedValuesListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_bool & inOperand2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_switchExtractedValuesListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_switchExtractedValuesListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchExtractedValuesListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_append (GALGAS_switchExtractedValuesListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_switchExtractedValuesListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
      outOperand1 = p->mObject.mProperty_mExtractedValueName ;
      outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mExtractedValueTypeName ;
    outOperand1 = p->mObject.mProperty_mExtractedValueName ;
    outOperand2 = p->mObject.mProperty_mMarkedAsUnused ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchExtractedValuesListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchExtractedValuesListAST result = GALGAS_switchExtractedValuesListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::plusAssign_operation (const GALGAS_switchExtractedValuesListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_setMExtractedValueTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedValueTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_switchExtractedValuesListAST::getter_mExtractedValueTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mExtractedValueTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_setMExtractedValueNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedValueName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_switchExtractedValuesListAST::getter_mExtractedValueNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mExtractedValueName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_switchExtractedValuesListAST::setter_setMMarkedAsUnusedAtIndex (GALGAS_bool inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMarkedAsUnused = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_switchExtractedValuesListAST::getter_mMarkedAsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchExtractedValuesListAST * p = (cCollectionElement_switchExtractedValuesListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
    result = p->mObject.mProperty_mMarkedAsUnused ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_switchExtractedValuesListAST::cEnumerator_switchExtractedValuesListAST (const GALGAS_switchExtractedValuesListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST_2D_element cEnumerator_switchExtractedValuesListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_switchExtractedValuesListAST::current_mExtractedValueTypeName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_switchExtractedValuesListAST::current_mExtractedValueName (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mExtractedValueName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_switchExtractedValuesListAST::current_mMarkedAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_switchExtractedValuesListAST * p = (const cCollectionElement_switchExtractedValuesListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchExtractedValuesListAST) ;
  return p->mObject.mProperty_mMarkedAsUnused ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@switchExtractedValuesListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchExtractedValuesListAST ("switchExtractedValuesListAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchExtractedValuesListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchExtractedValuesListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchExtractedValuesListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_templateInstructionSwitchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpression.objectCompare (p->mProperty_mSwitchExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSwitchExpressionEndLocation.objectCompare (p->mProperty_mSwitchExpressionEndLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateInstructionSwitchBranchList.objectCompare (p->mProperty_mTemplateInstructionSwitchBranchList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_templateInstructionSwitchAST::objectCompare (const GALGAS_templateInstructionSwitchAST & inOperand) const {
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

GALGAS_templateInstructionSwitchAST::GALGAS_templateInstructionSwitchAST (void) :
GALGAS_templateInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST::GALGAS_templateInstructionSwitchAST (const cPtr_templateInstructionSwitchAST * inSourcePtr) :
GALGAS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST GALGAS_templateInstructionSwitchAST::constructor_new (const GALGAS_templateExpressionAST & inAttribute_mSwitchExpression,
                                                                                          const GALGAS_location & inAttribute_mSwitchExpressionEndLocation,
                                                                                          const GALGAS_templateInstructionSwitchBranchListAST & inAttribute_mTemplateInstructionSwitchBranchList
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST result ;
  if (inAttribute_mSwitchExpression.isValid () && inAttribute_mSwitchExpressionEndLocation.isValid () && inAttribute_mTemplateInstructionSwitchBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_templateInstructionSwitchAST (inAttribute_mSwitchExpression, inAttribute_mSwitchExpressionEndLocation, inAttribute_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST GALGAS_templateInstructionSwitchAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mProperty_mSwitchExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateExpressionAST cPtr_templateInstructionSwitchAST::getter_mSwitchExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_templateInstructionSwitchAST::getter_mSwitchExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mProperty_mSwitchExpressionEndLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_templateInstructionSwitchAST::getter_mSwitchExpressionEndLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSwitchExpressionEndLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST GALGAS_templateInstructionSwitchAST::getter_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_templateInstructionSwitchAST * p = (const cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    result = p->mProperty_mTemplateInstructionSwitchBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListAST cPtr_templateInstructionSwitchAST::getter_mTemplateInstructionSwitchBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTemplateInstructionSwitchBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST::setter_setMSwitchExpression (GALGAS_templateExpressionAST inValue
                                                                       COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    p->mProperty_mSwitchExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::setter_setMSwitchExpression (GALGAS_templateExpressionAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSwitchExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST::setter_setMSwitchExpressionEndLocation (GALGAS_location inValue
                                                                                  COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    p->mProperty_mSwitchExpressionEndLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::setter_setMSwitchExpressionEndLocation (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mSwitchExpressionEndLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchAST::setter_setMTemplateInstructionSwitchBranchList (GALGAS_templateInstructionSwitchBranchListAST inValue
                                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_templateInstructionSwitchAST * p = (cPtr_templateInstructionSwitchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchAST) ;
    p->mProperty_mTemplateInstructionSwitchBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchAST::setter_setMTemplateInstructionSwitchBranchList (GALGAS_templateInstructionSwitchBranchListAST inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTemplateInstructionSwitchBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchAST::cPtr_templateInstructionSwitchAST (const GALGAS_templateExpressionAST & in_mSwitchExpression,
                                                                      const GALGAS_location & in_mSwitchExpressionEndLocation,
                                                                      const GALGAS_templateInstructionSwitchBranchListAST & in_mTemplateInstructionSwitchBranchList
                                                                      COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (THERE),
mProperty_mSwitchExpression (in_mSwitchExpression),
mProperty_mSwitchExpressionEndLocation (in_mSwitchExpressionEndLocation),
mProperty_mTemplateInstructionSwitchBranchList (in_mTemplateInstructionSwitchBranchList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_templateInstructionSwitchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

void cPtr_templateInstructionSwitchAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@templateInstructionSwitchAST:" ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSwitchExpressionEndLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_templateInstructionSwitchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchAST (mProperty_mSwitchExpression, mProperty_mSwitchExpressionEndLocation, mProperty_mTemplateInstructionSwitchBranchList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchAST ("templateInstructionSwitchAST",
                                                     & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchAST GALGAS_templateInstructionSwitchAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchAST result ;
  const GALGAS_templateInstructionSwitchAST * p = (const GALGAS_templateInstructionSwitchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateInstructionSwitchBranchListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateInstructionSwitchBranchListForGeneration : public cCollectionElement {
  public : GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                                const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_lstringlist & in_mConstantList,
                                                                                                                                          const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                                                          const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                                                          const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateInstructionSwitchBranchListForGeneration::cCollectionElement_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mConstantList, inElement.mProperty_mExtractedAssociatedValuesForGeneration, inElement.mProperty_mEndOfBranchLocationIndex, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateInstructionSwitchBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateInstructionSwitchBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateInstructionSwitchBranchListForGeneration (mObject.mProperty_mConstantList, mObject.mProperty_mExtractedAssociatedValuesForGeneration, mObject.mProperty_mEndOfBranchLocationIndex, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateInstructionSwitchBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantList" ":" ;
  mObject.mProperty_mConstantList.description (ioString, inIndentation) ;
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
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateInstructionSwitchBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * operand = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration::GALGAS_templateInstructionSwitchBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateInstructionSwitchBranchListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_listWithValue (const GALGAS_lstringlist & inOperand0,
                                                                                                                                            const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                                                            const GALGAS_uint & inOperand2,
                                                                                                                                            const GALGAS_templateInstructionListForGeneration & inOperand3
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_templateInstructionSwitchBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                         const GALGAS_lstringlist & in_mConstantList,
                                                                                         const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                         const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                         const GALGAS_templateInstructionListForGeneration & in_mInstructionList
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (in_mConstantList,
                                                                                      in_mExtractedAssociatedValuesForGeneration,
                                                                                      in_mEndOfBranchLocationIndex,
                                                                                      in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::addAssign_operation (const GALGAS_lstringlist & inOperand0,
                                                                                   const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                   const GALGAS_uint & inOperand2,
                                                                                   const GALGAS_templateInstructionListForGeneration & inOperand3
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_append (GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element inElement,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_insertAtIndex (const GALGAS_lstringlist inOperand0,
                                                                                    const GALGAS_extractedAssociatedValuesForGeneration inOperand1,
                                                                                    const GALGAS_uint inOperand2,
                                                                                    const GALGAS_templateInstructionListForGeneration inOperand3,
                                                                                    const GALGAS_uint inInsertionIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_removeAtIndex (GALGAS_lstringlist & outOperand0,
                                                                                    GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                                    GALGAS_uint & outOperand2,
                                                                                    GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                                    const GALGAS_uint inRemoveIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mConstantList ;
      outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
      outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
      outOperand3 = p->mObject.mProperty_mInstructionList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_popFirst (GALGAS_lstringlist & outOperand0,
                                                                               GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                               GALGAS_uint & outOperand2,
                                                                               GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_popLast (GALGAS_lstringlist & outOperand0,
                                                                              GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                              GALGAS_uint & outOperand2,
                                                                              GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_first (GALGAS_lstringlist & outOperand0,
                                                                            GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                            GALGAS_uint & outOperand2,
                                                                            GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::method_last (GALGAS_lstringlist & outOperand0,
                                                                           GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                                           GALGAS_uint & outOperand2,
                                                                           GALGAS_templateInstructionListForGeneration & outOperand3,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::add_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration & inOperand,
                                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_templateInstructionSwitchBranchListForGeneration result = GALGAS_templateInstructionSwitchBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::plusAssign_operation (const GALGAS_templateInstructionSwitchBranchListForGeneration inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMConstantListAtIndex (GALGAS_lstringlist inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mConstantList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMExtractedAssociatedValuesForGenerationAtIndex (GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                                                                                        GALGAS_uint inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedAssociatedValuesForGeneration = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                              C_Compiler * inCompiler
                                                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMEndOfBranchLocationIndexAtIndex (GALGAS_uint inOperand,
                                                                                                          GALGAS_uint inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranchLocationIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mEndOfBranchLocationIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mEndOfBranchLocationIndex ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateInstructionSwitchBranchListForGeneration::setter_setMInstructionListAtIndex (GALGAS_templateInstructionListForGeneration inOperand,
                                                                                                 GALGAS_uint inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (cCollectionElement_templateInstructionSwitchBranchListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateInstructionSwitchBranchListForGeneration::cEnumerator_templateInstructionSwitchBranchListForGeneration (const GALGAS_templateInstructionSwitchBranchListForGeneration & inEnumeratedObject,
                                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration_2D_element cEnumerator_templateInstructionSwitchBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mConstantList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mConstantList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mEndOfBranchLocationIndex ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration cEnumerator_templateInstructionSwitchBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_templateInstructionSwitchBranchListForGeneration * p = (const cCollectionElement_templateInstructionSwitchBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateInstructionSwitchBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateInstructionSwitchBranchListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ("templateInstructionSwitchBranchListForGeneration",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateInstructionSwitchBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchBranchListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateInstructionSwitchBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateInstructionSwitchBranchListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateInstructionSwitchBranchListForGeneration GALGAS_templateInstructionSwitchBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateInstructionSwitchBranchListForGeneration result ;
  const GALGAS_templateInstructionSwitchBranchListForGeneration * p = (const GALGAS_templateInstructionSwitchBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateInstructionSwitchBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@extractedAssociatedValuesForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_extractedAssociatedValuesForGeneration : public cCollectionElement {
  public : GALGAS_extractedAssociatedValuesForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                      const GALGAS_string & in_mCppName,
                                                                      const GALGAS_uint & in_mIndex
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_extractedAssociatedValuesForGeneration::cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_unifiedTypeMap_2D_proxy & in_mType,
                                                                                                                      const GALGAS_string & in_mCppName,
                                                                                                                      const GALGAS_uint & in_mIndex
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mCppName, in_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_extractedAssociatedValuesForGeneration::cCollectionElement_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mCppName, inElement.mProperty_mIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_extractedAssociatedValuesForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_extractedAssociatedValuesForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_extractedAssociatedValuesForGeneration (mObject.mProperty_mType, mObject.mProperty_mCppName, mObject.mProperty_mIndex COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_extractedAssociatedValuesForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCppName" ":" ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mIndex" ":" ;
  mObject.mProperty_mIndex.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_extractedAssociatedValuesForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_extractedAssociatedValuesForGeneration * operand = (cCollectionElement_extractedAssociatedValuesForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration::GALGAS_extractedAssociatedValuesForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration::GALGAS_extractedAssociatedValuesForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_extractedAssociatedValuesForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::constructor_listWithValue (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_uint & inOperand2
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_extractedAssociatedValuesForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_extractedAssociatedValuesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_append (GALGAS_extractedAssociatedValuesForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_extractedAssociatedValuesForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mType ;
      outOperand1 = p->mObject.mProperty_mCppName ;
      outOperand2 = p->mObject.mProperty_mIndex ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mCppName ;
    outOperand2 = p->mObject.mProperty_mIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_extractedAssociatedValuesForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_extractedAssociatedValuesForGeneration result = GALGAS_extractedAssociatedValuesForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::plusAssign_operation (const GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_setMTypeAtIndex (GALGAS_unifiedTypeMap_2D_proxy inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy GALGAS_extractedAssociatedValuesForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_setMCppNameAtIndex (GALGAS_string inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extractedAssociatedValuesForGeneration::getter_mCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_extractedAssociatedValuesForGeneration::setter_setMIndexAtIndex (GALGAS_uint inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIndex = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_extractedAssociatedValuesForGeneration::getter_mIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_extractedAssociatedValuesForGeneration * p = (cCollectionElement_extractedAssociatedValuesForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
    result = p->mObject.mProperty_mIndex ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_extractedAssociatedValuesForGeneration::cEnumerator_extractedAssociatedValuesForGeneration (const GALGAS_extractedAssociatedValuesForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration_2D_element cEnumerator_extractedAssociatedValuesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_proxy cEnumerator_extractedAssociatedValuesForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_extractedAssociatedValuesForGeneration::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_extractedAssociatedValuesForGeneration::current_mIndex (LOCATION_ARGS) const {
  const cCollectionElement_extractedAssociatedValuesForGeneration * p = (const cCollectionElement_extractedAssociatedValuesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_extractedAssociatedValuesForGeneration) ;
  return p->mObject.mProperty_mIndex ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@extractedAssociatedValuesForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ("extractedAssociatedValuesForGeneration",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extractedAssociatedValuesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extractedAssociatedValuesForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extractedAssociatedValuesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extractedAssociatedValuesForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST::GALGAS_semanticDeclarationAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST::GALGAS_semanticDeclarationAST (const cPtr_semanticDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationAST::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationAST * p = (const cPtr_semanticDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationAST) ;
    result = p->mProperty_mIsPredefined ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticDeclarationAST::getter_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsPredefined ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationAST::setter_setMIsPredefined (GALGAS_bool inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_semanticDeclarationAST * p = (cPtr_semanticDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationAST) ;
    p->mProperty_mIsPredefined = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationAST::setter_setMIsPredefined (GALGAS_bool inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mIsPredefined = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationAST::cPtr_semanticDeclarationAST (const GALGAS_bool & in_mIsPredefined
                                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mIsPredefined (in_mIsPredefined) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationAST ("semanticDeclarationAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST::GALGAS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST::GALGAS_lexicalInstructionAST (const cPtr_lexicalInstructionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalInstructionAST::cPtr_lexicalInstructionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionAST ("lexicalInstructionAST",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalInstructionListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalInstructionListAST : public cCollectionElement {
  public : GALGAS_lexicalInstructionListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalInstructionListAST::cCollectionElement_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalInstructionListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalInstructionListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalInstructionListAST (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalInstructionListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalInstructionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalInstructionListAST * operand = (cCollectionElement_lexicalInstructionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalInstructionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST::GALGAS_lexicalInstructionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalInstructionListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::constructor_listWithValue (const GALGAS_lexicalInstructionAST & inOperand0
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalInstructionListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalInstructionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_lexicalInstructionAST & in_mInstruction
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalInstructionListAST (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::addAssign_operation (const GALGAS_lexicalInstructionAST & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_append (GALGAS_lexicalInstructionListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalInstructionListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalInstructionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result = GALGAS_lexicalInstructionListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::plusAssign_operation (const GALGAS_lexicalInstructionListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalInstructionListAST::setter_setMInstructionAtIndex (GALGAS_lexicalInstructionAST inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST GALGAS_lexicalInstructionListAST::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalInstructionListAST * p = (cCollectionElement_lexicalInstructionListAST *) attributes.ptr () ;
  GALGAS_lexicalInstructionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalInstructionListAST::cEnumerator_lexicalInstructionListAST (const GALGAS_lexicalInstructionListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST_2D_element cEnumerator_lexicalInstructionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionAST cEnumerator_lexicalInstructionListAST::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_lexicalInstructionListAST * p = (const cCollectionElement_lexicalInstructionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalInstructionListAST) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalInstructionListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalInstructionListAST ("lexicalInstructionListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalInstructionListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalInstructionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalInstructionListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@metamodelTemplateDelimitorListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_metamodelTemplateDelimitorListAST : public cCollectionElement {
  public : GALGAS_metamodelTemplateDelimitorListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                 const GALGAS_lstringlist & in_mOptionList,
                                                                 const GALGAS_lstring & in_mEndString
                                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_metamodelTemplateDelimitorListAST::cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_lstring & in_mStartString,
                                                                                                            const GALGAS_lstringlist & in_mOptionList,
                                                                                                            const GALGAS_lstring & in_mEndString
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mStartString, in_mOptionList, in_mEndString) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_metamodelTemplateDelimitorListAST::cCollectionElement_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mStartString, inElement.mProperty_mOptionList, inElement.mProperty_mEndString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_metamodelTemplateDelimitorListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_metamodelTemplateDelimitorListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_metamodelTemplateDelimitorListAST (mObject.mProperty_mStartString, mObject.mProperty_mOptionList, mObject.mProperty_mEndString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_metamodelTemplateDelimitorListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStartString" ":" ;
  mObject.mProperty_mStartString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mProperty_mOptionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndString" ":" ;
  mObject.mProperty_mEndString.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_metamodelTemplateDelimitorListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_metamodelTemplateDelimitorListAST * operand = (cCollectionElement_metamodelTemplateDelimitorListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST::GALGAS_metamodelTemplateDelimitorListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_metamodelTemplateDelimitorListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstringlist & inOperand1,
                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_metamodelTemplateDelimitorListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_metamodelTemplateDelimitorListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_append (GALGAS_metamodelTemplateDelimitorListAST_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_metamodelTemplateDelimitorListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mStartString ;
      outOperand1 = p->mObject.mProperty_mOptionList ;
      outOperand2 = p->mObject.mProperty_mEndString ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mStartString ;
    outOperand1 = p->mObject.mProperty_mOptionList ;
    outOperand2 = p->mObject.mProperty_mEndString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_metamodelTemplateDelimitorListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result = GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::plusAssign_operation (const GALGAS_metamodelTemplateDelimitorListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_setMStartStringAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStartString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST::getter_mStartStringAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    result = p->mObject.mProperty_mStartString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_setMOptionListAtIndex (GALGAS_lstringlist inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_metamodelTemplateDelimitorListAST::getter_mOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    result = p->mObject.mProperty_mOptionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_metamodelTemplateDelimitorListAST::setter_setMEndStringAtIndex (GALGAS_lstring inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_metamodelTemplateDelimitorListAST::getter_mEndStringAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_metamodelTemplateDelimitorListAST * p = (cCollectionElement_metamodelTemplateDelimitorListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
    result = p->mObject.mProperty_mEndString ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_metamodelTemplateDelimitorListAST::cEnumerator_metamodelTemplateDelimitorListAST (const GALGAS_metamodelTemplateDelimitorListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST_2D_element cEnumerator_metamodelTemplateDelimitorListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mStartString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mProperty_mStartString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_metamodelTemplateDelimitorListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mProperty_mOptionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_metamodelTemplateDelimitorListAST::current_mEndString (LOCATION_ARGS) const {
  const cCollectionElement_metamodelTemplateDelimitorListAST * p = (const cCollectionElement_metamodelTemplateDelimitorListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_metamodelTemplateDelimitorListAST) ;
  return p->mObject.mProperty_mEndString ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@metamodelTemplateDelimitorListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ("metamodelTemplateDelimitorListAST",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_metamodelTemplateDelimitorListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_metamodelTemplateDelimitorListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_metamodelTemplateDelimitorListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_metamodelTemplateDelimitorListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@templateReplacementListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_templateReplacementListAST : public cCollectionElement {
  public : GALGAS_templateReplacementListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                          const GALGAS_lstring & in_mReplacementString,
                                                          const GALGAS_lstring & in_mReplacementFunction
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_templateReplacementListAST (const GALGAS_templateReplacementListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GALGAS_lstring & in_mMatchString,
                                                                                              const GALGAS_lstring & in_mReplacementString,
                                                                                              const GALGAS_lstring & in_mReplacementFunction
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMatchString, in_mReplacementString, in_mReplacementFunction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_templateReplacementListAST::cCollectionElement_templateReplacementListAST (const GALGAS_templateReplacementListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMatchString, inElement.mProperty_mReplacementString, inElement.mProperty_mReplacementFunction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_templateReplacementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_templateReplacementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_templateReplacementListAST (mObject.mProperty_mMatchString, mObject.mProperty_mReplacementString, mObject.mProperty_mReplacementFunction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_templateReplacementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMatchString" ":" ;
  mObject.mProperty_mMatchString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementString" ":" ;
  mObject.mProperty_mReplacementString.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mReplacementFunction" ":" ;
  mObject.mProperty_mReplacementFunction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_templateReplacementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_templateReplacementListAST * operand = (cCollectionElement_templateReplacementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_templateReplacementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST::GALGAS_templateReplacementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateReplacementListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateReplacementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_templateReplacementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_templateReplacementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_append (GALGAS_templateReplacementListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_templateReplacementListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mMatchString ;
      outOperand1 = p->mObject.mProperty_mReplacementString ;
      outOperand2 = p->mObject.mProperty_mReplacementFunction ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMatchString ;
    outOperand1 = p->mObject.mProperty_mReplacementString ;
    outOperand2 = p->mObject.mProperty_mReplacementFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_templateReplacementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result = GALGAS_templateReplacementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::plusAssign_operation (const GALGAS_templateReplacementListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_setMMatchStringAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMatchString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateReplacementListAST::getter_mMatchStringAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mMatchString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_setMReplacementStringAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReplacementString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateReplacementListAST::getter_mReplacementStringAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mReplacementString ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_templateReplacementListAST::setter_setMReplacementFunctionAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReplacementFunction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_templateReplacementListAST::getter_mReplacementFunctionAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_templateReplacementListAST * p = (cCollectionElement_templateReplacementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
    result = p->mObject.mProperty_mReplacementFunction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_templateReplacementListAST::cEnumerator_templateReplacementListAST (const GALGAS_templateReplacementListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST_2D_element cEnumerator_templateReplacementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mMatchString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mMatchString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementString (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementString ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_templateReplacementListAST::current_mReplacementFunction (LOCATION_ARGS) const {
  const cCollectionElement_templateReplacementListAST * p = (const cCollectionElement_templateReplacementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_templateReplacementListAST) ;
  return p->mObject.mProperty_mReplacementFunction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@templateReplacementListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateReplacementListAST ("templateReplacementListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_templateReplacementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateReplacementListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_templateReplacementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateReplacementListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST::GALGAS_abstractLexicalRuleAST (const cPtr_abstractLexicalRuleAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRuleAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRuleAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRuleAST::cPtr_abstractLexicalRuleAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractLexicalRuleAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRuleAST ("abstractLexicalRuleAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRuleAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalRuleListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRuleListAST : public cCollectionElement {
  public : GALGAS_lexicalRuleListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalRuleListAST (const GALGAS_lexicalRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRule) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRuleListAST::cCollectionElement_lexicalRuleListAST (const GALGAS_lexicalRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalRule) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRuleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRuleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRuleListAST (mObject.mProperty_mLexicalRule COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRuleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRule" ":" ;
  mObject.mProperty_mLexicalRule.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRuleListAST * operand = (cCollectionElement_lexicalRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST::GALGAS_lexicalRuleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRuleListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::constructor_listWithValue (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRuleListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRuleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRuleListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_abstractLexicalRuleAST & in_mLexicalRule
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRuleListAST (in_mLexicalRule COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::addAssign_operation (const GALGAS_abstractLexicalRuleAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_append (GALGAS_lexicalRuleListAST_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRuleListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mLexicalRule ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRule ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexicalRuleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result = GALGAS_lexicalRuleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::plusAssign_operation (const GALGAS_lexicalRuleListAST inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRuleListAST::setter_setMLexicalRuleAtIndex (GALGAS_abstractLexicalRuleAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalRule = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST GALGAS_lexicalRuleListAST::getter_mLexicalRuleAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRuleListAST * p = (cCollectionElement_lexicalRuleListAST *) attributes.ptr () ;
  GALGAS_abstractLexicalRuleAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
    result = p->mObject.mProperty_mLexicalRule ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalRuleListAST::cEnumerator_lexicalRuleListAST (const GALGAS_lexicalRuleListAST & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST_2D_element cEnumerator_lexicalRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRuleAST cEnumerator_lexicalRuleListAST::current_mLexicalRule (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRuleListAST * p = (const cCollectionElement_lexicalRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRuleListAST) ;
  return p->mObject.mProperty_mLexicalRule ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRuleListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRuleListAST ("lexicalRuleListAST",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRuleListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRuleListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalExplicitRuleAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRuleExpression.objectCompare (p->mProperty_mLexicalRuleExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (void) :
GALGAS_abstractLexicalRuleAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST::GALGAS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) :
GALGAS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExplicitRuleAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExplicitRuleAST GALGAS_lexicalExplicitRuleAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLexicalRuleExpression,
                                                                              const GALGAS_lexicalInstructionListAST & inAttribute_mInstructionList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExplicitRuleAST result ;
  if (inAttribute_mLexicalRuleExpression.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalExplicitRuleAST (inAttribute_mLexicalRuleExpression, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalExplicitRuleAST::getter_mLexicalRuleExpression (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mProperty_mLexicalRuleExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST cPtr_lexicalExplicitRuleAST::getter_mLexicalRuleExpression (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalRuleExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalExplicitRuleAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalExplicitRuleAST * p = (const cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST cPtr_lexicalExplicitRuleAST::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitRuleAST::setter_setMLexicalRuleExpression (GALGAS_lexicalExpressionAST inValue
                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    p->mProperty_mLexicalRuleExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::setter_setMLexicalRuleExpression (GALGAS_lexicalExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalRuleExpression = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExplicitRuleAST::setter_setMInstructionList (GALGAS_lexicalInstructionListAST inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::setter_setMInstructionList (GALGAS_lexicalInstructionListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExplicitRuleAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (const GALGAS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mInstructionList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (THERE),
mProperty_mLexicalRuleExpression (in_mLexicalRuleExpression),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalExplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

void cPtr_lexicalExplicitRuleAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalExplicitRuleAST:" ;
  mProperty_mLexicalRuleExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalExplicitRuleAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalExplicitRuleAST (mProperty_mLexicalRuleExpression, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExplicitRuleAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ("lexicalExplicitRuleAST",
                                               & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExplicitRuleAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExplicitRuleAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalMessageDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalMessageDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalMessageDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                const GALGAS_lstring & in_mMessageValue
                                                                COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lstring & in_mMessageName,
                                                                                                          const GALGAS_lstring & in_mMessageValue
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMessageName, in_mMessageValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalMessageDeclarationListAST::cCollectionElement_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMessageName, inElement.mProperty_mMessageValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalMessageDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalMessageDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalMessageDeclarationListAST (mObject.mProperty_mMessageName, mObject.mProperty_mMessageValue COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalMessageDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageName" ":" ;
  mObject.mProperty_mMessageName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mMessageValue" ":" ;
  mObject.mProperty_mMessageValue.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalMessageDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalMessageDeclarationListAST * operand = (cCollectionElement_lexicalMessageDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST::GALGAS_lexicalMessageDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalMessageDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalMessageDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalMessageDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_append (GALGAS_lexicalMessageDeclarationListAST_2D_element inElement,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalMessageDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mMessageName ;
      outOperand1 = p->mObject.mProperty_mMessageValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mMessageName ;
    outOperand1 = p->mObject.mProperty_mMessageValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexicalMessageDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result = GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::plusAssign_operation (const GALGAS_lexicalMessageDeclarationListAST inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_setMMessageNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessageName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST::getter_mMessageNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalMessageDeclarationListAST::setter_setMMessageValueAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMessageValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalMessageDeclarationListAST::getter_mMessageValueAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalMessageDeclarationListAST * p = (cCollectionElement_lexicalMessageDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
    result = p->mObject.mProperty_mMessageValue ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalMessageDeclarationListAST::cEnumerator_lexicalMessageDeclarationListAST (const GALGAS_lexicalMessageDeclarationListAST & inEnumeratedObject,
                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST_2D_element cEnumerator_lexicalMessageDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalMessageDeclarationListAST::current_mMessageValue (LOCATION_ARGS) const {
  const cCollectionElement_lexicalMessageDeclarationListAST * p = (const cCollectionElement_lexicalMessageDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalMessageDeclarationListAST) ;
  return p->mObject.mProperty_mMessageValue ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalMessageDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ("lexicalMessageDeclarationListAST",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalMessageDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalMessageDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalMessageDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalAttributeListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_lexicalAttributeListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                       const GALGAS_lstring & in_mName
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GALGAS_lstring & in_mTypeName,
                                                                                        const GALGAS_lstring & in_mName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalAttributeListAST::cCollectionElement_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalAttributeListAST (mObject.mProperty_mTypeName, mObject.mProperty_mName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalAttributeListAST * operand = (cCollectionElement_lexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST::GALGAS_lexicalAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalAttributeListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_append (GALGAS_lexicalAttributeListAST_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalAttributeListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result = GALGAS_lexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::plusAssign_operation (const GALGAS_lexicalAttributeListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_setMTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalAttributeListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                             GALGAS_uint inIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalAttributeListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalAttributeListAST * p = (cCollectionElement_lexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalAttributeListAST::cEnumerator_lexicalAttributeListAST (const GALGAS_lexicalAttributeListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST_2D_element cEnumerator_lexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalAttributeListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalAttributeListAST * p = (const cCollectionElement_lexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalAttributeListAST) ;
  return p->mObject.mProperty_mName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalAttributeListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalAttributeListAST ("lexicalAttributeListAST",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalStyleListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalStyleListAST : public cCollectionElement {
  public : GALGAS_lexicalStyleListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                   const GALGAS_lstring & in_mComment
                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalStyleListAST (const GALGAS_lexicalStyleListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GALGAS_lstring & in_mName,
                                                                                const GALGAS_lstring & in_mComment
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mComment) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalStyleListAST::cCollectionElement_lexicalStyleListAST (const GALGAS_lexicalStyleListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mComment) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalStyleListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalStyleListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalStyleListAST (mObject.mProperty_mName, mObject.mProperty_mComment COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalStyleListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mComment" ":" ;
  mObject.mProperty_mComment.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalStyleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalStyleListAST * operand = (cCollectionElement_lexicalStyleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalStyleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST::GALGAS_lexicalStyleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalStyleListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStyleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalStyleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalStyleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                      const GALGAS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_append (GALGAS_lexicalStyleListAST_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalStyleListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mComment ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mComment ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexicalStyleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result = GALGAS_lexicalStyleListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::plusAssign_operation (const GALGAS_lexicalStyleListAST inOperand,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                         GALGAS_uint inIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStyleListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStyleListAST::setter_setMCommentAtIndex (GALGAS_lstring inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mComment = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalStyleListAST::getter_mCommentAtIndex (const GALGAS_uint & inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalStyleListAST * p = (cCollectionElement_lexicalStyleListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
    result = p->mObject.mProperty_mComment ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalStyleListAST::cEnumerator_lexicalStyleListAST (const GALGAS_lexicalStyleListAST & inEnumeratedObject,
                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST_2D_element cEnumerator_lexicalStyleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalStyleListAST::current_mComment (LOCATION_ARGS) const {
  const cCollectionElement_lexicalStyleListAST * p = (const cCollectionElement_lexicalStyleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalStyleListAST) ;
  return p->mObject.mProperty_mComment ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStyleListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStyleListAST ("lexicalStyleListAST",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStyleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStyleListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStyleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStyleListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_terminalDeclarationListAST : public cCollectionElement {
  public : GALGAS_terminalDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                          const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                          const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                          const GALGAS_lstring & in_mStyle,
                                                          const GALGAS_lstringlist & in_mOptionList
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                              const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                              const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                              const GALGAS_lstring & in_mStyle,
                                                                                              const GALGAS_lstringlist & in_mOptionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mSentAttributeList, in_mSyntaxErrorMessage, in_mStyle, in_mOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_terminalDeclarationListAST::cCollectionElement_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mSentAttributeList, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_mStyle, inElement.mProperty_mOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_terminalDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mSentAttributeList, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_mStyle, mObject.mProperty_mOptionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_terminalDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
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
  ioString << "mStyle" ":" ;
  mObject.mProperty_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionList" ":" ;
  mObject.mProperty_mOptionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_terminalDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalDeclarationListAST * operand = (cCollectionElement_terminalDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST::GALGAS_terminalDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_sentLexicalAttributeListAST & inOperand1,
                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                const GALGAS_lstring & inOperand3,
                                                                                                const GALGAS_lstringlist & inOperand4
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_terminalDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_terminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_append (GALGAS_terminalDeclarationListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_terminalDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mSentAttributeList ;
      outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mProperty_mStyle ;
      outOperand4 = p->mObject.mProperty_mOptionList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mSentAttributeList ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mStyle ;
    outOperand4 = p->mObject.mProperty_mOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_terminalDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result = GALGAS_terminalDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::plusAssign_operation (const GALGAS_terminalDeclarationListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMSentAttributeListAtIndex (GALGAS_sentLexicalAttributeListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_terminalDeclarationListAST::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_sentLexicalAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMSyntaxErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalDeclarationListAST::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMStyleAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyle = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_terminalDeclarationListAST::getter_mStyleAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mStyle ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_terminalDeclarationListAST::setter_setMOptionListAtIndex (GALGAS_lstringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_terminalDeclarationListAST::getter_mOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalDeclarationListAST * p = (cCollectionElement_terminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
    result = p->mObject.mProperty_mOptionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_terminalDeclarationListAST::cEnumerator_terminalDeclarationListAST (const GALGAS_terminalDeclarationListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST_2D_element cEnumerator_terminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST cEnumerator_terminalDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_terminalDeclarationListAST::current_mOptionList (LOCATION_ARGS) const {
  const cCollectionElement_terminalDeclarationListAST * p = (const cCollectionElement_terminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalDeclarationListAST) ;
  return p->mObject.mProperty_mOptionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@terminalDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalDeclarationListAST ("terminalDeclarationListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@sentLexicalAttributeListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_sentLexicalAttributeListAST : public cCollectionElement {
  public : GALGAS_sentLexicalAttributeListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                           const GALGAS_lstring & in_mAttributeName
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_lstring & in_mFormalSelector,
                                                                                                const GALGAS_lstring & in_mAttributeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_sentLexicalAttributeListAST::cCollectionElement_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mAttributeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_sentLexicalAttributeListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_sentLexicalAttributeListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_sentLexicalAttributeListAST (mObject.mProperty_mFormalSelector, mObject.mProperty_mAttributeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_sentLexicalAttributeListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalSelector" ":" ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_sentLexicalAttributeListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_sentLexicalAttributeListAST * operand = (cCollectionElement_sentLexicalAttributeListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_sentLexicalAttributeListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST::GALGAS_sentLexicalAttributeListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_sentLexicalAttributeListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sentLexicalAttributeListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_sentLexicalAttributeListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_sentLexicalAttributeListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_append (GALGAS_sentLexicalAttributeListAST_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_sentLexicalAttributeListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mFormalSelector ;
      outOperand1 = p->mObject.mProperty_mAttributeName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mAttributeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_sentLexicalAttributeListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_sentLexicalAttributeListAST result = GALGAS_sentLexicalAttributeListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::plusAssign_operation (const GALGAS_sentLexicalAttributeListAST inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sentLexicalAttributeListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sentLexicalAttributeListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_sentLexicalAttributeListAST * p = (cCollectionElement_sentLexicalAttributeListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_sentLexicalAttributeListAST::cEnumerator_sentLexicalAttributeListAST (const GALGAS_sentLexicalAttributeListAST & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST_2D_element cEnumerator_sentLexicalAttributeListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_sentLexicalAttributeListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_sentLexicalAttributeListAST * p = (const cCollectionElement_sentLexicalAttributeListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_sentLexicalAttributeListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@sentLexicalAttributeListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ("sentLexicalAttributeListAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sentLexicalAttributeListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sentLexicalAttributeListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sentLexicalAttributeListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sentLexicalAttributeListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalListEntryListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListEntryListAST : public cCollectionElement {
  public : GALGAS_lexicalListEntryListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                       const GALGAS_lstring & in_mTerminalSpelling,
                                                       const GALGAS_lstringlist & in_mAttributeList
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lstring & in_mEntrySpelling,
                                                                                        const GALGAS_lstring & in_mTerminalSpelling,
                                                                                        const GALGAS_lstringlist & in_mAttributeList
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntrySpelling, in_mTerminalSpelling, in_mAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListEntryListAST::cCollectionElement_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntrySpelling, inElement.mProperty_mTerminalSpelling, inElement.mProperty_mAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalListEntryListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalListEntryListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListEntryListAST (mObject.mProperty_mEntrySpelling, mObject.mProperty_mTerminalSpelling, mObject.mProperty_mAttributeList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalListEntryListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntrySpelling" ":" ;
  mObject.mProperty_mEntrySpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTerminalSpelling" ":" ;
  mObject.mProperty_mTerminalSpelling.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeList" ":" ;
  mObject.mProperty_mAttributeList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalListEntryListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListEntryListAST * operand = (cCollectionElement_lexicalListEntryListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListEntryListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST::GALGAS_lexicalListEntryListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListEntryListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_lstring & inOperand1,
                                                                                          const GALGAS_lstringlist & inOperand2
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListEntryListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalListEntryListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mEntrySpelling,
                                                                const GALGAS_lstring & in_mTerminalSpelling,
                                                                const GALGAS_lstringlist & in_mAttributeList
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalListEntryListAST (in_mEntrySpelling,
                                                             in_mTerminalSpelling,
                                                             in_mAttributeList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_append (GALGAS_lexicalListEntryListAST_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListEntryListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mEntrySpelling ;
      outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
      outOperand2 = p->mObject.mProperty_mAttributeList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mEntrySpelling ;
    outOperand1 = p->mObject.mProperty_mTerminalSpelling ;
    outOperand2 = p->mObject.mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListEntryListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListEntryListAST result = GALGAS_lexicalListEntryListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::plusAssign_operation (const GALGAS_lexicalListEntryListAST inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMEntrySpellingAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntrySpelling = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListEntryListAST::getter_mEntrySpellingAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mEntrySpelling ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMTerminalSpellingAtIndex (GALGAS_lstring inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTerminalSpelling = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListEntryListAST::getter_mTerminalSpellingAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mTerminalSpelling ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListEntryListAST::setter_setMAttributeListAtIndex (GALGAS_lstringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_lexicalListEntryListAST::getter_mAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListEntryListAST * p = (cCollectionElement_lexicalListEntryListAST *) attributes.ptr () ;
  GALGAS_lstringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
    result = p->mObject.mProperty_mAttributeList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalListEntryListAST::cEnumerator_lexicalListEntryListAST (const GALGAS_lexicalListEntryListAST & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST_2D_element cEnumerator_lexicalListEntryListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mEntrySpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mEntrySpelling ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListEntryListAST::current_mTerminalSpelling (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mTerminalSpelling ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_lexicalListEntryListAST::current_mAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListEntryListAST * p = (const cCollectionElement_lexicalListEntryListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListEntryListAST) ;
  return p->mObject.mProperty_mAttributeList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalListEntryListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListEntryListAST ("lexicalListEntryListAST",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListEntryListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListEntryListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListEntryListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListEntryListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalListDeclarationListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalListDeclarationListAST : public cCollectionElement {
  public : GALGAS_lexicalListDeclarationListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                             const GALGAS_lstring & in_mStyle,
                                                             const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                             const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                             const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lstring & in_mName,
                                                                                                    const GALGAS_lstring & in_mStyle,
                                                                                                    const GALGAS_lstring & in_mSyntaxErrorMessage,
                                                                                                    const GALGAS_sentLexicalAttributeListAST & in_mSentAttributeList,
                                                                                                    const GALGAS_lexicalListEntryListAST & in_mEntryList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mName, in_mStyle, in_mSyntaxErrorMessage, in_mSentAttributeList, in_mEntryList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalListDeclarationListAST::cCollectionElement_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mName, inElement.mProperty_mStyle, inElement.mProperty_mSyntaxErrorMessage, inElement.mProperty_mSentAttributeList, inElement.mProperty_mEntryList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalListDeclarationListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalListDeclarationListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalListDeclarationListAST (mObject.mProperty_mName, mObject.mProperty_mStyle, mObject.mProperty_mSyntaxErrorMessage, mObject.mProperty_mSentAttributeList, mObject.mProperty_mEntryList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalListDeclarationListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mName" ":" ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStyle" ":" ;
  mObject.mProperty_mStyle.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSyntaxErrorMessage" ":" ;
  mObject.mProperty_mSyntaxErrorMessage.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSentAttributeList" ":" ;
  mObject.mProperty_mSentAttributeList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEntryList" ":" ;
  mObject.mProperty_mEntryList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalListDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalListDeclarationListAST * operand = (cCollectionElement_lexicalListDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalListDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST::GALGAS_lexicalListDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalListDeclarationListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1,
                                                                                                      const GALGAS_lstring & inOperand2,
                                                                                                      const GALGAS_sentLexicalAttributeListAST & inOperand3,
                                                                                                      const GALGAS_lexicalListEntryListAST & inOperand4
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalListDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_lexicalListDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalListDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_append (GALGAS_lexicalListDeclarationListAST_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalListDeclarationListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mName ;
      outOperand1 = p->mObject.mProperty_mStyle ;
      outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
      outOperand3 = p->mObject.mProperty_mSentAttributeList ;
      outOperand4 = p->mObject.mProperty_mEntryList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mName ;
    outOperand1 = p->mObject.mProperty_mStyle ;
    outOperand2 = p->mObject.mProperty_mSyntaxErrorMessage ;
    outOperand3 = p->mObject.mProperty_mSentAttributeList ;
    outOperand4 = p->mObject.mProperty_mEntryList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexicalListDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result = GALGAS_lexicalListDeclarationListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::plusAssign_operation (const GALGAS_lexicalListDeclarationListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMStyleAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mStyle = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mStyleAtIndex (const GALGAS_uint & inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mStyle ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMSyntaxErrorMessageAtIndex (GALGAS_lstring inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxErrorMessage = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalListDeclarationListAST::getter_mSyntaxErrorMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSyntaxErrorMessage ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMSentAttributeListAtIndex (GALGAS_sentLexicalAttributeListAST inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSentAttributeList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST GALGAS_lexicalListDeclarationListAST::getter_mSentAttributeListAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_sentLexicalAttributeListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mSentAttributeList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalListDeclarationListAST::setter_setMEntryListAtIndex (GALGAS_lexicalListEntryListAST inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEntryList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST GALGAS_lexicalListDeclarationListAST::getter_mEntryListAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalListDeclarationListAST * p = (cCollectionElement_lexicalListDeclarationListAST *) attributes.ptr () ;
  GALGAS_lexicalListEntryListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
    result = p->mObject.mProperty_mEntryList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalListDeclarationListAST::cEnumerator_lexicalListDeclarationListAST (const GALGAS_lexicalListDeclarationListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST_2D_element cEnumerator_lexicalListDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mStyle (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mStyle ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalListDeclarationListAST::current_mSyntaxErrorMessage (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSyntaxErrorMessage ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sentLexicalAttributeListAST cEnumerator_lexicalListDeclarationListAST::current_mSentAttributeList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mSentAttributeList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListEntryListAST cEnumerator_lexicalListDeclarationListAST::current_mEntryList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalListDeclarationListAST * p = (const cCollectionElement_lexicalListDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalListDeclarationListAST) ;
  return p->mObject.mProperty_mEntryList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalListDeclarationListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ("lexicalListDeclarationListAST",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalListDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalListDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalListDeclarationListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalOrExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLeftOperand.objectCompare (p->mProperty_mLeftOperand) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightOperand.objectCompare (p->mProperty_mRightOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (void) :
GALGAS_lexicalExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST::GALGAS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) :
GALGAS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalOrExpressionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalOrExpressionAST GALGAS_lexicalOrExpressionAST::constructor_new (const GALGAS_lexicalExpressionAST & inAttribute_mLeftOperand,
                                                                              const GALGAS_lexicalExpressionAST & inAttribute_mRightOperand
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalOrExpressionAST result ;
  if (inAttribute_mLeftOperand.isValid () && inAttribute_mRightOperand.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalOrExpressionAST (inAttribute_mLeftOperand, inAttribute_mRightOperand COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mProperty_mLeftOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST cPtr_lexicalOrExpressionAST::getter_mLeftOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalOrExpressionAST::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalOrExpressionAST * p = (const cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    result = p->mProperty_mRightOperand ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST cPtr_lexicalOrExpressionAST::getter_mRightOperand (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightOperand ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalOrExpressionAST::setter_setMLeftOperand (GALGAS_lexicalExpressionAST inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    p->mProperty_mLeftOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::setter_setMLeftOperand (GALGAS_lexicalExpressionAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLeftOperand = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalOrExpressionAST::setter_setMRightOperand (GALGAS_lexicalExpressionAST inValue
                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    p->mProperty_mRightOperand = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::setter_setMRightOperand (GALGAS_lexicalExpressionAST inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRightOperand = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalOrExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (const GALGAS_lexicalExpressionAST & in_mLeftOperand,
                                                          const GALGAS_lexicalExpressionAST & in_mRightOperand
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (THERE),
mProperty_mLeftOperand (in_mLeftOperand),
mProperty_mRightOperand (in_mRightOperand) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

void cPtr_lexicalOrExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalOrExpressionAST:" ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalOrExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalOrExpressionAST (mProperty_mLeftOperand, mProperty_mRightOperand COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalOrExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalOrExpressionAST ("lexicalOrExpressionAST",
                                               & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalOrExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalOrExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalSendSearchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSendSearchListAST : public cCollectionElement {
  public : GALGAS_lexicalSendSearchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                        const GALGAS_lstring & in_mSearchListName
                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GALGAS_lstring & in_mAttributeName,
                                                                                          const GALGAS_lstring & in_mSearchListName
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAttributeName, in_mSearchListName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSendSearchListAST::cCollectionElement_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mSearchListName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalSendSearchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalSendSearchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSendSearchListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mSearchListName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalSendSearchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mAttributeName" ":" ;
  mObject.mProperty_mAttributeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSearchListName" ":" ;
  mObject.mProperty_mSearchListName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalSendSearchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSendSearchListAST * operand = (cCollectionElement_lexicalSendSearchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSendSearchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST::GALGAS_lexicalSendSearchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSendSearchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSendSearchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSendSearchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSendSearchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                           const GALGAS_lstring & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_append (GALGAS_lexicalSendSearchListAST_2D_element inElement,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSendSearchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mAttributeName ;
      outOperand1 = p->mObject.mProperty_mSearchListName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mAttributeName ;
    outOperand1 = p->mObject.mProperty_mSearchListName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalSendSearchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result = GALGAS_lexicalSendSearchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::plusAssign_operation (const GALGAS_lexicalSendSearchListAST inOperand,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_setMAttributeNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAttributeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendSearchListAST::getter_mAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    result = p->mObject.mProperty_mAttributeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSendSearchListAST::setter_setMSearchListNameAtIndex (GALGAS_lstring inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSearchListName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalSendSearchListAST::getter_mSearchListNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSendSearchListAST * p = (cCollectionElement_lexicalSendSearchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
    result = p->mObject.mProperty_mSearchListName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalSendSearchListAST::cEnumerator_lexicalSendSearchListAST (const GALGAS_lexicalSendSearchListAST & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST_2D_element cEnumerator_lexicalSendSearchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mAttributeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalSendSearchListAST::current_mSearchListName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSendSearchListAST * p = (const cCollectionElement_lexicalSendSearchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSendSearchListAST) ;
  return p->mObject.mProperty_mSearchListName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendSearchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendSearchListAST ("lexicalSendSearchListAST",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendSearchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendSearchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendSearchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendSearchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST::GALGAS_lexicalSendDefaultActionAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST::GALGAS_lexicalSendDefaultActionAST (const cPtr_lexicalSendDefaultActionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendDefaultActionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendDefaultActionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSendDefaultActionAST::cPtr_lexicalSendDefaultActionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSendDefaultActionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ("lexicalSendDefaultActionAST",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSendDefaultActionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSendDefaultActionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSendDefaultActionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalStructuredSendInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalStructuredSendInstructionAST * p = (const cPtr_lexicalStructuredSendInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalSendSearchList.objectCompare (p->mProperty_mLexicalSendSearchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalSendDefaultAction.objectCompare (p->mProperty_mLexicalSendDefaultAction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST::GALGAS_lexicalStructuredSendInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST::GALGAS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStructuredSendInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStructuredSendInstructionAST GALGAS_lexicalStructuredSendInstructionAST::constructor_new (const GALGAS_lexicalSendSearchListAST & inAttribute_mLexicalSendSearchList,
                                                                                                        const GALGAS_lexicalSendDefaultActionAST & inAttribute_mLexicalSendDefaultAction
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalStructuredSendInstructionAST result ;
  if (inAttribute_mLexicalSendSearchList.isValid () && inAttribute_mLexicalSendDefaultAction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalStructuredSendInstructionAST (inAttribute_mLexicalSendSearchList, inAttribute_mLexicalSendDefaultAction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST GALGAS_lexicalStructuredSendInstructionAST::getter_mLexicalSendSearchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendSearchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (const cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    result = p->mProperty_mLexicalSendSearchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendSearchListAST cPtr_lexicalStructuredSendInstructionAST::getter_mLexicalSendSearchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalSendSearchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST GALGAS_lexicalStructuredSendInstructionAST::getter_mLexicalSendDefaultAction (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSendDefaultActionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (const cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    result = p->mProperty_mLexicalSendDefaultAction ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSendDefaultActionAST cPtr_lexicalStructuredSendInstructionAST::getter_mLexicalSendDefaultAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalSendDefaultAction ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStructuredSendInstructionAST::setter_setMLexicalSendSearchList (GALGAS_lexicalSendSearchListAST inValue
                                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    p->mProperty_mLexicalSendSearchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::setter_setMLexicalSendSearchList (GALGAS_lexicalSendSearchListAST inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalSendSearchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalStructuredSendInstructionAST::setter_setMLexicalSendDefaultAction (GALGAS_lexicalSendDefaultActionAST inValue
                                                                                      COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    p->mProperty_mLexicalSendDefaultAction = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::setter_setMLexicalSendDefaultAction (GALGAS_lexicalSendDefaultActionAST inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalSendDefaultAction = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStructuredSendInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GALGAS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
                                                                                    const GALGAS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalSendSearchList (in_mLexicalSendSearchList),
mProperty_mLexicalSendDefaultAction (in_mLexicalSendDefaultAction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalStructuredSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

void cPtr_lexicalStructuredSendInstructionAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@lexicalStructuredSendInstructionAST:" ;
  mProperty_mLexicalSendSearchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalSendDefaultAction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalStructuredSendInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalStructuredSendInstructionAST (mProperty_mLexicalSendSearchList, mProperty_mLexicalSendDefaultAction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalStructuredSendInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ("lexicalStructuredSendInstructionAST",
                                                            & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalStructuredSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalStructuredSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalStructuredSendInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalWhileBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalWhileBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalWhileBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                         const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalExpressionAST & in_mWhileExpression,
                                                                                            const GALGAS_lexicalInstructionListAST & in_mWhileInstructionList
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mWhileExpression, in_mWhileInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalWhileBranchListAST::cCollectionElement_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mWhileExpression, inElement.mProperty_mWhileInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalWhileBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalWhileBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalWhileBranchListAST (mObject.mProperty_mWhileExpression, mObject.mProperty_mWhileInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalWhileBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileExpression" ":" ;
  mObject.mProperty_mWhileExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mWhileInstructionList" ":" ;
  mObject.mProperty_mWhileInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalWhileBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalWhileBranchListAST * operand = (cCollectionElement_lexicalWhileBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalWhileBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST::GALGAS_lexicalWhileBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalWhileBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                              const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalWhileBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalWhileBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalWhileBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                            const GALGAS_lexicalInstructionListAST & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_append (GALGAS_lexicalWhileBranchListAST_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalWhileBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mWhileExpression ;
      outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mWhileExpression ;
    outOperand1 = p->mObject.mProperty_mWhileInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalWhileBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result = GALGAS_lexicalWhileBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::plusAssign_operation (const GALGAS_lexicalWhileBranchListAST inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_setMWhileExpressionAtIndex (GALGAS_lexicalExpressionAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mWhileExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalWhileBranchListAST::getter_mWhileExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    result = p->mObject.mProperty_mWhileExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalWhileBranchListAST::setter_setMWhileInstructionListAtIndex (GALGAS_lexicalInstructionListAST inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mWhileInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalWhileBranchListAST::getter_mWhileInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalWhileBranchListAST * p = (cCollectionElement_lexicalWhileBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
    result = p->mObject.mProperty_mWhileInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalWhileBranchListAST::cEnumerator_lexicalWhileBranchListAST (const GALGAS_lexicalWhileBranchListAST & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST_2D_element cEnumerator_lexicalWhileBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST cEnumerator_lexicalWhileBranchListAST::current_mWhileExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST cEnumerator_lexicalWhileBranchListAST::current_mWhileInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalWhileBranchListAST * p = (const cCollectionElement_lexicalWhileBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalWhileBranchListAST) ;
  return p->mObject.mProperty_mWhileInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalWhileBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ("lexicalWhileBranchListAST",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalWhileBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalWhileBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalWhileBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalRepeatInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mRepeatedInstructionList.objectCompare (p->mProperty_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalWhileBranchList.objectCompare (p->mProperty_mLexicalWhileBranchList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRepeatInstructionAST::constructor_new (GALGAS_lexicalInstructionListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalWhileBranchListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST::GALGAS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRepeatInstructionAST GALGAS_lexicalRepeatInstructionAST::constructor_new (const GALGAS_lexicalInstructionListAST & inAttribute_mRepeatedInstructionList,
                                                                                        const GALGAS_lexicalWhileBranchListAST & inAttribute_mLexicalWhileBranchList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRepeatInstructionAST result ;
  if (inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mLexicalWhileBranchList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRepeatInstructionAST (inAttribute_mRepeatedInstructionList, inAttribute_mLexicalWhileBranchList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalRepeatInstructionAST::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    result = p->mProperty_mRepeatedInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST cPtr_lexicalRepeatInstructionAST::getter_mRepeatedInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRepeatedInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST GALGAS_lexicalRepeatInstructionAST::getter_mLexicalWhileBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalWhileBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalRepeatInstructionAST * p = (const cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    result = p->mProperty_mLexicalWhileBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalWhileBranchListAST cPtr_lexicalRepeatInstructionAST::getter_mLexicalWhileBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalWhileBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRepeatInstructionAST::setter_setMRepeatedInstructionList (GALGAS_lexicalInstructionListAST inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    p->mProperty_mRepeatedInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::setter_setMRepeatedInstructionList (GALGAS_lexicalInstructionListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRepeatedInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRepeatInstructionAST::setter_setMLexicalWhileBranchList (GALGAS_lexicalWhileBranchListAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    p->mProperty_mLexicalWhileBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::setter_setMLexicalWhileBranchList (GALGAS_lexicalWhileBranchListAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalWhileBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRepeatInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GALGAS_lexicalInstructionListAST & in_mRepeatedInstructionList,
                                                                    const GALGAS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mRepeatedInstructionList (in_mRepeatedInstructionList),
mProperty_mLexicalWhileBranchList (in_mLexicalWhileBranchList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalRepeatInstructionAST:" ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRepeatInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mProperty_mRepeatedInstructionList, mProperty_mLexicalWhileBranchList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRepeatInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRepeatInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRepeatInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalSelectBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalSelectBranchListAST : public cCollectionElement {
  public : GALGAS_lexicalSelectBranchListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                          const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalExpressionAST & in_mSelectExpression,
                                                                                              const GALGAS_lexicalInstructionListAST & in_mSelectInstructionList
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSelectExpression, in_mSelectInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalSelectBranchListAST::cCollectionElement_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSelectExpression, inElement.mProperty_mSelectInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalSelectBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalSelectBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalSelectBranchListAST (mObject.mProperty_mSelectExpression, mObject.mProperty_mSelectInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalSelectBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectExpression" ":" ;
  mObject.mProperty_mSelectExpression.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mSelectInstructionList" ":" ;
  mObject.mProperty_mSelectInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalSelectBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalSelectBranchListAST * operand = (cCollectionElement_lexicalSelectBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalSelectBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST::GALGAS_lexicalSelectBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalSelectBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::constructor_listWithValue (const GALGAS_lexicalExpressionAST & inOperand0,
                                                                                                const GALGAS_lexicalInstructionListAST & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalSelectBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalSelectBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::addAssign_operation (const GALGAS_lexicalExpressionAST & inOperand0,
                                                             const GALGAS_lexicalInstructionListAST & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_append (GALGAS_lexicalSelectBranchListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalSelectBranchListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mSelectExpression ;
      outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mSelectExpression ;
    outOperand1 = p->mObject.mProperty_mSelectInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result = GALGAS_lexicalSelectBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::plusAssign_operation (const GALGAS_lexicalSelectBranchListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_setMSelectExpressionAtIndex (GALGAS_lexicalExpressionAST inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST GALGAS_lexicalSelectBranchListAST::getter_mSelectExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalExpressionAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    result = p->mObject.mProperty_mSelectExpression ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectBranchListAST::setter_setMSelectInstructionListAtIndex (GALGAS_lexicalInstructionListAST inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSelectInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectBranchListAST::getter_mSelectInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalSelectBranchListAST * p = (cCollectionElement_lexicalSelectBranchListAST *) attributes.ptr () ;
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
    result = p->mObject.mProperty_mSelectInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalSelectBranchListAST::cEnumerator_lexicalSelectBranchListAST (const GALGAS_lexicalSelectBranchListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST_2D_element cEnumerator_lexicalSelectBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExpressionAST cEnumerator_lexicalSelectBranchListAST::current_mSelectExpression (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectExpression ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST cEnumerator_lexicalSelectBranchListAST::current_mSelectInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_lexicalSelectBranchListAST * p = (const cCollectionElement_lexicalSelectBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalSelectBranchListAST) ;
  return p->mObject.mProperty_mSelectInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSelectBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ("lexicalSelectBranchListAST",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSelectBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSelectBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalSelectInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalSelectBranchList.objectCompare (p->mProperty_mLexicalSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultInstructionList.objectCompare (p->mProperty_mDefaultInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalSelectInstructionAST::constructor_new (GALGAS_lexicalSelectBranchListAST::constructor_emptyList (HERE),
                                                              GALGAS_lexicalInstructionListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST::GALGAS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectInstructionAST GALGAS_lexicalSelectInstructionAST::constructor_new (const GALGAS_lexicalSelectBranchListAST & inAttribute_mLexicalSelectBranchList,
                                                                                        const GALGAS_lexicalInstructionListAST & inAttribute_mDefaultInstructionList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalSelectInstructionAST result ;
  if (inAttribute_mLexicalSelectBranchList.isValid () && inAttribute_mDefaultInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalSelectInstructionAST (inAttribute_mLexicalSelectBranchList, inAttribute_mDefaultInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST GALGAS_lexicalSelectInstructionAST::getter_mLexicalSelectBranchList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalSelectBranchListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    result = p->mProperty_mLexicalSelectBranchList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalSelectBranchListAST cPtr_lexicalSelectInstructionAST::getter_mLexicalSelectBranchList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLexicalSelectBranchList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST GALGAS_lexicalSelectInstructionAST::getter_mDefaultInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalSelectInstructionAST * p = (const cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    result = p->mProperty_mDefaultInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalInstructionListAST cPtr_lexicalSelectInstructionAST::getter_mDefaultInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectInstructionAST::setter_setMLexicalSelectBranchList (GALGAS_lexicalSelectBranchListAST inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    p->mProperty_mLexicalSelectBranchList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::setter_setMLexicalSelectBranchList (GALGAS_lexicalSelectBranchListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLexicalSelectBranchList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalSelectInstructionAST::setter_setMDefaultInstructionList (GALGAS_lexicalInstructionListAST inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    p->mProperty_mDefaultInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::setter_setMDefaultInstructionList (GALGAS_lexicalInstructionListAST inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mDefaultInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSelectInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GALGAS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GALGAS_lexicalInstructionListAST & in_mDefaultInstructionList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalSelectBranchList (in_mLexicalSelectBranchList),
mProperty_mDefaultInstructionList (in_mDefaultInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalSelectInstructionAST:" ;
  mProperty_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalSelectInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mProperty_mLexicalSelectBranchList, mProperty_mDefaultInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalSelectInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalSelectInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalSelectInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST::GALGAS_abstractLexicalRoutineActualArgumentAST (const cPtr_abstractLexicalRoutineActualArgumentAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractLexicalRoutineActualArgumentAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_abstractLexicalRoutineActualArgumentAST::getter_mActualPassingModeLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractLexicalRoutineActualArgumentAST * p = (const cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    result = p->mProperty_mActualPassingModeLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_abstractLexicalRoutineActualArgumentAST::getter_mActualPassingModeLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActualPassingModeLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractLexicalRoutineActualArgumentAST::setter_setMActualPassingModeLocation (GALGAS_location inValue
                                                                                           COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_abstractLexicalRoutineActualArgumentAST * p = (cPtr_abstractLexicalRoutineActualArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    p->mProperty_mActualPassingModeLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractLexicalRoutineActualArgumentAST::setter_setMActualPassingModeLocation (GALGAS_location inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActualPassingModeLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractLexicalRoutineActualArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractLexicalRoutineActualArgumentAST::cPtr_abstractLexicalRoutineActualArgumentAST (const GALGAS_location & in_mActualPassingModeLocation
                                                                                            COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mActualPassingModeLocation (in_mActualPassingModeLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractLexicalRoutineActualArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ("abstractLexicalRoutineActualArgumentAST",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractLexicalRoutineActualArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractLexicalRoutineActualArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractLexicalRoutineActualArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalRoutineCallActualArgumentListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalRoutineCallActualArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalRoutineActualArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalRoutineCallActualArgumentListAST::cCollectionElement_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalRoutineActualArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalRoutineCallActualArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalRoutineCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalRoutineCallActualArgumentListAST (mObject.mProperty_mLexicalRoutineActualArgument COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalRoutineCallActualArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineActualArgument" ":" ;
  mObject.mProperty_mLexicalRoutineActualArgument.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalRoutineCallActualArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * operand = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST::GALGAS_lexicalRoutineCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalRoutineCallActualArgumentListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_listWithValue (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRoutineCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalRoutineCallActualArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractLexicalRoutineActualArgumentAST & in_mLexicalRoutineActualArgument
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (in_mLexicalRoutineActualArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::addAssign_operation (const GALGAS_abstractLexicalRoutineActualArgumentAST & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_append (GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineCallActualArgumentListAST result = GALGAS_lexicalRoutineCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalRoutineCallActualArgumentListAST inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalRoutineCallActualArgumentListAST::setter_setMLexicalRoutineActualArgumentAtIndex (GALGAS_abstractLexicalRoutineActualArgumentAST inOperand,
                                                                                                     GALGAS_uint inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalRoutineActualArgument = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST GALGAS_lexicalRoutineCallActualArgumentListAST::getter_mLexicalRoutineActualArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (cCollectionElement_lexicalRoutineCallActualArgumentListAST *) attributes.ptr () ;
  GALGAS_abstractLexicalRoutineActualArgumentAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalRoutineActualArgument ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalRoutineCallActualArgumentListAST::cEnumerator_lexicalRoutineCallActualArgumentListAST (const GALGAS_lexicalRoutineCallActualArgumentListAST & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineCallActualArgumentListAST_2D_element cEnumerator_lexicalRoutineCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractLexicalRoutineActualArgumentAST cEnumerator_lexicalRoutineCallActualArgumentListAST::current_mLexicalRoutineActualArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalRoutineCallActualArgumentListAST * p = (const cCollectionElement_lexicalRoutineCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalRoutineCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalRoutineActualArgument ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineCallActualArgumentListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ("lexicalRoutineCallActualArgumentListAST",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineCallActualArgumentListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRoutineOrFunctionFormalInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRoutineOrFunctionFormalInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ("lexicalRoutineOrFunctionFormalInputArgumentAST",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFormalInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFormalInputArgumentAST * p = (const cPtr_lexicalFormalInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mActualPassingModeLocation.objectCompare (p->mProperty_mActualPassingModeLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRoutineOrFunctionFormalInputArgument.objectCompare (p->mProperty_mRoutineOrFunctionFormalInputArgument) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (void) :
GALGAS_abstractLexicalRoutineActualArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST::GALGAS_lexicalFormalInputArgumentAST (const cPtr_lexicalFormalInputArgumentAST * inSourcePtr) :
GALGAS_abstractLexicalRoutineActualArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFormalInputArgumentAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mActualPassingModeLocation,
                                                                                            const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inAttribute_mRoutineOrFunctionFormalInputArgument
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFormalInputArgumentAST result ;
  if (inAttribute_mActualPassingModeLocation.isValid () && inAttribute_mRoutineOrFunctionFormalInputArgument.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFormalInputArgumentAST (inAttribute_mActualPassingModeLocation, inAttribute_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFormalInputArgumentAST::getter_mRoutineOrFunctionFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalFormalInputArgumentAST * p = (const cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    result = p->mProperty_mRoutineOrFunctionFormalInputArgument ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST cPtr_lexicalFormalInputArgumentAST::getter_mRoutineOrFunctionFormalInputArgument (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRoutineOrFunctionFormalInputArgument ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFormalInputArgumentAST::setter_setMRoutineOrFunctionFormalInputArgument (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inValue
                                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalFormalInputArgumentAST * p = (cPtr_lexicalFormalInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFormalInputArgumentAST) ;
    p->mProperty_mRoutineOrFunctionFormalInputArgument = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalFormalInputArgumentAST::setter_setMRoutineOrFunctionFormalInputArgument (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRoutineOrFunctionFormalInputArgument = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFormalInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFormalInputArgumentAST::cPtr_lexicalFormalInputArgumentAST (const GALGAS_location & in_mActualPassingModeLocation,
                                                                        const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mRoutineOrFunctionFormalInputArgument
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRoutineActualArgumentAST (in_mActualPassingModeLocation COMMA_THERE),
mProperty_mRoutineOrFunctionFormalInputArgument (in_mRoutineOrFunctionFormalInputArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFormalInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

void cPtr_lexicalFormalInputArgumentAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@lexicalFormalInputArgumentAST:" ;
  mProperty_mActualPassingModeLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRoutineOrFunctionFormalInputArgument.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFormalInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFormalInputArgumentAST (mProperty_mActualPassingModeLocation, mProperty_mRoutineOrFunctionFormalInputArgument COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFormalInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ("lexicalFormalInputArgumentAST",
                                                      & kTypeDescriptor_GALGAS_abstractLexicalRoutineActualArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFormalInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFormalInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFormalInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFormalInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalFunctionCallActualArgumentListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalFunctionCallActualArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalActualInputArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalFunctionCallActualArgumentListAST::cCollectionElement_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalActualInputArgument) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalFunctionCallActualArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalFunctionCallActualArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalFunctionCallActualArgumentListAST (mObject.mProperty_mLexicalActualInputArgument COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalFunctionCallActualArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalActualInputArgument" ":" ;
  mObject.mProperty_mLexicalActualInputArgument.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalFunctionCallActualArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * operand = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST::GALGAS_lexicalFunctionCallActualArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallActualArgumentListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_listWithValue (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallActualArgumentListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_lexicalFunctionCallActualArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & in_mLexicalActualInputArgument
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (in_mLexicalActualInputArgument COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::addAssign_operation (const GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST & inOperand0
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_append (GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element inElement,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallActualArgumentListAST result = GALGAS_lexicalFunctionCallActualArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::plusAssign_operation (const GALGAS_lexicalFunctionCallActualArgumentListAST inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalFunctionCallActualArgumentListAST::setter_setMLexicalActualInputArgumentAtIndex (GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST inOperand,
                                                                                                    GALGAS_uint inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalActualInputArgument = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST GALGAS_lexicalFunctionCallActualArgumentListAST::getter_mLexicalActualInputArgumentAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (cCollectionElement_lexicalFunctionCallActualArgumentListAST *) attributes.ptr () ;
  GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalActualInputArgument ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalFunctionCallActualArgumentListAST::cEnumerator_lexicalFunctionCallActualArgumentListAST (const GALGAS_lexicalFunctionCallActualArgumentListAST & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallActualArgumentListAST_2D_element cEnumerator_lexicalFunctionCallActualArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST cEnumerator_lexicalFunctionCallActualArgumentListAST::current_mLexicalActualInputArgument (LOCATION_ARGS) const {
  const cCollectionElement_lexicalFunctionCallActualArgumentListAST * p = (const cCollectionElement_lexicalFunctionCallActualArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalFunctionCallActualArgumentListAST) ;
  return p->mObject.mProperty_mLexicalActualInputArgument ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCallActualArgumentListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ("lexicalFunctionCallActualArgumentListAST",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallActualArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallActualArgumentListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallActualArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallActualArgumentListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalCurrentCharacterInputArgumentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalCurrentCharacterInputArgumentAST * p = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (void) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST::GALGAS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) :
GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalCurrentCharacterInputArgumentAST GALGAS_lexicalCurrentCharacterInputArgumentAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalCurrentCharacterInputArgumentAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalCurrentCharacterInputArgumentAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_lexicalCurrentCharacterInputArgumentAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexicalCurrentCharacterInputArgumentAST * p = (const cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cPtr_lexicalCurrentCharacterInputArgumentAST::getter_mLocation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLocation ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalCurrentCharacterInputArgumentAST::setter_setMLocation (GALGAS_location inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_lexicalCurrentCharacterInputArgumentAST * p = (cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
    p->mProperty_mLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::setter_setMLocation (GALGAS_location inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mLocation = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCurrentCharacterInputArgumentAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (const GALGAS_location & in_mLocation
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalCurrentCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

void cPtr_lexicalCurrentCharacterInputArgumentAST::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@lexicalCurrentCharacterInputArgumentAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalCurrentCharacterInputArgumentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalCurrentCharacterInputArgumentAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalCurrentCharacterInputArgumentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ("lexicalCurrentCharacterInputArgumentAST",
                                                                & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalCurrentCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalCurrentCharacterInputArgumentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalCurrentCharacterInputArgumentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalLogInstructionAST::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalLogInstructionAST::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST::GALGAS_lexicalLogInstructionAST (const cPtr_lexicalLogInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalLogInstructionAST) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalLogInstructionAST GALGAS_lexicalLogInstructionAST::constructor_new (LOCATION_ARGS) {
  GALGAS_lexicalLogInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalLogInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalLogInstructionAST::cPtr_lexicalLogInstructionAST (LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalLogInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

void cPtr_lexicalLogInstructionAST::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "[@lexicalLogInstructionAST]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalLogInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalLogInstructionAST (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalLogInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalLogInstructionAST ("lexicalLogInstructionAST",
                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalLogInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalLogInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalLogInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalLogInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST::GALGAS_lexicalArgumentModeAST (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalArgumentModeAST::constructor_lexicalInputOutputMode (UNUSED_LOCATION_ARGS) {
  GALGAS_lexicalArgumentModeAST result ;
  result.mEnum = kEnum_lexicalInputOutputMode ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalArgumentModeAST::optional_lexicalInputMode () const {
  const bool ok = mEnum == kEnum_lexicalInputMode ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexicalArgumentModeAST::optional_lexicalInputOutputMode () const {
  const bool ok = mEnum == kEnum_lexicalInputOutputMode ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_lexicalArgumentModeAST [3] = {
  "(not built)",
  "lexicalInputMode",
  "lexicalInputOutputMode"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexicalArgumentModeAST::getter_isLexicalInputOutputMode (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lexicalInputOutputMode == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalArgumentModeAST::description (C_String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString << "<enum @lexicalArgumentModeAST: " << gEnumNameArrayFor_lexicalArgumentModeAST [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalArgumentModeAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalArgumentModeAST ("lexicalArgumentModeAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalArgumentModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalArgumentModeAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalArgumentModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalArgumentModeAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST lexicalFormalModeName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_lexicalFormalModeName (const GALGAS_lexicalArgumentModeAST & inObject,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST cppConstInFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cppConstInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string ("const ") ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST cppReferenceInFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cppReferenceInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string (" &") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@lexicalArgumentModeAST cocoaPointerInFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_cocoaPointerInFormalArgument (const GALGAS_lexicalArgumentModeAST & inObject,
                                                            C_Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexicalArgumentModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_lexicalArgumentModeAST::kNotBuilt:
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputMode:
    {
      result_result = GALGAS_string::makeEmptyString () ;
    }
    break ;
  case GALGAS_lexicalArgumentModeAST::kEnum_lexicalInputOutputMode:
    {
      result_result = GALGAS_string (" *") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalExternRoutineFormalArgumentListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalExternRoutineFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                         const GALGAS_lstring & in_mLexicalTypeName,
                                                                         const GALGAS_lstring & in_mFormalArgumentName
                                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalExternRoutineFormalArgumentListAST::cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalArgumentModeAST & in_mPassingMode,
                                                                                                                            const GALGAS_lstring & in_mLexicalTypeName,
                                                                                                                            const GALGAS_lstring & in_mFormalArgumentName
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPassingMode, in_mLexicalTypeName, in_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalExternRoutineFormalArgumentListAST::cCollectionElement_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPassingMode, inElement.mProperty_mLexicalTypeName, inElement.mProperty_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalExternRoutineFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalExternRoutineFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (mObject.mProperty_mPassingMode, mObject.mProperty_mLexicalTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalExternRoutineFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mPassingMode" ":" ;
  mObject.mProperty_mPassingMode.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeName" ":" ;
  mObject.mProperty_mLexicalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalExternRoutineFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * operand = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST::GALGAS_lexicalExternRoutineFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST::GALGAS_lexicalExternRoutineFormalArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExternRoutineFormalArgumentListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_listWithValue (const GALGAS_lexicalArgumentModeAST & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_lstring & inOperand2
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_lexicalExternRoutineFormalArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalExternRoutineFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_append (GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element inElement,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mPassingMode ;
      outOperand1 = p->mObject.mProperty_mLexicalTypeName ;
      outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mPassingMode ;
    outOperand1 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mPassingMode ;
    outOperand1 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mPassingMode ;
    outOperand1 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mPassingMode ;
    outOperand1 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternRoutineFormalArgumentListAST result = GALGAS_lexicalExternRoutineFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternRoutineFormalArgumentListAST::plusAssign_operation (const GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_setMPassingModeAtIndex (GALGAS_lexicalArgumentModeAST inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mPassingMode = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_mPassingModeAtIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lexicalArgumentModeAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mPassingMode ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_setMLexicalTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_mLexicalTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternRoutineFormalArgumentListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalExternRoutineFormalArgumentListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalExternRoutineFormalArgumentListAST::cEnumerator_lexicalExternRoutineFormalArgumentListAST (const GALGAS_lexicalExternRoutineFormalArgumentListAST & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST_2D_element cEnumerator_lexicalExternRoutineFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalArgumentModeAST cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mPassingMode (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mProperty_mPassingMode ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mLexicalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mProperty_mLexicalTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExternRoutineFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternRoutineFormalArgumentListAST * p = (const cCollectionElement_lexicalExternRoutineFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternRoutineFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExternRoutineFormalArgumentListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ("lexicalExternRoutineFormalArgumentListAST",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExternRoutineFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternRoutineFormalArgumentListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExternRoutineFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternRoutineFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@externRoutineListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_externRoutineListAST : public cCollectionElement {
  public : GALGAS_externRoutineListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_externRoutineListAST (const GALGAS_lstring & in_mRoutineName,
                                                    const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                    const GALGAS_stringlist & in_mErrorMessageList
                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_externRoutineListAST (const GALGAS_externRoutineListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_externRoutineListAST::cCollectionElement_externRoutineListAST (const GALGAS_lstring & in_mRoutineName,
                                                                                  const GALGAS_lexicalExternRoutineFormalArgumentListAST & in_mLexicalRoutineFormalArgumentList,
                                                                                  const GALGAS_stringlist & in_mErrorMessageList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mRoutineName, in_mLexicalRoutineFormalArgumentList, in_mErrorMessageList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_externRoutineListAST::cCollectionElement_externRoutineListAST (const GALGAS_externRoutineListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mRoutineName, inElement.mProperty_mLexicalRoutineFormalArgumentList, inElement.mProperty_mErrorMessageList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_externRoutineListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externRoutineListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_externRoutineListAST (mObject.mProperty_mRoutineName, mObject.mProperty_mLexicalRoutineFormalArgumentList, mObject.mProperty_mErrorMessageList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_externRoutineListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRoutineName" ":" ;
  mObject.mProperty_mRoutineName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalRoutineFormalArgumentList" ":" ;
  mObject.mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mErrorMessageList" ":" ;
  mObject.mProperty_mErrorMessageList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_externRoutineListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_externRoutineListAST * operand = (cCollectionElement_externRoutineListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_externRoutineListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST::GALGAS_externRoutineListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST::GALGAS_externRoutineListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_externRoutineListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lexicalExternRoutineFormalArgumentListAST & inOperand1,
                                                                                    const GALGAS_stringlist & inOperand2
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_externRoutineListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_externRoutineListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineListAST::setter_append (GALGAS_externRoutineListAST_2D_element inElement,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_externRoutineListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mRoutineName ;
      outOperand1 = p->mObject.mProperty_mLexicalRoutineFormalArgumentList ;
      outOperand2 = p->mObject.mProperty_mErrorMessageList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mErrorMessageList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mErrorMessageList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mErrorMessageList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mRoutineName ;
    outOperand1 = p->mObject.mProperty_mLexicalRoutineFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mErrorMessageList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_externRoutineListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result = GALGAS_externRoutineListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineListAST::plusAssign_operation (const GALGAS_externRoutineListAST inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineListAST::setter_setMRoutineNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRoutineName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externRoutineListAST::getter_mRoutineNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    result = p->mObject.mProperty_mRoutineName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineListAST::setter_setMLexicalRoutineFormalArgumentListAtIndex (GALGAS_lexicalExternRoutineFormalArgumentListAST inOperand,
                                                                                      GALGAS_uint inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalRoutineFormalArgumentList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST GALGAS_externRoutineListAST::getter_mLexicalRoutineFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               C_Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  GALGAS_lexicalExternRoutineFormalArgumentListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    result = p->mObject.mProperty_mLexicalRoutineFormalArgumentList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_externRoutineListAST::setter_setMErrorMessageListAtIndex (GALGAS_stringlist inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mErrorMessageList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_externRoutineListAST::getter_mErrorMessageListAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_externRoutineListAST * p = (cCollectionElement_externRoutineListAST *) attributes.ptr () ;
  GALGAS_stringlist result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
    result = p->mObject.mProperty_mErrorMessageList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_externRoutineListAST::cEnumerator_externRoutineListAST (const GALGAS_externRoutineListAST & inEnumeratedObject,
                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST_2D_element cEnumerator_externRoutineListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_externRoutineListAST::current_mRoutineName (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mProperty_mRoutineName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternRoutineFormalArgumentListAST cEnumerator_externRoutineListAST::current_mLexicalRoutineFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mProperty_mLexicalRoutineFormalArgumentList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist cEnumerator_externRoutineListAST::current_mErrorMessageList (LOCATION_ARGS) const {
  const cCollectionElement_externRoutineListAST * p = (const cCollectionElement_externRoutineListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_externRoutineListAST) ;
  return p->mObject.mProperty_mErrorMessageList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@externRoutineListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineListAST ("externRoutineListAST",
                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externRoutineListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externRoutineListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@lexicalExternFunctionFormalArgumentListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_lexicalExternFunctionFormalArgumentListAST : public cCollectionElement {
  public : GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lstring & in_mLexicalTypeName,
                                                                          const GALGAS_lstring & in_mFormalArgumentName
                                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_lexicalExternFunctionFormalArgumentListAST::cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lstring & in_mLexicalTypeName,
                                                                                                                              const GALGAS_lstring & in_mFormalArgumentName
                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLexicalTypeName, in_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_lexicalExternFunctionFormalArgumentListAST::cCollectionElement_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLexicalTypeName, inElement.mProperty_mFormalArgumentName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_lexicalExternFunctionFormalArgumentListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_lexicalExternFunctionFormalArgumentListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (mObject.mProperty_mLexicalTypeName, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_lexicalExternFunctionFormalArgumentListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLexicalTypeName" ":" ;
  mObject.mProperty_mLexicalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFormalArgumentName" ":" ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_lexicalExternFunctionFormalArgumentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * operand = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST::GALGAS_lexicalExternFunctionFormalArgumentListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST::GALGAS_lexicalExternFunctionFormalArgumentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexicalExternFunctionFormalArgumentListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_lexicalExternFunctionFormalArgumentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_lexicalExternFunctionFormalArgumentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternFunctionFormalArgumentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_lstring & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_append (GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element inElement,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
      outOperand0 = p->mObject.mProperty_mLexicalTypeName ;
      outOperand1 = p->mObject.mProperty_mFormalArgumentName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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
    outOperand0 = p->mObject.mProperty_mLexicalTypeName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalExternFunctionFormalArgumentListAST result = GALGAS_lexicalExternFunctionFormalArgumentListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternFunctionFormalArgumentListAST::plusAssign_operation (const GALGAS_lexicalExternFunctionFormalArgumentListAST inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_setMLexicalTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLexicalTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_mLexicalTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    result = p->mObject.mProperty_mLexicalTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexicalExternFunctionFormalArgumentListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalExternFunctionFormalArgumentListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_lexicalExternFunctionFormalArgumentListAST::cEnumerator_lexicalExternFunctionFormalArgumentListAST (const GALGAS_lexicalExternFunctionFormalArgumentListAST & inEnumeratedObject,
                                                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalExternFunctionFormalArgumentListAST_2D_element cEnumerator_lexicalExternFunctionFormalArgumentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExternFunctionFormalArgumentListAST::current_mLexicalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject.mProperty_mLexicalTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_lexicalExternFunctionFormalArgumentListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_lexicalExternFunctionFormalArgumentListAST * p = (const cCollectionElement_lexicalExternFunctionFormalArgumentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_lexicalExternFunctionFormalArgumentListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalExternFunctionFormalArgumentListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ("lexicalExternFunctionFormalArgumentListAST",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalExternFunctionFormalArgumentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExternFunctionFormalArgumentListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalExternFunctionFormalArgumentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalExternFunctionFormalArgumentListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

