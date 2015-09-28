#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-14.h"


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultTypeName.objectCompare (p->mAttribute_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableName.objectCompare (p->mAttribute_mResultVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfFunctionInstructionList.objectCompare (p->mAttribute_mEndOfFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionDeclarationAST::objectCompare (const GALGAS_functionDeclarationAST & inOperand) const {
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

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (void) :
GALGAS_externFunctionDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                         GALGAS_location::constructor_nowhere (HERE),
                                                         GALGAS_bool::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST::GALGAS_functionDeclarationAST (const cPtr_functionDeclarationAST * inSourcePtr) :
GALGAS_externFunctionDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_lstring & inAttribute_mFunctionName,
                                                                              const GALGAS_formalInputParameterListAST & inAttribute_mFormalArgumentList,
                                                                              const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                              const GALGAS_lstring & inAttribute_mResultVariableName,
                                                                              const GALGAS_semanticInstructionListAST & inAttribute_mFunctionInstructionList,
                                                                              const GALGAS_location & inAttribute_mEndOfFunctionInstructionList,
                                                                              const GALGAS_bool & inAttribute_mIsInternal
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_mResultVariableName.isValid () && inAttribute_mFunctionInstructionList.isValid () && inAttribute_mEndOfFunctionInstructionList.isValid () && inAttribute_mIsInternal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionDeclarationAST (inAttribute_mIsPredefined, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mResultTypeName, inAttribute_mResultVariableName, inAttribute_mFunctionInstructionList, inAttribute_mEndOfFunctionInstructionList, inAttribute_mIsInternal COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_functionDeclarationAST::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_functionDeclarationAST::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_functionDeclarationAST::reader_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mAttribute_mEndOfFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_functionDeclarationAST::reader_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_functionDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionDeclarationAST * p = (const cPtr_functionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_functionDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @functionDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionDeclarationAST::cPtr_functionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_lstring & in_mFunctionName,
                                                          const GALGAS_formalInputParameterListAST & in_mFormalArgumentList,
                                                          const GALGAS_lstring & in_mResultTypeName,
                                                          const GALGAS_lstring & in_mResultVariableName,
                                                          const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                          const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                          const GALGAS_bool & in_mIsInternal
                                                          COMMA_LOCATION_ARGS) :
cPtr_externFunctionDeclarationAST (in_mIsPredefined, in_mFunctionName, in_mFormalArgumentList, in_mResultTypeName, in_mResultVariableName COMMA_THERE),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList),
mAttribute_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

void cPtr_functionDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@functionDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionDeclarationAST (mAttribute_mIsPredefined, mAttribute_mFunctionName, mAttribute_mFormalArgumentList, mAttribute_mResultTypeName, mAttribute_mResultVariableName, mAttribute_mFunctionInstructionList, mAttribute_mEndOfFunctionInstructionList, mAttribute_mIsInternal COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @functionDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionDeclarationAST ("functionDeclarationAST",
                                               & kTypeDescriptor_GALGAS_externFunctionDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST result ;
  const GALGAS_functionDeclarationAST * p = (const GALGAS_functionDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_externRoutineDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_externRoutineDeclarationAST::objectCompare (const GALGAS_externRoutineDeclarationAST & inOperand) const {
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

GALGAS_externRoutineDeclarationAST::GALGAS_externRoutineDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externRoutineDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST::GALGAS_externRoutineDeclarationAST (const cPtr_externRoutineDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externRoutineDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                        const GALGAS_bool & inAttribute_mIsInternal,
                                                                                        const GALGAS_lstring & inAttribute_mRoutineName,
                                                                                        const GALGAS_formalParameterListAST & inAttribute_mFormalArgumentList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externRoutineDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsInternal, inAttribute_mRoutineName, inAttribute_mFormalArgumentList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_externRoutineDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_externRoutineDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externRoutineDeclarationAST::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mAttribute_mRoutineName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_externRoutineDeclarationAST::reader_mRoutineName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_externRoutineDeclarationAST::reader_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_externRoutineDeclarationAST * p = (const cPtr_externRoutineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externRoutineDeclarationAST) ;
    result = p->mAttribute_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_externRoutineDeclarationAST::reader_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @externRoutineDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_externRoutineDeclarationAST::cPtr_externRoutineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_bool & in_mIsInternal,
                                                                    const GALGAS_lstring & in_mRoutineName,
                                                                    const GALGAS_formalParameterListAST & in_mFormalArgumentList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mIsInternal (in_mIsInternal),
mAttribute_mRoutineName (in_mRoutineName),
mAttribute_mFormalArgumentList (in_mFormalArgumentList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_externRoutineDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;
}

void cPtr_externRoutineDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@externRoutineDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_externRoutineDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externRoutineDeclarationAST (mAttribute_mIsPredefined, mAttribute_mIsInternal, mAttribute_mRoutineName, mAttribute_mFormalArgumentList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @externRoutineDeclarationAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externRoutineDeclarationAST ("externRoutineDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externRoutineDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externRoutineDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externRoutineDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externRoutineDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineDeclarationAST GALGAS_externRoutineDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externRoutineDeclarationAST result ;
  const GALGAS_externRoutineDeclarationAST * p = (const GALGAS_externRoutineDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externRoutineDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externRoutineDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_routineDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_routineDeclarationAST * p = (const cPtr_routineDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_routineDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineName.objectCompare (p->mAttribute_mRoutineName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRoutineInstructionList.objectCompare (p->mAttribute_mRoutineInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfRoutineInstructionList.objectCompare (p->mAttribute_mEndOfRoutineInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_routineDeclarationAST::objectCompare (const GALGAS_routineDeclarationAST & inOperand) const {
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

GALGAS_routineDeclarationAST::GALGAS_routineDeclarationAST (void) :
GALGAS_externRoutineDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationAST GALGAS_routineDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_routineDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                        GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                        GALGAS_location::constructor_nowhere (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationAST::GALGAS_routineDeclarationAST (const cPtr_routineDeclarationAST * inSourcePtr) :
GALGAS_externRoutineDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationAST GALGAS_routineDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_bool & inAttribute_mIsInternal,
                                                                            const GALGAS_lstring & inAttribute_mRoutineName,
                                                                            const GALGAS_formalParameterListAST & inAttribute_mFormalArgumentList,
                                                                            const GALGAS_semanticInstructionListAST & inAttribute_mRoutineInstructionList,
                                                                            const GALGAS_location & inAttribute_mEndOfRoutineInstructionList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mRoutineName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mRoutineInstructionList.isValid () && inAttribute_mEndOfRoutineInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_routineDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsInternal, inAttribute_mRoutineName, inAttribute_mFormalArgumentList, inAttribute_mRoutineInstructionList, inAttribute_mEndOfRoutineInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_routineDeclarationAST::reader_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineDeclarationAST * p = (const cPtr_routineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineDeclarationAST) ;
    result = p->mAttribute_mRoutineInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_routineDeclarationAST::reader_mRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRoutineInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_routineDeclarationAST::reader_mEndOfRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_routineDeclarationAST * p = (const cPtr_routineDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineDeclarationAST) ;
    result = p->mAttribute_mEndOfRoutineInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_routineDeclarationAST::reader_mEndOfRoutineInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfRoutineInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @routineDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_routineDeclarationAST::cPtr_routineDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_bool & in_mIsInternal,
                                                        const GALGAS_lstring & in_mRoutineName,
                                                        const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                        const GALGAS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                        const GALGAS_location & in_mEndOfRoutineInstructionList
                                                        COMMA_LOCATION_ARGS) :
cPtr_externRoutineDeclarationAST (in_mIsPredefined, in_mIsInternal, in_mRoutineName, in_mFormalArgumentList COMMA_THERE),
mAttribute_mRoutineInstructionList (in_mRoutineInstructionList),
mAttribute_mEndOfRoutineInstructionList (in_mEndOfRoutineInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_routineDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationAST ;
}

void cPtr_routineDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@routineDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_routineDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_routineDeclarationAST (mAttribute_mIsPredefined, mAttribute_mIsInternal, mAttribute_mRoutineName, mAttribute_mFormalArgumentList, mAttribute_mRoutineInstructionList, mAttribute_mEndOfRoutineInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @routineDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_routineDeclarationAST ("routineDeclarationAST",
                                              & kTypeDescriptor_GALGAS_externRoutineDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_routineDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_routineDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_routineDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_routineDeclarationAST GALGAS_routineDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_routineDeclarationAST result ;
  const GALGAS_routineDeclarationAST * p = (const GALGAS_routineDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_routineDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_externTypeDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExternTypeName.objectCompare (p->mAttribute_mExternTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppPreDeclarationCode.objectCompare (p->mAttribute_mCppPreDeclarationCode) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppClassCode.objectCompare (p->mAttribute_mCppClassCode) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExternTypeConstructorList.objectCompare (p->mAttribute_mExternTypeConstructorList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExternTypeReaderList.objectCompare (p->mAttribute_mExternTypeReaderList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExternTypeModifierList.objectCompare (p->mAttribute_mExternTypeModifierList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExternTypeMethodList.objectCompare (p->mAttribute_mExternTypeMethodList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_externTypeDeclarationAST::objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const {
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

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_externTypeConstructorList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeReaderList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeModifierList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeMethodList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                  const GALGAS_lstring & inAttribute_mExternTypeName,
                                                                                  const GALGAS_string & inAttribute_mCppPreDeclarationCode,
                                                                                  const GALGAS_string & inAttribute_mCppClassCode,
                                                                                  const GALGAS_externTypeConstructorList & inAttribute_mExternTypeConstructorList,
                                                                                  const GALGAS_externTypeReaderList & inAttribute_mExternTypeReaderList,
                                                                                  const GALGAS_externTypeModifierList & inAttribute_mExternTypeModifierList,
                                                                                  const GALGAS_externTypeMethodList & inAttribute_mExternTypeMethodList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mExternTypeName.isValid () && inAttribute_mCppPreDeclarationCode.isValid () && inAttribute_mCppClassCode.isValid () && inAttribute_mExternTypeConstructorList.isValid () && inAttribute_mExternTypeReaderList.isValid () && inAttribute_mExternTypeModifierList.isValid () && inAttribute_mExternTypeMethodList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationAST (inAttribute_mIsPredefined, inAttribute_mExternTypeName, inAttribute_mCppPreDeclarationCode, inAttribute_mCppClassCode, inAttribute_mExternTypeConstructorList, inAttribute_mExternTypeReaderList, inAttribute_mExternTypeModifierList, inAttribute_mExternTypeMethodList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externTypeDeclarationAST::reader_mExternTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mAttribute_mExternTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_externTypeDeclarationAST::reader_mExternTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_externTypeDeclarationAST::reader_mCppPreDeclarationCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mAttribute_mCppPreDeclarationCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_externTypeDeclarationAST::reader_mCppPreDeclarationCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppPreDeclarationCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_externTypeDeclarationAST::reader_mCppClassCode (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mAttribute_mCppClassCode ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_externTypeDeclarationAST::reader_mCppClassCode (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppClassCode ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList GALGAS_externTypeDeclarationAST::reader_mExternTypeConstructorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeConstructorList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mAttribute_mExternTypeConstructorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeConstructorList cPtr_externTypeDeclarationAST::reader_mExternTypeConstructorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternTypeConstructorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList GALGAS_externTypeDeclarationAST::reader_mExternTypeReaderList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeReaderList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mAttribute_mExternTypeReaderList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeReaderList cPtr_externTypeDeclarationAST::reader_mExternTypeReaderList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternTypeReaderList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList GALGAS_externTypeDeclarationAST::reader_mExternTypeModifierList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeModifierList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mAttribute_mExternTypeModifierList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeModifierList cPtr_externTypeDeclarationAST::reader_mExternTypeModifierList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternTypeModifierList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList GALGAS_externTypeDeclarationAST::reader_mExternTypeMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externTypeMethodList result ;
  if (NULL != mObjectPtr) {
    const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    result = p->mAttribute_mExternTypeMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeMethodList cPtr_externTypeDeclarationAST::reader_mExternTypeMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternTypeMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @externTypeDeclarationAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_lstring & in_mExternTypeName,
                                                              const GALGAS_string & in_mCppPreDeclarationCode,
                                                              const GALGAS_string & in_mCppClassCode,
                                                              const GALGAS_externTypeConstructorList & in_mExternTypeConstructorList,
                                                              const GALGAS_externTypeReaderList & in_mExternTypeReaderList,
                                                              const GALGAS_externTypeModifierList & in_mExternTypeModifierList,
                                                              const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mExternTypeName (in_mExternTypeName),
mAttribute_mCppPreDeclarationCode (in_mCppPreDeclarationCode),
mAttribute_mCppClassCode (in_mCppClassCode),
mAttribute_mExternTypeConstructorList (in_mExternTypeConstructorList),
mAttribute_mExternTypeReaderList (in_mExternTypeReaderList),
mAttribute_mExternTypeModifierList (in_mExternTypeModifierList),
mAttribute_mExternTypeMethodList (in_mExternTypeMethodList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

void cPtr_externTypeDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@externTypeDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExternTypeConstructorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExternTypeReaderList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExternTypeModifierList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExternTypeMethodList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_externTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mAttribute_mIsPredefined, mAttribute_mExternTypeName, mAttribute_mCppPreDeclarationCode, mAttribute_mCppClassCode, mAttribute_mExternTypeConstructorList, mAttribute_mExternTypeReaderList, mAttribute_mExternTypeModifierList, mAttribute_mExternTypeMethodList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @externTypeDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST result ;
  const GALGAS_externTypeDeclarationAST * p = (const GALGAS_externTypeDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSourceFileAbsolutePath.objectCompare (p->mAttribute_mSourceFileAbsolutePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperName.objectCompare (p->mAttribute_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperPath.objectCompare (p->mAttribute_mFilewrapperPath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTextFileExtensionList.objectCompare (p->mAttribute_mFilewrapperTextFileExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperBinaryFileExtensionList.objectCompare (p->mAttribute_mFilewrapperBinaryFileExtensionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplateList.objectCompare (p->mAttribute_mFilewrapperTemplateList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_filewrapperDeclarationAST::objectCompare (const GALGAS_filewrapperDeclarationAST & inOperand) const {
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

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_bool::constructor_default (HERE),
                                                            GALGAS_string::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE),
                                                            GALGAS_filewrapperTemplateListAST::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST::GALGAS_filewrapperDeclarationAST (const cPtr_filewrapperDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_bool & inAttribute_mIsInternal,
                                                                                    const GALGAS_string & inAttribute_mSourceFileAbsolutePath,
                                                                                    const GALGAS_lstring & inAttribute_mFilewrapperName,
                                                                                    const GALGAS_lstring & inAttribute_mFilewrapperPath,
                                                                                    const GALGAS_lstringlist & inAttribute_mFilewrapperTextFileExtensionList,
                                                                                    const GALGAS_lstringlist & inAttribute_mFilewrapperBinaryFileExtensionList,
                                                                                    const GALGAS_filewrapperTemplateListAST & inAttribute_mFilewrapperTemplateList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsInternal.isValid () && inAttribute_mSourceFileAbsolutePath.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperPath.isValid () && inAttribute_mFilewrapperTextFileExtensionList.isValid () && inAttribute_mFilewrapperBinaryFileExtensionList.isValid () && inAttribute_mFilewrapperTemplateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsInternal, inAttribute_mSourceFileAbsolutePath, inAttribute_mFilewrapperName, inAttribute_mFilewrapperPath, inAttribute_mFilewrapperTextFileExtensionList, inAttribute_mFilewrapperBinaryFileExtensionList, inAttribute_mFilewrapperTemplateList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_filewrapperDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_filewrapperDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperDeclarationAST::reader_mSourceFileAbsolutePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mSourceFileAbsolutePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_filewrapperDeclarationAST::reader_mSourceFileAbsolutePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSourceFileAbsolutePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperDeclarationAST::reader_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperDeclarationAST::reader_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_filewrapperDeclarationAST::reader_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperPath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_filewrapperDeclarationAST::reader_mFilewrapperPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::reader_mFilewrapperTextFileExtensionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperTextFileExtensionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_filewrapperDeclarationAST::reader_mFilewrapperTextFileExtensionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTextFileExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_filewrapperDeclarationAST::reader_mFilewrapperBinaryFileExtensionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperBinaryFileExtensionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_filewrapperDeclarationAST::reader_mFilewrapperBinaryFileExtensionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperBinaryFileExtensionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperDeclarationAST::reader_mFilewrapperTemplateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationAST * p = (const cPtr_filewrapperDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationAST) ;
    result = p->mAttribute_mFilewrapperTemplateList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListAST cPtr_filewrapperDeclarationAST::reader_mFilewrapperTemplateList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @filewrapperDeclarationAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperDeclarationAST::cPtr_filewrapperDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_bool & in_mIsInternal,
                                                                const GALGAS_string & in_mSourceFileAbsolutePath,
                                                                const GALGAS_lstring & in_mFilewrapperName,
                                                                const GALGAS_lstring & in_mFilewrapperPath,
                                                                const GALGAS_lstringlist & in_mFilewrapperTextFileExtensionList,
                                                                const GALGAS_lstringlist & in_mFilewrapperBinaryFileExtensionList,
                                                                const GALGAS_filewrapperTemplateListAST & in_mFilewrapperTemplateList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mIsInternal (in_mIsInternal),
mAttribute_mSourceFileAbsolutePath (in_mSourceFileAbsolutePath),
mAttribute_mFilewrapperName (in_mFilewrapperName),
mAttribute_mFilewrapperPath (in_mFilewrapperPath),
mAttribute_mFilewrapperTextFileExtensionList (in_mFilewrapperTextFileExtensionList),
mAttribute_mFilewrapperBinaryFileExtensionList (in_mFilewrapperBinaryFileExtensionList),
mAttribute_mFilewrapperTemplateList (in_mFilewrapperTemplateList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

void cPtr_filewrapperDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@filewrapperDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSourceFileAbsolutePath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperTextFileExtensionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperBinaryFileExtensionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperTemplateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationAST (mAttribute_mIsPredefined, mAttribute_mIsInternal, mAttribute_mSourceFileAbsolutePath, mAttribute_mFilewrapperName, mAttribute_mFilewrapperPath, mAttribute_mFilewrapperTextFileExtensionList, mAttribute_mFilewrapperBinaryFileExtensionList, mAttribute_mFilewrapperTemplateList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @filewrapperDeclarationAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationAST ("filewrapperDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST result ;
  const GALGAS_filewrapperDeclarationAST * p = (const GALGAS_filewrapperDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_galgas_33_GrammarComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasIndexing.objectCompare (p->mAttribute_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarComponentName.objectCompare (p->mAttribute_mGrammarComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarClass.objectCompare (p->mAttribute_mGrammarClass) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponents.objectCompare (p->mAttribute_mSyntaxComponents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartSymbolName.objectCompare (p->mAttribute_mStartSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartSymbolLabelList.objectCompare (p->mAttribute_mStartSymbolLabelList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUnusedNonterminalList.objectCompare (p->mAttribute_mUnusedNonterminalList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (p->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_galgas_33_GrammarComponentAST::objectCompare (const GALGAS_galgas_33_GrammarComponentAST & inOperand) const {
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

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_galgas_33_GrammarComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lbool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_nonTerminalLabelListAST::constructor_emptyList (HERE),
                                                                GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                GALGAS_bool::constructor_default (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST::GALGAS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_lbool & inAttribute_mHasIndexing,
                                                                                            const GALGAS_lstring & inAttribute_mGrammarComponentName,
                                                                                            const GALGAS_lstring & inAttribute_mGrammarClass,
                                                                                            const GALGAS_lstringlist & inAttribute_mSyntaxComponents,
                                                                                            const GALGAS_lstring & inAttribute_mStartSymbolName,
                                                                                            const GALGAS_nonTerminalLabelListAST & inAttribute_mStartSymbolLabelList,
                                                                                            const GALGAS_lstringlist & inAttribute_mUnusedNonterminalList,
                                                                                            const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mHasIndexing.isValid () && inAttribute_mGrammarComponentName.isValid () && inAttribute_mGrammarClass.isValid () && inAttribute_mSyntaxComponents.isValid () && inAttribute_mStartSymbolName.isValid () && inAttribute_mStartSymbolLabelList.isValid () && inAttribute_mUnusedNonterminalList.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_galgas_33_GrammarComponentAST (inAttribute_mIsPredefined, inAttribute_mHasIndexing, inAttribute_mGrammarComponentName, inAttribute_mGrammarClass, inAttribute_mSyntaxComponents, inAttribute_mStartSymbolName, inAttribute_mStartSymbolLabelList, inAttribute_mUnusedNonterminalList, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_galgas_33_GrammarComponentAST::reader_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mHasIndexing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool cPtr_galgas_33_GrammarComponentAST::reader_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::reader_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mGrammarComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::reader_mGrammarComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::reader_mGrammarClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mGrammarClass ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::reader_mGrammarClass (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarClass ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::reader_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mSyntaxComponents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_galgas_33_GrammarComponentAST::reader_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_GrammarComponentAST::reader_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mStartSymbolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_GrammarComponentAST::reader_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST GALGAS_galgas_33_GrammarComponentAST::reader_mStartSymbolLabelList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mStartSymbolLabelList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalLabelListAST cPtr_galgas_33_GrammarComponentAST::reader_mStartSymbolLabelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolLabelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_galgas_33_GrammarComponentAST::reader_mUnusedNonterminalList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mUnusedNonterminalList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_galgas_33_GrammarComponentAST::reader_mUnusedNonterminalList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUnusedNonterminalList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_GrammarComponentAST::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_GrammarComponentAST * p = (const cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_galgas_33_GrammarComponentAST::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @galgas3GrammarComponentAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lbool & in_mHasIndexing,
                                                                        const GALGAS_lstring & in_mGrammarComponentName,
                                                                        const GALGAS_lstring & in_mGrammarClass,
                                                                        const GALGAS_lstringlist & in_mSyntaxComponents,
                                                                        const GALGAS_lstring & in_mStartSymbolName,
                                                                        const GALGAS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GALGAS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GALGAS_bool & in_mHasTranslateFeature
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mHasIndexing (in_mHasIndexing),
mAttribute_mGrammarComponentName (in_mGrammarComponentName),
mAttribute_mGrammarClass (in_mGrammarClass),
mAttribute_mSyntaxComponents (in_mSyntaxComponents),
mAttribute_mStartSymbolName (in_mStartSymbolName),
mAttribute_mStartSymbolLabelList (in_mStartSymbolLabelList),
mAttribute_mUnusedNonterminalList (in_mUnusedNonterminalList),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

void cPtr_galgas_33_GrammarComponentAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@galgas3GrammarComponentAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_galgas_33_GrammarComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mAttribute_mIsPredefined, mAttribute_mHasIndexing, mAttribute_mGrammarComponentName, mAttribute_mGrammarClass, mAttribute_mSyntaxComponents, mAttribute_mStartSymbolName, mAttribute_mStartSymbolLabelList, mAttribute_mUnusedNonterminalList, mAttribute_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @galgas3GrammarComponentAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST result ;
  const GALGAS_galgas_33_GrammarComponentAST * p = (const GALGAS_galgas_33_GrammarComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_GrammarComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_galgas_33_SyntaxComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponentName.objectCompare (p->mAttribute_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (p->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonterminalDeclarationList.objectCompare (p->mAttribute_mNonterminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRuleList.objectCompare (p->mAttribute_mRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (p->mAttribute_mHasTranslateFeature) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_galgas_33_SyntaxComponentAST::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST & inOperand) const {
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

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_nonterminalDeclarationListAST::constructor_emptyList (HERE),
                                                               GALGAS_syntaxRuleListAST::constructor_emptyList (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST::GALGAS_galgas_33_SyntaxComponentAST (const cPtr_galgas_33_SyntaxComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_SyntaxComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_lstring & inAttribute_mSyntaxComponentName,
                                                                                          const GALGAS_lstring & inAttribute_mLexiqueName,
                                                                                          const GALGAS_nonterminalDeclarationListAST & inAttribute_mNonterminalDeclarationList,
                                                                                          const GALGAS_syntaxRuleListAST & inAttribute_mRuleList,
                                                                                          const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonterminalDeclarationList.isValid () && inAttribute_mRuleList.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_galgas_33_SyntaxComponentAST (inAttribute_mIsPredefined, inAttribute_mSyntaxComponentName, inAttribute_mLexiqueName, inAttribute_mNonterminalDeclarationList, inAttribute_mRuleList, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mSyntaxComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_SyntaxComponentAST::reader_mSyntaxComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentAST::reader_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_galgas_33_SyntaxComponentAST::reader_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentAST::reader_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mNonterminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonterminalDeclarationListAST cPtr_galgas_33_SyntaxComponentAST::reader_mNonterminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonterminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentAST::reader_mRuleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mRuleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_syntaxRuleListAST cPtr_galgas_33_SyntaxComponentAST::reader_mRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_galgas_33_SyntaxComponentAST::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_galgas_33_SyntaxComponentAST * p = (const cPtr_galgas_33_SyntaxComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_SyntaxComponentAST) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_galgas_33_SyntaxComponentAST::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @galgas3SyntaxComponentAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_galgas_33_SyntaxComponentAST::cPtr_galgas_33_SyntaxComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_lstring & in_mSyntaxComponentName,
                                                                      const GALGAS_lstring & in_mLexiqueName,
                                                                      const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                      const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                      const GALGAS_bool & in_mHasTranslateFeature
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mSyntaxComponentName (in_mSyntaxComponentName),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mNonterminalDeclarationList (in_mNonterminalDeclarationList),
mAttribute_mRuleList (in_mRuleList),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_galgas_33_SyntaxComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

void cPtr_galgas_33_SyntaxComponentAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@galgas3SyntaxComponentAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonterminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRuleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_galgas_33_SyntaxComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_galgas_33_SyntaxComponentAST (mAttribute_mIsPredefined, mAttribute_mSyntaxComponentName, mAttribute_mLexiqueName, mAttribute_mNonterminalDeclarationList, mAttribute_mRuleList, mAttribute_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @galgas3SyntaxComponentAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ("galgas3SyntaxComponentAST",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  const GALGAS_galgas_33_SyntaxComponentAST * p = (const GALGAS_galgas_33_SyntaxComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_graphDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGraphTypeName.objectCompare (p->mAttribute_mGraphTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedListTypeName.objectCompare (p->mAttribute_mAssociatedListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertModifierList.objectCompare (p->mAttribute_mInsertModifierList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_graphDeclarationAST::objectCompare (const GALGAS_graphDeclarationAST & inOperand) const {
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

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_graphInsertModifierList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mGraphTypeName,
                                                                        const GALGAS_lstring & inAttribute_mAssociatedListTypeName,
                                                                        const GALGAS_graphInsertModifierList & inAttribute_mInsertModifierList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mGraphTypeName.isValid () && inAttribute_mAssociatedListTypeName.isValid () && inAttribute_mInsertModifierList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphDeclarationAST (inAttribute_mIsPredefined, inAttribute_mGraphTypeName, inAttribute_mAssociatedListTypeName, inAttribute_mInsertModifierList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_graphDeclarationAST::reader_mGraphTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    result = p->mAttribute_mGraphTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_graphDeclarationAST::reader_mGraphTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGraphTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_graphDeclarationAST::reader_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    result = p->mAttribute_mAssociatedListTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_graphDeclarationAST::reader_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedListTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList GALGAS_graphDeclarationAST::reader_mInsertModifierList (UNUSED_LOCATION_ARGS) const {
  GALGAS_graphInsertModifierList result ;
  if (NULL != mObjectPtr) {
    const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    result = p->mAttribute_mInsertModifierList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphInsertModifierList cPtr_graphDeclarationAST::reader_mInsertModifierList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertModifierList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @graphDeclarationAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mGraphTypeName,
                                                    const GALGAS_lstring & in_mAssociatedListTypeName,
                                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mGraphTypeName (in_mGraphTypeName),
mAttribute_mAssociatedListTypeName (in_mAssociatedListTypeName),
mAttribute_mInsertModifierList (in_mInsertModifierList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

void cPtr_graphDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@graphDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGraphTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_graphDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mAttribute_mIsPredefined, mAttribute_mGraphTypeName, mAttribute_mAssociatedListTypeName, mAttribute_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @graphDeclarationAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST result ;
  const GALGAS_graphDeclarationAST * p = (const GALGAS_graphDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexiqueComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueComponentName.objectCompare (p->mAttribute_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsTemplate.objectCompare (p->mAttribute_mIsTemplate) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateDelimitorList.objectCompare (p->mAttribute_mTemplateDelimitorList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTemplateReplacementList.objectCompare (p->mAttribute_mTemplateReplacementList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalAttributeList.objectCompare (p->mAttribute_mLexicalAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalStyleList.objectCompare (p->mAttribute_mLexicalStyleList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTerminalDeclarationList.objectCompare (p->mAttribute_mTerminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalMessageDeclarationList.objectCompare (p->mAttribute_mLexicalMessageDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalListDeclarationList.objectCompare (p->mAttribute_mLexicalListDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexicalRuleList.objectCompare (p->mAttribute_mLexicalRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExternRoutineList.objectCompare (p->mAttribute_mExternRoutineList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mExternFunctionList.objectCompare (p->mAttribute_mExternFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexingListAST.objectCompare (p->mAttribute_mIndexingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIndexingDirectory.objectCompare (p->mAttribute_mIndexingDirectory) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexiqueComponentAST::objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const {
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

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueComponentAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_metamodelTemplateDelimitorListAST::constructor_emptyList (HERE),
                                                      GALGAS_templateReplacementListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalAttributeListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalStyleListAST::constructor_emptyList (HERE),
                                                      GALGAS_terminalDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalMessageDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalListDeclarationListAST::constructor_emptyList (HERE),
                                                      GALGAS_lexicalRuleListAST::constructor_emptyList (HERE),
                                                      GALGAS_externRoutineListAST::constructor_emptyList (HERE),
                                                      GALGAS_externFunctionListAST::constructor_emptyList (HERE),
                                                      GALGAS_indexingListAST::constructor_emptyList (HERE),
                                                      GALGAS_lstring::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mLexiqueComponentName,
                                                                        const GALGAS_bool & inAttribute_mIsTemplate,
                                                                        const GALGAS_metamodelTemplateDelimitorListAST & inAttribute_mTemplateDelimitorList,
                                                                        const GALGAS_templateReplacementListAST & inAttribute_mTemplateReplacementList,
                                                                        const GALGAS_lexicalAttributeListAST & inAttribute_mLexicalAttributeList,
                                                                        const GALGAS_lexicalStyleListAST & inAttribute_mLexicalStyleList,
                                                                        const GALGAS_terminalDeclarationListAST & inAttribute_mTerminalDeclarationList,
                                                                        const GALGAS_lexicalMessageDeclarationListAST & inAttribute_mLexicalMessageDeclarationList,
                                                                        const GALGAS_lexicalListDeclarationListAST & inAttribute_mLexicalListDeclarationList,
                                                                        const GALGAS_lexicalRuleListAST & inAttribute_mLexicalRuleList,
                                                                        const GALGAS_externRoutineListAST & inAttribute_mExternRoutineList,
                                                                        const GALGAS_externFunctionListAST & inAttribute_mExternFunctionList,
                                                                        const GALGAS_indexingListAST & inAttribute_mIndexingListAST,
                                                                        const GALGAS_lstring & inAttribute_mIndexingDirectory
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mLexiqueComponentName.isValid () && inAttribute_mIsTemplate.isValid () && inAttribute_mTemplateDelimitorList.isValid () && inAttribute_mTemplateReplacementList.isValid () && inAttribute_mLexicalAttributeList.isValid () && inAttribute_mLexicalStyleList.isValid () && inAttribute_mTerminalDeclarationList.isValid () && inAttribute_mLexicalMessageDeclarationList.isValid () && inAttribute_mLexicalListDeclarationList.isValid () && inAttribute_mLexicalRuleList.isValid () && inAttribute_mExternRoutineList.isValid () && inAttribute_mExternFunctionList.isValid () && inAttribute_mIndexingListAST.isValid () && inAttribute_mIndexingDirectory.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueComponentAST (inAttribute_mIsPredefined, inAttribute_mLexiqueComponentName, inAttribute_mIsTemplate, inAttribute_mTemplateDelimitorList, inAttribute_mTemplateReplacementList, inAttribute_mLexicalAttributeList, inAttribute_mLexicalStyleList, inAttribute_mTerminalDeclarationList, inAttribute_mLexicalMessageDeclarationList, inAttribute_mLexicalListDeclarationList, inAttribute_mLexicalRuleList, inAttribute_mExternRoutineList, inAttribute_mExternFunctionList, inAttribute_mIndexingListAST, inAttribute_mIndexingDirectory COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentAST::reader_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mLexiqueComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexiqueComponentAST::reader_mLexiqueComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_lexiqueComponentAST::reader_mIsTemplate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mIsTemplate ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_lexiqueComponentAST::reader_mIsTemplate (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsTemplate ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST GALGAS_lexiqueComponentAST::reader_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_metamodelTemplateDelimitorListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mTemplateDelimitorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_metamodelTemplateDelimitorListAST cPtr_lexiqueComponentAST::reader_mTemplateDelimitorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateDelimitorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST GALGAS_lexiqueComponentAST::reader_mTemplateReplacementList (UNUSED_LOCATION_ARGS) const {
  GALGAS_templateReplacementListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mTemplateReplacementList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateReplacementListAST cPtr_lexiqueComponentAST::reader_mTemplateReplacementList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateReplacementList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST GALGAS_lexiqueComponentAST::reader_mLexicalAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalAttributeListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mLexicalAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalAttributeListAST cPtr_lexiqueComponentAST::reader_mLexicalAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST GALGAS_lexiqueComponentAST::reader_mLexicalStyleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalStyleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mLexicalStyleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalStyleListAST cPtr_lexiqueComponentAST::reader_mLexicalStyleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalStyleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST GALGAS_lexiqueComponentAST::reader_mTerminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mTerminalDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_terminalDeclarationListAST cPtr_lexiqueComponentAST::reader_mTerminalDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTerminalDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexiqueComponentAST::reader_mLexicalMessageDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalMessageDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mLexicalMessageDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalMessageDeclarationListAST cPtr_lexiqueComponentAST::reader_mLexicalMessageDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalMessageDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST GALGAS_lexiqueComponentAST::reader_mLexicalListDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalListDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mLexicalListDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalListDeclarationListAST cPtr_lexiqueComponentAST::reader_mLexicalListDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalListDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST GALGAS_lexiqueComponentAST::reader_mLexicalRuleList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalRuleListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mLexicalRuleList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexicalRuleListAST cPtr_lexiqueComponentAST::reader_mLexicalRuleList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexicalRuleList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST GALGAS_lexiqueComponentAST::reader_mExternRoutineList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externRoutineListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mExternRoutineList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externRoutineListAST cPtr_lexiqueComponentAST::reader_mExternRoutineList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternRoutineList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST GALGAS_lexiqueComponentAST::reader_mExternFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externFunctionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mExternFunctionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionListAST cPtr_lexiqueComponentAST::reader_mExternFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST GALGAS_lexiqueComponentAST::reader_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_indexingListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mIndexingListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_indexingListAST cPtr_lexiqueComponentAST::reader_mIndexingListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_lexiqueComponentAST::reader_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    result = p->mAttribute_mIndexingDirectory ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_lexiqueComponentAST::reader_mIndexingDirectory (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIndexingDirectory ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @lexiqueComponentAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mLexiqueComponentName,
                                                    const GALGAS_bool & in_mIsTemplate,
                                                    const GALGAS_metamodelTemplateDelimitorListAST & in_mTemplateDelimitorList,
                                                    const GALGAS_templateReplacementListAST & in_mTemplateReplacementList,
                                                    const GALGAS_lexicalAttributeListAST & in_mLexicalAttributeList,
                                                    const GALGAS_lexicalStyleListAST & in_mLexicalStyleList,
                                                    const GALGAS_terminalDeclarationListAST & in_mTerminalDeclarationList,
                                                    const GALGAS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationList,
                                                    const GALGAS_lexicalListDeclarationListAST & in_mLexicalListDeclarationList,
                                                    const GALGAS_lexicalRuleListAST & in_mLexicalRuleList,
                                                    const GALGAS_externRoutineListAST & in_mExternRoutineList,
                                                    const GALGAS_externFunctionListAST & in_mExternFunctionList,
                                                    const GALGAS_indexingListAST & in_mIndexingListAST,
                                                    const GALGAS_lstring & in_mIndexingDirectory
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mLexiqueComponentName (in_mLexiqueComponentName),
mAttribute_mIsTemplate (in_mIsTemplate),
mAttribute_mTemplateDelimitorList (in_mTemplateDelimitorList),
mAttribute_mTemplateReplacementList (in_mTemplateReplacementList),
mAttribute_mLexicalAttributeList (in_mLexicalAttributeList),
mAttribute_mLexicalStyleList (in_mLexicalStyleList),
mAttribute_mTerminalDeclarationList (in_mTerminalDeclarationList),
mAttribute_mLexicalMessageDeclarationList (in_mLexicalMessageDeclarationList),
mAttribute_mLexicalListDeclarationList (in_mLexicalListDeclarationList),
mAttribute_mLexicalRuleList (in_mLexicalRuleList),
mAttribute_mExternRoutineList (in_mExternRoutineList),
mAttribute_mExternFunctionList (in_mExternFunctionList),
mAttribute_mIndexingListAST (in_mIndexingListAST),
mAttribute_mIndexingDirectory (in_mIndexingDirectory) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

void cPtr_lexiqueComponentAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@lexiqueComponentAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsTemplate.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalStyleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTerminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalMessageDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalListDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexicalRuleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExternRoutineList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mExternFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexingListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIndexingDirectory.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexiqueComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mAttribute_mIsPredefined, mAttribute_mLexiqueComponentName, mAttribute_mIsTemplate, mAttribute_mTemplateDelimitorList, mAttribute_mTemplateReplacementList, mAttribute_mLexicalAttributeList, mAttribute_mLexicalStyleList, mAttribute_mTerminalDeclarationList, mAttribute_mLexicalMessageDeclarationList, mAttribute_mLexicalListDeclarationList, mAttribute_mLexicalRuleList, mAttribute_mExternRoutineList, mAttribute_mExternFunctionList, mAttribute_mIndexingListAST, mAttribute_mIndexingDirectory COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @lexiqueComponentAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  const GALGAS_lexiqueComponentAST * p = (const GALGAS_lexiqueComponentAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_listDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listDeclarationAST * p = (const cPtr_listDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListTypeName.objectCompare (p->mAttribute_mListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_listDeclarationAST::objectCompare (const GALGAS_listDeclarationAST & inOperand) const {
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

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mListTypeName,
                                                                      const GALGAS_propertyInCollectionListAST & inAttribute_mAttributeList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mListTypeName.isValid () && inAttribute_mAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listDeclarationAST (inAttribute_mIsPredefined, inAttribute_mListTypeName, inAttribute_mAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @listDeclarationAST class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mListTypeName,
                                                  const GALGAS_propertyInCollectionListAST & in_mAttributeList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mListTypeName (in_mListTypeName),
mAttribute_mAttributeList (in_mAttributeList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

void cPtr_listDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@listDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_listDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mAttribute_mIsPredefined, mAttribute_mListTypeName, mAttribute_mAttributeList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @listDeclarationAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST result ;
  const GALGAS_listDeclarationAST * p = (const GALGAS_listDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_listmapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mListmapTypeName.objectCompare (p->mAttribute_mListmapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedListTypeName.objectCompare (p->mAttribute_mAssociatedListTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_listmapDeclarationAST::objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const {
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

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (const cPtr_listmapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_lstring & inAttribute_mListmapTypeName,
                                                                            const GALGAS_lstring & inAttribute_mAssociatedListTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mListmapTypeName.isValid () && inAttribute_mAssociatedListTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listmapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mListmapTypeName, inAttribute_mAssociatedListTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_listmapDeclarationAST::reader_mListmapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    result = p->mAttribute_mListmapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_listmapDeclarationAST::reader_mListmapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mListmapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_listmapDeclarationAST::reader_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    result = p->mAttribute_mAssociatedListTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_listmapDeclarationAST::reader_mAssociatedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedListTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @listmapDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_listmapDeclarationAST::cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mListmapTypeName,
                                                        const GALGAS_lstring & in_mAssociatedListTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mListmapTypeName (in_mListmapTypeName),
mAttribute_mAssociatedListTypeName (in_mAssociatedListTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_listmapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

void cPtr_listmapDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listmapDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mListmapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_listmapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapDeclarationAST (mAttribute_mIsPredefined, mAttribute_mListmapTypeName, mAttribute_mAssociatedListTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @listmapDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapDeclarationAST ("listmapDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_listmapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST result ;
  const GALGAS_listmapDeclarationAST * p = (const GALGAS_listmapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_mapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapTypeName.objectCompare (p->mAttribute_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPropertyList.objectCompare (p->mAttribute_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertMethodList.objectCompare (p->mAttribute_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodList.objectCompare (p->mAttribute_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mRemoveMethodList.objectCompare (p->mAttribute_mRemoveMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertOrReplaceDeclarationListAST.objectCompare (p->mAttribute_mInsertOrReplaceDeclarationListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_mapDeclarationAST::objectCompare (const GALGAS_mapDeclarationAST & inOperand) const {
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

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                    GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_mapRemoveMethodListAST::constructor_emptyList (HERE),
                                                    GALGAS_insertOrReplaceDeclarationListAST::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                    const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                    const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                    const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                    const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                    const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                    const GALGAS_mapRemoveMethodListAST & inAttribute_mRemoveMethodList,
                                                                    const GALGAS_insertOrReplaceDeclarationListAST & inAttribute_mInsertOrReplaceDeclarationListAST
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mRemoveMethodList.isValid () && inAttribute_mInsertOrReplaceDeclarationListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mRemoveMethodList, inAttribute_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapDeclarationAST::reader_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mapDeclarationAST::reader_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_mapDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_mapDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_mapDeclarationAST::reader_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_mapDeclarationAST::reader_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_mapDeclarationAST::reader_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mInsertMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST cPtr_mapDeclarationAST::reader_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_mapDeclarationAST::reader_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cPtr_mapDeclarationAST::reader_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST GALGAS_mapDeclarationAST::reader_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapRemoveMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mRemoveMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapRemoveMethodListAST cPtr_mapDeclarationAST::reader_mRemoveMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRemoveMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST GALGAS_mapDeclarationAST::reader_mInsertOrReplaceDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertOrReplaceDeclarationListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    result = p->mAttribute_mInsertOrReplaceDeclarationListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertOrReplaceDeclarationListAST cPtr_mapDeclarationAST::reader_mInsertOrReplaceDeclarationListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertOrReplaceDeclarationListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @mapDeclarationAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                const GALGAS_lstring & in_mMapTypeName,
                                                const GALGAS_lstringlist & in_mAttributeList,
                                                const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                const GALGAS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mMapTypeName (in_mMapTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mPropertyList (in_mPropertyList),
mAttribute_mInsertMethodList (in_mInsertMethodList),
mAttribute_mSearchMethodList (in_mSearchMethodList),
mAttribute_mRemoveMethodList (in_mRemoveMethodList),
mAttribute_mInsertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@mapDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_mapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mAttribute_mIsPredefined, mAttribute_mMapTypeName, mAttribute_mAttributeList, mAttribute_mPropertyList, mAttribute_mInsertMethodList, mAttribute_mSearchMethodList, mAttribute_mRemoveMethodList, mAttribute_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @mapDeclarationAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST result ;
  const GALGAS_mapDeclarationAST * p = (const GALGAS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_mapProxyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapProxyTypeName.objectCompare (p->mAttribute_mMapProxyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAssociatedMapTypeName.objectCompare (p->mAttribute_mAssociatedMapTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_mapProxyDeclarationAST::objectCompare (const GALGAS_mapProxyDeclarationAST & inOperand) const {
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

GALGAS_mapProxyDeclarationAST::GALGAS_mapProxyDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapProxyDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST::GALGAS_mapProxyDeclarationAST (const cPtr_mapProxyDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapProxyDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_lstring & inAttribute_mMapProxyTypeName,
                                                                              const GALGAS_lstring & inAttribute_mAssociatedMapTypeName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapProxyTypeName.isValid () && inAttribute_mAssociatedMapTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapProxyDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapProxyTypeName, inAttribute_mAssociatedMapTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapProxyDeclarationAST::reader_mMapProxyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    result = p->mAttribute_mMapProxyTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mapProxyDeclarationAST::reader_mMapProxyTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapProxyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_mapProxyDeclarationAST::reader_mAssociatedMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_mapProxyDeclarationAST * p = (const cPtr_mapProxyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapProxyDeclarationAST) ;
    result = p->mAttribute_mAssociatedMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_mapProxyDeclarationAST::reader_mAssociatedMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAssociatedMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @mapProxyDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_mapProxyDeclarationAST::cPtr_mapProxyDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_lstring & in_mMapProxyTypeName,
                                                          const GALGAS_lstring & in_mAssociatedMapTypeName
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mMapProxyTypeName (in_mMapProxyTypeName),
mAttribute_mAssociatedMapTypeName (in_mAssociatedMapTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_mapProxyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;
}

void cPtr_mapProxyDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@mapProxyDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapProxyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAssociatedMapTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_mapProxyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapProxyDeclarationAST (mAttribute_mIsPredefined, mAttribute_mMapProxyTypeName, mAttribute_mAssociatedMapTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @mapProxyDeclarationAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapProxyDeclarationAST ("mapProxyDeclarationAST",
                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mapProxyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapProxyDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mapProxyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapProxyDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapProxyDeclarationAST GALGAS_mapProxyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapProxyDeclarationAST result ;
  const GALGAS_mapProxyDeclarationAST * p = (const GALGAS_mapProxyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapProxyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapProxyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_onceFunctionDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultTypeName.objectCompare (p->mAttribute_mResultTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableName.objectCompare (p->mAttribute_mResultVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfFunctionInstructionList.objectCompare (p->mAttribute_mEndOfFunctionInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsInternal.objectCompare (p->mAttribute_mIsInternal) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_onceFunctionDeclarationAST::objectCompare (const GALGAS_onceFunctionDeclarationAST & inOperand) const {
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

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_onceFunctionDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                             GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_bool::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST::GALGAS_onceFunctionDeclarationAST (const cPtr_onceFunctionDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mFunctionName,
                                                                                      const GALGAS_lstring & inAttribute_mResultTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mResultVariableName,
                                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mFunctionInstructionList,
                                                                                      const GALGAS_location & inAttribute_mEndOfFunctionInstructionList,
                                                                                      const GALGAS_bool & inAttribute_mIsInternal
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mResultTypeName.isValid () && inAttribute_mResultVariableName.isValid () && inAttribute_mFunctionInstructionList.isValid () && inAttribute_mEndOfFunctionInstructionList.isValid () && inAttribute_mIsInternal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationAST (inAttribute_mIsPredefined, inAttribute_mFunctionName, inAttribute_mResultTypeName, inAttribute_mResultVariableName, inAttribute_mFunctionInstructionList, inAttribute_mEndOfFunctionInstructionList, inAttribute_mIsInternal COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_onceFunctionDeclarationAST::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::reader_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mResultTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_onceFunctionDeclarationAST::reader_mResultTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_onceFunctionDeclarationAST::reader_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mResultVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_onceFunctionDeclarationAST::reader_mResultVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_onceFunctionDeclarationAST::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_onceFunctionDeclarationAST::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_onceFunctionDeclarationAST::reader_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mEndOfFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_onceFunctionDeclarationAST::reader_mEndOfFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_onceFunctionDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationAST * p = (const cPtr_onceFunctionDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationAST) ;
    result = p->mAttribute_mIsInternal ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_onceFunctionDeclarationAST::reader_mIsInternal (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsInternal ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @onceFunctionDeclarationAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_onceFunctionDeclarationAST::cPtr_onceFunctionDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mFunctionName,
                                                                  const GALGAS_lstring & in_mResultTypeName,
                                                                  const GALGAS_lstring & in_mResultVariableName,
                                                                  const GALGAS_semanticInstructionListAST & in_mFunctionInstructionList,
                                                                  const GALGAS_location & in_mEndOfFunctionInstructionList,
                                                                  const GALGAS_bool & in_mIsInternal
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mResultTypeName (in_mResultTypeName),
mAttribute_mResultVariableName (in_mResultVariableName),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList),
mAttribute_mEndOfFunctionInstructionList (in_mEndOfFunctionInstructionList),
mAttribute_mIsInternal (in_mIsInternal) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

void cPtr_onceFunctionDeclarationAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@onceFunctionDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsInternal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_onceFunctionDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationAST (mAttribute_mIsPredefined, mAttribute_mFunctionName, mAttribute_mResultTypeName, mAttribute_mResultVariableName, mAttribute_mFunctionInstructionList, mAttribute_mEndOfFunctionInstructionList, mAttribute_mIsInternal COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @onceFunctionDeclarationAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ("onceFunctionDeclarationAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_onceFunctionDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST result ;
  const GALGAS_onceFunctionDeclarationAST * p = (const GALGAS_onceFunctionDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_onceFunctionDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_optionComponentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionComponentName.objectCompare (p->mAttribute_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptions.objectCompare (p->mAttribute_mOptions) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_optionComponentDeclarationAST::objectCompare (const GALGAS_optionComponentDeclarationAST & inOperand) const {
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

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_commandLineOptionListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_lstring & inAttribute_mOptionComponentName,
                                                                                            const GALGAS_commandLineOptionListAST & inAttribute_mOptions
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mOptions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionComponentDeclarationAST (inAttribute_mIsPredefined, inAttribute_mOptionComponentName, inAttribute_mOptions COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_optionComponentDeclarationAST::reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    result = p->mAttribute_mOptionComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_optionComponentDeclarationAST::reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST GALGAS_optionComponentDeclarationAST::reader_mOptions (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    result = p->mAttribute_mOptions ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionListAST cPtr_optionComponentDeclarationAST::reader_mOptions (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptions ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @optionComponentDeclarationAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lstring & in_mOptionComponentName,
                                                                        const GALGAS_commandLineOptionListAST & in_mOptions
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mOptionComponentName (in_mOptionComponentName),
mAttribute_mOptions (in_mOptions) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_optionComponentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

void cPtr_optionComponentDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@optionComponentDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_optionComponentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mAttribute_mIsPredefined, mAttribute_mOptionComponentName, mAttribute_mOptions COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @optionComponentDeclarationAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST result ;
  const GALGAS_optionComponentDeclarationAST * p = (const GALGAS_optionComponentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingAbstractCategoryMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractCategoryMethodAST * p = (const cPtr_overridingAbstractCategoryMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractCategoryMethodAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryMethodName.objectCompare (p->mAttribute_mOverridingCategoryMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryMethodFormalParameterList.objectCompare (p->mAttribute_mOverridingCategoryMethodFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingAbstractCategoryMethodAST::objectCompare (const GALGAS_overridingAbstractCategoryMethodAST & inOperand) const {
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

GALGAS_overridingAbstractCategoryMethodAST::GALGAS_overridingAbstractCategoryMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryMethodAST GALGAS_overridingAbstractCategoryMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractCategoryMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_lstring::constructor_default (HERE),
                                                                      GALGAS_lstring::constructor_default (HERE),
                                                                      GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryMethodAST::GALGAS_overridingAbstractCategoryMethodAST (const cPtr_overridingAbstractCategoryMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractCategoryMethodAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryMethodAST GALGAS_overridingAbstractCategoryMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                        const GALGAS_lstring & inAttribute_mOverridingCategoryMethodName,
                                                                                                        const GALGAS_formalParameterListAST & inAttribute_mOverridingCategoryMethodFormalParameterList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractCategoryMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingCategoryMethodName.isValid () && inAttribute_mOverridingCategoryMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractCategoryMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingCategoryMethodName, inAttribute_mOverridingCategoryMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractCategoryMethodAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryMethodAST * p = (const cPtr_overridingAbstractCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryMethodAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractCategoryMethodAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractCategoryMethodAST::reader_mOverridingCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryMethodAST * p = (const cPtr_overridingAbstractCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryMethodAST) ;
    result = p->mAttribute_mOverridingCategoryMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractCategoryMethodAST::reader_mOverridingCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingAbstractCategoryMethodAST::reader_mOverridingCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryMethodAST * p = (const cPtr_overridingAbstractCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryMethodAST) ;
    result = p->mAttribute_mOverridingCategoryMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingAbstractCategoryMethodAST::reader_mOverridingCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @overridingAbstractCategoryMethodAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingAbstractCategoryMethodAST::cPtr_overridingAbstractCategoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                                    const GALGAS_lstring & in_mTypeName,
                                                                                    const GALGAS_lstring & in_mOverridingCategoryMethodName,
                                                                                    const GALGAS_formalParameterListAST & in_mOverridingCategoryMethodFormalParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingCategoryMethodName (in_mOverridingCategoryMethodName),
mAttribute_mOverridingCategoryMethodFormalParameterList (in_mOverridingCategoryMethodFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingAbstractCategoryMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST ;
}

void cPtr_overridingAbstractCategoryMethodAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@overridingAbstractCategoryMethodAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingAbstractCategoryMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractCategoryMethodAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingCategoryMethodName, mAttribute_mOverridingCategoryMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @overridingAbstractCategoryMethodAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST ("overridingAbstractCategoryMethodAST",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingAbstractCategoryMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingAbstractCategoryMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractCategoryMethodAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryMethodAST GALGAS_overridingAbstractCategoryMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractCategoryMethodAST result ;
  const GALGAS_overridingAbstractCategoryMethodAST * p = (const GALGAS_overridingAbstractCategoryMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractCategoryMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractCategoryMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingAbstractCategoryModifierAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractCategoryModifierAST * p = (const cPtr_overridingAbstractCategoryModifierAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractCategoryModifierAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryModifierName.objectCompare (p->mAttribute_mOverridingCategoryModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryModifierFormalParameterList.objectCompare (p->mAttribute_mOverridingCategoryModifierFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingAbstractCategoryModifierAST::objectCompare (const GALGAS_overridingAbstractCategoryModifierAST & inOperand) const {
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

GALGAS_overridingAbstractCategoryModifierAST::GALGAS_overridingAbstractCategoryModifierAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryModifierAST GALGAS_overridingAbstractCategoryModifierAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractCategoryModifierAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                        GALGAS_lstring::constructor_default (HERE),
                                                                        GALGAS_lstring::constructor_default (HERE),
                                                                        GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryModifierAST::GALGAS_overridingAbstractCategoryModifierAST (const cPtr_overridingAbstractCategoryModifierAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractCategoryModifierAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryModifierAST GALGAS_overridingAbstractCategoryModifierAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                            const GALGAS_lstring & inAttribute_mOverridingCategoryModifierName,
                                                                                                            const GALGAS_formalParameterListAST & inAttribute_mOverridingCategoryModifierFormalParameterList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractCategoryModifierAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingCategoryModifierName.isValid () && inAttribute_mOverridingCategoryModifierFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractCategoryModifierAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingCategoryModifierName, inAttribute_mOverridingCategoryModifierFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractCategoryModifierAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryModifierAST * p = (const cPtr_overridingAbstractCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryModifierAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractCategoryModifierAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractCategoryModifierAST::reader_mOverridingCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryModifierAST * p = (const cPtr_overridingAbstractCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryModifierAST) ;
    result = p->mAttribute_mOverridingCategoryModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractCategoryModifierAST::reader_mOverridingCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingAbstractCategoryModifierAST::reader_mOverridingCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryModifierAST * p = (const cPtr_overridingAbstractCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryModifierAST) ;
    result = p->mAttribute_mOverridingCategoryModifierFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingAbstractCategoryModifierAST::reader_mOverridingCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryModifierFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @overridingAbstractCategoryModifierAST class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingAbstractCategoryModifierAST::cPtr_overridingAbstractCategoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                                                                        const GALGAS_lstring & in_mTypeName,
                                                                                        const GALGAS_lstring & in_mOverridingCategoryModifierName,
                                                                                        const GALGAS_formalParameterListAST & in_mOverridingCategoryModifierFormalParameterList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingCategoryModifierName (in_mOverridingCategoryModifierName),
mAttribute_mOverridingCategoryModifierFormalParameterList (in_mOverridingCategoryModifierFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingAbstractCategoryModifierAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST ;
}

void cPtr_overridingAbstractCategoryModifierAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@overridingAbstractCategoryModifierAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryModifierFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingAbstractCategoryModifierAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractCategoryModifierAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingCategoryModifierName, mAttribute_mOverridingCategoryModifierFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingAbstractCategoryModifierAST type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST ("overridingAbstractCategoryModifierAST",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingAbstractCategoryModifierAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingAbstractCategoryModifierAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractCategoryModifierAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryModifierAST GALGAS_overridingAbstractCategoryModifierAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractCategoryModifierAST result ;
  const GALGAS_overridingAbstractCategoryModifierAST * p = (const GALGAS_overridingAbstractCategoryModifierAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractCategoryModifierAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractCategoryModifierAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingAbstractCategoryReaderAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingAbstractCategoryReaderAST * p = (const cPtr_overridingAbstractCategoryReaderAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingAbstractCategoryReaderAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryReaderName.objectCompare (p->mAttribute_mAbstractCategoryReaderName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryReaderFormalInputParameterList.objectCompare (p->mAttribute_mAbstractCategoryReaderFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryReaderReturnedTypeName.objectCompare (p->mAttribute_mAbstractCategoryReaderReturnedTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingAbstractCategoryReaderAST::objectCompare (const GALGAS_overridingAbstractCategoryReaderAST & inOperand) const {
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

GALGAS_overridingAbstractCategoryReaderAST::GALGAS_overridingAbstractCategoryReaderAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryReaderAST GALGAS_overridingAbstractCategoryReaderAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingAbstractCategoryReaderAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_lstring::constructor_default (HERE),
                                                                      GALGAS_lstring::constructor_default (HERE),
                                                                      GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                                      GALGAS_lstring::constructor_default (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryReaderAST::GALGAS_overridingAbstractCategoryReaderAST (const cPtr_overridingAbstractCategoryReaderAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractCategoryReaderAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryReaderAST GALGAS_overridingAbstractCategoryReaderAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                                                        const GALGAS_lstring & inAttribute_mAbstractCategoryReaderName,
                                                                                                        const GALGAS_formalInputParameterListAST & inAttribute_mAbstractCategoryReaderFormalInputParameterList,
                                                                                                        const GALGAS_lstring & inAttribute_mAbstractCategoryReaderReturnedTypeName
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractCategoryReaderAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractCategoryReaderName.isValid () && inAttribute_mAbstractCategoryReaderFormalInputParameterList.isValid () && inAttribute_mAbstractCategoryReaderReturnedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingAbstractCategoryReaderAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractCategoryReaderName, inAttribute_mAbstractCategoryReaderFormalInputParameterList, inAttribute_mAbstractCategoryReaderReturnedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractCategoryReaderAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryReaderAST * p = (const cPtr_overridingAbstractCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryReaderAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractCategoryReaderAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractCategoryReaderAST::reader_mAbstractCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryReaderAST * p = (const cPtr_overridingAbstractCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryReaderAST) ;
    result = p->mAttribute_mAbstractCategoryReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractCategoryReaderAST::reader_mAbstractCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_overridingAbstractCategoryReaderAST::reader_mAbstractCategoryReaderFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryReaderAST * p = (const cPtr_overridingAbstractCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryReaderAST) ;
    result = p->mAttribute_mAbstractCategoryReaderFormalInputParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cPtr_overridingAbstractCategoryReaderAST::reader_mAbstractCategoryReaderFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryReaderFormalInputParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingAbstractCategoryReaderAST::reader_mAbstractCategoryReaderReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingAbstractCategoryReaderAST * p = (const cPtr_overridingAbstractCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractCategoryReaderAST) ;
    result = p->mAttribute_mAbstractCategoryReaderReturnedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingAbstractCategoryReaderAST::reader_mAbstractCategoryReaderReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryReaderReturnedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @overridingAbstractCategoryReaderAST class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingAbstractCategoryReaderAST::cPtr_overridingAbstractCategoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                                                                    const GALGAS_lstring & in_mTypeName,
                                                                                    const GALGAS_lstring & in_mAbstractCategoryReaderName,
                                                                                    const GALGAS_formalInputParameterListAST & in_mAbstractCategoryReaderFormalInputParameterList,
                                                                                    const GALGAS_lstring & in_mAbstractCategoryReaderReturnedTypeName
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mAbstractCategoryReaderName (in_mAbstractCategoryReaderName),
mAttribute_mAbstractCategoryReaderFormalInputParameterList (in_mAbstractCategoryReaderFormalInputParameterList),
mAttribute_mAbstractCategoryReaderReturnedTypeName (in_mAbstractCategoryReaderReturnedTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingAbstractCategoryReaderAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST ;
}

void cPtr_overridingAbstractCategoryReaderAST::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@overridingAbstractCategoryReaderAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryReaderName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryReaderFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryReaderReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingAbstractCategoryReaderAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingAbstractCategoryReaderAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mAbstractCategoryReaderName, mAttribute_mAbstractCategoryReaderFormalInputParameterList, mAttribute_mAbstractCategoryReaderReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @overridingAbstractCategoryReaderAST type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST ("overridingAbstractCategoryReaderAST",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingAbstractCategoryReaderAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingAbstractCategoryReaderAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingAbstractCategoryReaderAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingAbstractCategoryReaderAST GALGAS_overridingAbstractCategoryReaderAST::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_overridingAbstractCategoryReaderAST result ;
  const GALGAS_overridingAbstractCategoryReaderAST * p = (const GALGAS_overridingAbstractCategoryReaderAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingAbstractCategoryReaderAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingAbstractCategoryReaderAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingCategoryMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingCategoryMethodAST * p = (const cPtr_overridingCategoryMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingCategoryMethodAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryMethodName.objectCompare (p->mAttribute_mOverridingCategoryMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryMethodFormalParameterList.objectCompare (p->mAttribute_mOverridingCategoryMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryMethodInstructionList.objectCompare (p->mAttribute_mOverridingCategoryMethodInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfMethodLocation.objectCompare (p->mAttribute_mEndOfMethodLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingCategoryMethodAST::objectCompare (const GALGAS_overridingCategoryMethodAST & inOperand) const {
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

GALGAS_overridingCategoryMethodAST::GALGAS_overridingCategoryMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodAST GALGAS_overridingCategoryMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingCategoryMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                              GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodAST::GALGAS_overridingCategoryMethodAST (const cPtr_overridingCategoryMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingCategoryMethodAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodAST GALGAS_overridingCategoryMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mOverridingCategoryMethodName,
                                                                                        const GALGAS_formalParameterListAST & inAttribute_mOverridingCategoryMethodFormalParameterList,
                                                                                        const GALGAS_semanticInstructionListAST & inAttribute_mOverridingCategoryMethodInstructionList,
                                                                                        const GALGAS_location & inAttribute_mEndOfMethodLocation
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingCategoryMethodName.isValid () && inAttribute_mOverridingCategoryMethodFormalParameterList.isValid () && inAttribute_mOverridingCategoryMethodInstructionList.isValid () && inAttribute_mEndOfMethodLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingCategoryMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingCategoryMethodName, inAttribute_mOverridingCategoryMethodFormalParameterList, inAttribute_mOverridingCategoryMethodInstructionList, inAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryMethodAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodAST * p = (const cPtr_overridingCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryMethodAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryMethodAST::reader_mOverridingCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodAST * p = (const cPtr_overridingCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodAST) ;
    result = p->mAttribute_mOverridingCategoryMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryMethodAST::reader_mOverridingCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingCategoryMethodAST::reader_mOverridingCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodAST * p = (const cPtr_overridingCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodAST) ;
    result = p->mAttribute_mOverridingCategoryMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingCategoryMethodAST::reader_mOverridingCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_overridingCategoryMethodAST::reader_mOverridingCategoryMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodAST * p = (const cPtr_overridingCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodAST) ;
    result = p->mAttribute_mOverridingCategoryMethodInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_overridingCategoryMethodAST::reader_mOverridingCategoryMethodInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryMethodInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_overridingCategoryMethodAST::reader_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodAST * p = (const cPtr_overridingCategoryMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodAST) ;
    result = p->mAttribute_mEndOfMethodLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_overridingCategoryMethodAST::reader_mEndOfMethodLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfMethodLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @overridingCategoryMethodAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingCategoryMethodAST::cPtr_overridingCategoryMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_lstring & in_mTypeName,
                                                                    const GALGAS_lstring & in_mOverridingCategoryMethodName,
                                                                    const GALGAS_formalParameterListAST & in_mOverridingCategoryMethodFormalParameterList,
                                                                    const GALGAS_semanticInstructionListAST & in_mOverridingCategoryMethodInstructionList,
                                                                    const GALGAS_location & in_mEndOfMethodLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingCategoryMethodName (in_mOverridingCategoryMethodName),
mAttribute_mOverridingCategoryMethodFormalParameterList (in_mOverridingCategoryMethodFormalParameterList),
mAttribute_mOverridingCategoryMethodInstructionList (in_mOverridingCategoryMethodInstructionList),
mAttribute_mEndOfMethodLocation (in_mEndOfMethodLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingCategoryMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryMethodAST ;
}

void cPtr_overridingCategoryMethodAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@overridingCategoryMethodAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryMethodInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfMethodLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingCategoryMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingCategoryMethodAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingCategoryMethodName, mAttribute_mOverridingCategoryMethodFormalParameterList, mAttribute_mOverridingCategoryMethodInstructionList, mAttribute_mEndOfMethodLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @overridingCategoryMethodAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingCategoryMethodAST ("overridingCategoryMethodAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingCategoryMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryMethodAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingCategoryMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingCategoryMethodAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodAST GALGAS_overridingCategoryMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryMethodAST result ;
  const GALGAS_overridingCategoryMethodAST * p = (const GALGAS_overridingCategoryMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingCategoryMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingCategoryMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingCategoryModifierAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingCategoryModifierAST * p = (const cPtr_overridingCategoryModifierAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingCategoryModifierAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryModifierName.objectCompare (p->mAttribute_mOverridingCategoryModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryModifierFormalParameterList.objectCompare (p->mAttribute_mOverridingCategoryModifierFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryModifierInstructionList.objectCompare (p->mAttribute_mOverridingCategoryModifierInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfModifierLocation.objectCompare (p->mAttribute_mEndOfModifierLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingCategoryModifierAST::objectCompare (const GALGAS_overridingCategoryModifierAST & inOperand) const {
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

GALGAS_overridingCategoryModifierAST::GALGAS_overridingCategoryModifierAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierAST GALGAS_overridingCategoryModifierAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingCategoryModifierAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_formalParameterListAST::constructor_emptyList (HERE),
                                                                GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierAST::GALGAS_overridingCategoryModifierAST (const cPtr_overridingCategoryModifierAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingCategoryModifierAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierAST GALGAS_overridingCategoryModifierAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                            const GALGAS_lstring & inAttribute_mTypeName,
                                                                                            const GALGAS_lstring & inAttribute_mOverridingCategoryModifierName,
                                                                                            const GALGAS_formalParameterListAST & inAttribute_mOverridingCategoryModifierFormalParameterList,
                                                                                            const GALGAS_semanticInstructionListAST & inAttribute_mOverridingCategoryModifierInstructionList,
                                                                                            const GALGAS_location & inAttribute_mEndOfModifierLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryModifierAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingCategoryModifierName.isValid () && inAttribute_mOverridingCategoryModifierFormalParameterList.isValid () && inAttribute_mOverridingCategoryModifierInstructionList.isValid () && inAttribute_mEndOfModifierLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingCategoryModifierAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingCategoryModifierName, inAttribute_mOverridingCategoryModifierFormalParameterList, inAttribute_mOverridingCategoryModifierInstructionList, inAttribute_mEndOfModifierLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryModifierAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierAST * p = (const cPtr_overridingCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryModifierAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryModifierAST::reader_mOverridingCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierAST * p = (const cPtr_overridingCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierAST) ;
    result = p->mAttribute_mOverridingCategoryModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryModifierAST::reader_mOverridingCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST GALGAS_overridingCategoryModifierAST::reader_mOverridingCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierAST * p = (const cPtr_overridingCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierAST) ;
    result = p->mAttribute_mOverridingCategoryModifierFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListAST cPtr_overridingCategoryModifierAST::reader_mOverridingCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryModifierFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_overridingCategoryModifierAST::reader_mOverridingCategoryModifierInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierAST * p = (const cPtr_overridingCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierAST) ;
    result = p->mAttribute_mOverridingCategoryModifierInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_overridingCategoryModifierAST::reader_mOverridingCategoryModifierInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryModifierInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_overridingCategoryModifierAST::reader_mEndOfModifierLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierAST * p = (const cPtr_overridingCategoryModifierAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierAST) ;
    result = p->mAttribute_mEndOfModifierLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_overridingCategoryModifierAST::reader_mEndOfModifierLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfModifierLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @overridingCategoryModifierAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingCategoryModifierAST::cPtr_overridingCategoryModifierAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lstring & in_mTypeName,
                                                                        const GALGAS_lstring & in_mOverridingCategoryModifierName,
                                                                        const GALGAS_formalParameterListAST & in_mOverridingCategoryModifierFormalParameterList,
                                                                        const GALGAS_semanticInstructionListAST & in_mOverridingCategoryModifierInstructionList,
                                                                        const GALGAS_location & in_mEndOfModifierLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingCategoryModifierName (in_mOverridingCategoryModifierName),
mAttribute_mOverridingCategoryModifierFormalParameterList (in_mOverridingCategoryModifierFormalParameterList),
mAttribute_mOverridingCategoryModifierInstructionList (in_mOverridingCategoryModifierInstructionList),
mAttribute_mEndOfModifierLocation (in_mEndOfModifierLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingCategoryModifierAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryModifierAST ;
}

void cPtr_overridingCategoryModifierAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@overridingCategoryModifierAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryModifierFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryModifierInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfModifierLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingCategoryModifierAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingCategoryModifierAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingCategoryModifierName, mAttribute_mOverridingCategoryModifierFormalParameterList, mAttribute_mOverridingCategoryModifierInstructionList, mAttribute_mEndOfModifierLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @overridingCategoryModifierAST type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingCategoryModifierAST ("overridingCategoryModifierAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingCategoryModifierAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryModifierAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingCategoryModifierAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingCategoryModifierAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierAST GALGAS_overridingCategoryModifierAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryModifierAST result ;
  const GALGAS_overridingCategoryModifierAST * p = (const GALGAS_overridingCategoryModifierAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingCategoryModifierAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingCategoryModifierAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingCategoryReaderAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypeName.objectCompare (p->mAttribute_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryReaderName.objectCompare (p->mAttribute_mOverridingCategoryReaderName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryReaderFormalInputParameterList.objectCompare (p->mAttribute_mOverridingCategoryReaderFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryReaderReturnedTypeName.objectCompare (p->mAttribute_mOverridingCategoryReaderReturnedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryReaderReturnedVariableName.objectCompare (p->mAttribute_mOverridingCategoryReaderReturnedVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryReaderInstructionList.objectCompare (p->mAttribute_mOverridingCategoryReaderInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEndOfReaderLocation.objectCompare (p->mAttribute_mEndOfReaderLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingCategoryReaderAST::objectCompare (const GALGAS_overridingCategoryReaderAST & inOperand) const {
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

GALGAS_overridingCategoryReaderAST::GALGAS_overridingCategoryReaderAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryReaderAST GALGAS_overridingCategoryReaderAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingCategoryReaderAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                              GALGAS_location::constructor_nowhere (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryReaderAST::GALGAS_overridingCategoryReaderAST (const cPtr_overridingCategoryReaderAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingCategoryReaderAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryReaderAST GALGAS_overridingCategoryReaderAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                        const GALGAS_lstring & inAttribute_mTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mOverridingCategoryReaderName,
                                                                                        const GALGAS_formalInputParameterListAST & inAttribute_mOverridingCategoryReaderFormalInputParameterList,
                                                                                        const GALGAS_lstring & inAttribute_mOverridingCategoryReaderReturnedTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mOverridingCategoryReaderReturnedVariableName,
                                                                                        const GALGAS_semanticInstructionListAST & inAttribute_mOverridingCategoryReaderInstructionList,
                                                                                        const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryReaderAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mOverridingCategoryReaderName.isValid () && inAttribute_mOverridingCategoryReaderFormalInputParameterList.isValid () && inAttribute_mOverridingCategoryReaderReturnedTypeName.isValid () && inAttribute_mOverridingCategoryReaderReturnedVariableName.isValid () && inAttribute_mOverridingCategoryReaderInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingCategoryReaderAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mOverridingCategoryReaderName, inAttribute_mOverridingCategoryReaderFormalInputParameterList, inAttribute_mOverridingCategoryReaderReturnedTypeName, inAttribute_mOverridingCategoryReaderReturnedVariableName, inAttribute_mOverridingCategoryReaderInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryReaderAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
    result = p->mAttribute_mTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryReaderAST::reader_mTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryReaderAST::reader_mOverridingCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
    result = p->mAttribute_mOverridingCategoryReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryReaderAST::reader_mOverridingCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST GALGAS_overridingCategoryReaderAST::reader_mOverridingCategoryReaderFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
    result = p->mAttribute_mOverridingCategoryReaderFormalInputParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListAST cPtr_overridingCategoryReaderAST::reader_mOverridingCategoryReaderFormalInputParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryReaderFormalInputParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryReaderAST::reader_mOverridingCategoryReaderReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
    result = p->mAttribute_mOverridingCategoryReaderReturnedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryReaderAST::reader_mOverridingCategoryReaderReturnedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryReaderReturnedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_overridingCategoryReaderAST::reader_mOverridingCategoryReaderReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
    result = p->mAttribute_mOverridingCategoryReaderReturnedVariableName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_overridingCategoryReaderAST::reader_mOverridingCategoryReaderReturnedVariableName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryReaderReturnedVariableName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST GALGAS_overridingCategoryReaderAST::reader_mOverridingCategoryReaderInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
    result = p->mAttribute_mOverridingCategoryReaderInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListAST cPtr_overridingCategoryReaderAST::reader_mOverridingCategoryReaderInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryReaderInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_overridingCategoryReaderAST::reader_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  GALGAS_location result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryReaderAST * p = (const cPtr_overridingCategoryReaderAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryReaderAST) ;
    result = p->mAttribute_mEndOfReaderLocation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location cPtr_overridingCategoryReaderAST::reader_mEndOfReaderLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEndOfReaderLocation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @overridingCategoryReaderAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingCategoryReaderAST::cPtr_overridingCategoryReaderAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_lstring & in_mTypeName,
                                                                    const GALGAS_lstring & in_mOverridingCategoryReaderName,
                                                                    const GALGAS_formalInputParameterListAST & in_mOverridingCategoryReaderFormalInputParameterList,
                                                                    const GALGAS_lstring & in_mOverridingCategoryReaderReturnedTypeName,
                                                                    const GALGAS_lstring & in_mOverridingCategoryReaderReturnedVariableName,
                                                                    const GALGAS_semanticInstructionListAST & in_mOverridingCategoryReaderInstructionList,
                                                                    const GALGAS_location & in_mEndOfReaderLocation
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mTypeName (in_mTypeName),
mAttribute_mOverridingCategoryReaderName (in_mOverridingCategoryReaderName),
mAttribute_mOverridingCategoryReaderFormalInputParameterList (in_mOverridingCategoryReaderFormalInputParameterList),
mAttribute_mOverridingCategoryReaderReturnedTypeName (in_mOverridingCategoryReaderReturnedTypeName),
mAttribute_mOverridingCategoryReaderReturnedVariableName (in_mOverridingCategoryReaderReturnedVariableName),
mAttribute_mOverridingCategoryReaderInstructionList (in_mOverridingCategoryReaderInstructionList),
mAttribute_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingCategoryReaderAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryReaderAST ;
}

void cPtr_overridingCategoryReaderAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@overridingCategoryReaderAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryReaderName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryReaderFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryReaderReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryReaderReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryReaderInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingCategoryReaderAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingCategoryReaderAST (mAttribute_mIsPredefined, mAttribute_mTypeName, mAttribute_mOverridingCategoryReaderName, mAttribute_mOverridingCategoryReaderFormalInputParameterList, mAttribute_mOverridingCategoryReaderReturnedTypeName, mAttribute_mOverridingCategoryReaderReturnedVariableName, mAttribute_mOverridingCategoryReaderInstructionList, mAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @overridingCategoryReaderAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingCategoryReaderAST ("overridingCategoryReaderAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingCategoryReaderAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryReaderAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingCategoryReaderAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingCategoryReaderAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryReaderAST GALGAS_overridingCategoryReaderAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryReaderAST result ;
  const GALGAS_overridingCategoryReaderAST * p = (const GALGAS_overridingCategoryReaderAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingCategoryReaderAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingCategoryReaderAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_predefinedTypeAST::objectCompare (const GALGAS_predefinedTypeAST & inOperand) const {
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

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeAST::GALGAS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_predefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_predefinedTypeAST::reader_mPredefinedTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_predefinedTypeAST * p = (const cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    result = p->mAttribute_mPredefinedTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_predefinedTypeAST::reader_mPredefinedTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPredefinedTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum GALGAS_predefinedTypeAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_predefinedTypeKindEnum result ;
  if (NULL != mObjectPtr) {
    const cPtr_predefinedTypeAST * p = (const cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    result = p->mAttribute_mKind ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypeKindEnum cPtr_predefinedTypeAST::reader_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @predefinedTypeAST class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                const GALGAS_string & in_mPredefinedTypeName,
                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mPredefinedTypeName (in_mPredefinedTypeName),
mAttribute_mKind (in_mKind) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @predefinedTypeAST type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_predefinedTypeAST ("predefinedTypeAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_predefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_predefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_predefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_applicationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_applicationPredefinedTypeAST * p = (const cPtr_applicationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_applicationPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_applicationPredefinedTypeAST::objectCompare (const GALGAS_applicationPredefinedTypeAST & inOperand) const {
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

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_applicationPredefinedTypeAST::GALGAS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @applicationPredefinedTypeAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_applicationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

void cPtr_applicationPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@applicationPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_applicationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_applicationPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @applicationPredefinedTypeAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ("applicationPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_applicationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_applicationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_applicationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_bigintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bigintPredefinedTypeAST * p = (const cPtr_bigintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bigintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_bigintPredefinedTypeAST::objectCompare (const GALGAS_bigintPredefinedTypeAST & inOperand) const {
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

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bigintPredefinedTypeAST::GALGAS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bigintPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @bigintPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_bigintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

void cPtr_bigintPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@bigintPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_bigintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bigintPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @bigintPredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ("bigintPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bigintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bigintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bigintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_binarysetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_binarysetPredefinedTypeAST * p = (const cPtr_binarysetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_binarysetPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_binarysetPredefinedTypeAST::objectCompare (const GALGAS_binarysetPredefinedTypeAST & inOperand) const {
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

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_binarysetPredefinedTypeAST::GALGAS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @binarysetPredefinedTypeAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@binarysetPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_binarysetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @binarysetPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolPredefinedTypeAST * p = (const cPtr_boolPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_boolPredefinedTypeAST::objectCompare (const GALGAS_boolPredefinedTypeAST & inOperand) const {
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

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolPredefinedTypeAST::GALGAS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @boolPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

void cPtr_boolPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@boolPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @boolPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolPredefinedTypeAST ("boolPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_charPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_charPredefinedTypeAST * p = (const cPtr_charPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_charPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_charPredefinedTypeAST::objectCompare (const GALGAS_charPredefinedTypeAST & inOperand) const {
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

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_charPredefinedTypeAST::GALGAS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_charPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @charPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_charPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

void cPtr_charPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@charPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_charPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_charPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @charPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_charPredefinedTypeAST ("charPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_charPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_charPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_charPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_dataPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dataPredefinedTypeAST * p = (const cPtr_dataPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dataPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_dataPredefinedTypeAST::objectCompare (const GALGAS_dataPredefinedTypeAST & inOperand) const {
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

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataPredefinedTypeAST::GALGAS_dataPredefinedTypeAST (const cPtr_dataPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dataPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dataPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @dataPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_dataPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

void cPtr_dataPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@dataPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_dataPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dataPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @dataPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dataPredefinedTypeAST ("dataPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_dataPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_dataPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dataPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dataPredefinedTypeAST GALGAS_dataPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dataPredefinedTypeAST result ;
  const GALGAS_dataPredefinedTypeAST * p = (const GALGAS_dataPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dataPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dataPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_doublePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_doublePredefinedTypeAST * p = (const cPtr_doublePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_doublePredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_doublePredefinedTypeAST::objectCompare (const GALGAS_doublePredefinedTypeAST & inOperand) const {
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

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doublePredefinedTypeAST::GALGAS_doublePredefinedTypeAST (const cPtr_doublePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doublePredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_doublePredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @doublePredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_doublePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

void cPtr_doublePredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@doublePredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_doublePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_doublePredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @doublePredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_doublePredefinedTypeAST ("doublePredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_doublePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_doublePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_doublePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_doublePredefinedTypeAST GALGAS_doublePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_doublePredefinedTypeAST result ;
  const GALGAS_doublePredefinedTypeAST * p = (const GALGAS_doublePredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_doublePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doublePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperPredefinedTypeAST * p = (const cPtr_filewrapperPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_filewrapperPredefinedTypeAST::objectCompare (const GALGAS_filewrapperPredefinedTypeAST & inOperand) const {
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

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperPredefinedTypeAST::GALGAS_filewrapperPredefinedTypeAST (const cPtr_filewrapperPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @filewrapperPredefinedTypeAST class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperPredefinedTypeAST::cPtr_filewrapperPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mPredefinedTypeName,
                                                                      const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

void cPtr_filewrapperPredefinedTypeAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@filewrapperPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @filewrapperPredefinedTypeAST type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ("filewrapperPredefinedTypeAST",
                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionPredefinedTypeAST * p = (const cPtr_functionPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionPredefinedTypeAST::objectCompare (const GALGAS_functionPredefinedTypeAST & inOperand) const {
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

GALGAS_functionPredefinedTypeAST::GALGAS_functionPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPredefinedTypeAST::GALGAS_functionPredefinedTypeAST (const cPtr_functionPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPredefinedTypeAST GALGAS_functionPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                    const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @functionPredefinedTypeAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionPredefinedTypeAST::cPtr_functionPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_string & in_mPredefinedTypeName,
                                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;
}

void cPtr_functionPredefinedTypeAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@functionPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @functionPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPredefinedTypeAST ("functionPredefinedTypeAST",
                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPredefinedTypeAST GALGAS_functionPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPredefinedTypeAST result ;
  const GALGAS_functionPredefinedTypeAST * p = (const GALGAS_functionPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_locationPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_locationPredefinedTypeAST * p = (const cPtr_locationPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_locationPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_locationPredefinedTypeAST::objectCompare (const GALGAS_locationPredefinedTypeAST & inOperand) const {
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

GALGAS_locationPredefinedTypeAST::GALGAS_locationPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationPredefinedTypeAST::GALGAS_locationPredefinedTypeAST (const cPtr_locationPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_locationPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationPredefinedTypeAST GALGAS_locationPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                    const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                    const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_locationPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @locationPredefinedTypeAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_locationPredefinedTypeAST::cPtr_locationPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                const GALGAS_string & in_mPredefinedTypeName,
                                                                const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_locationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

void cPtr_locationPredefinedTypeAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@locationPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_locationPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_locationPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @locationPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_locationPredefinedTypeAST ("locationPredefinedTypeAST",
                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_locationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_locationPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_locationPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_locationPredefinedTypeAST GALGAS_locationPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_locationPredefinedTypeAST result ;
  const GALGAS_locationPredefinedTypeAST * p = (const GALGAS_locationPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_locationPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("locationPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_objectPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_objectPredefinedTypeAST * p = (const cPtr_objectPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_objectPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_objectPredefinedTypeAST::objectCompare (const GALGAS_objectPredefinedTypeAST & inOperand) const {
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

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_objectPredefinedTypeAST::GALGAS_objectPredefinedTypeAST (const cPtr_objectPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_objectPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @objectPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_objectPredefinedTypeAST::cPtr_objectPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_objectPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

void cPtr_objectPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@objectPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_objectPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_objectPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @objectPredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_objectPredefinedTypeAST ("objectPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_objectPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_objectPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_objectPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_objectPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sint_36__34_PredefinedTypeAST * p = (const cPtr_sint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST & inOperand) const {
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

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sint_36__34_PredefinedTypeAST::GALGAS_sint_36__34_PredefinedTypeAST (const cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34_PredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @sint64PredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sint_36__34_PredefinedTypeAST::cPtr_sint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

void cPtr_sint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@sint64PredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sint_36__34_PredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @sint64PredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ("sint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sintPredefinedTypeAST * p = (const cPtr_sintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sintPredefinedTypeAST::objectCompare (const GALGAS_sintPredefinedTypeAST & inOperand) const {
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

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sintPredefinedTypeAST::GALGAS_sintPredefinedTypeAST (const cPtr_sintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sintPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @sintPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

void cPtr_sintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@sintPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sintPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @sintPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sintPredefinedTypeAST ("sintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_stringPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringPredefinedTypeAST * p = (const cPtr_stringPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_stringPredefinedTypeAST::objectCompare (const GALGAS_stringPredefinedTypeAST & inOperand) const {
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

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (const cPtr_stringPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @stringPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_stringPredefinedTypeAST::cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName,
                                                            const GALGAS_predefinedTypeKindEnum & in_mKind
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_stringPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

void cPtr_stringPredefinedTypeAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@stringPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_stringPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @stringPredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringPredefinedTypeAST ("stringPredefinedTypeAST",
                                                & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  const GALGAS_stringPredefinedTypeAST * p = (const GALGAS_stringPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_stringsetPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_stringsetPredefinedTypeAST * p = (const cPtr_stringsetPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringsetPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_stringsetPredefinedTypeAST::objectCompare (const GALGAS_stringsetPredefinedTypeAST & inOperand) const {
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

GALGAS_stringsetPredefinedTypeAST::GALGAS_stringsetPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringsetPredefinedTypeAST::GALGAS_stringsetPredefinedTypeAST (const cPtr_stringsetPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringsetPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringsetPredefinedTypeAST GALGAS_stringsetPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                                      const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringsetPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @stringsetPredefinedTypeAST class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_stringsetPredefinedTypeAST::cPtr_stringsetPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_string & in_mPredefinedTypeName,
                                                                  const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_stringsetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

void cPtr_stringsetPredefinedTypeAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@stringsetPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_stringsetPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_stringsetPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @stringsetPredefinedTypeAST type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ("stringsetPredefinedTypeAST",
                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_stringsetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_stringsetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringsetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringsetPredefinedTypeAST GALGAS_stringsetPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_stringsetPredefinedTypeAST result ;
  const GALGAS_stringsetPredefinedTypeAST * p = (const GALGAS_stringsetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_stringsetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringsetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_timerPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_timerPredefinedTypeAST * p = (const cPtr_timerPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_timerPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_timerPredefinedTypeAST::objectCompare (const GALGAS_timerPredefinedTypeAST & inOperand) const {
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

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (const cPtr_timerPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_timerPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                              const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_timerPredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @timerPredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_string & in_mPredefinedTypeName,
                                                          const GALGAS_predefinedTypeKindEnum & in_mKind
                                                          COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_timerPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

void cPtr_timerPredefinedTypeAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@timerPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_timerPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_timerPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @timerPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_timerPredefinedTypeAST ("timerPredefinedTypeAST",
                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_timerPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_timerPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timerPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  const GALGAS_timerPredefinedTypeAST * p = (const GALGAS_timerPredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_timerPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_typePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_typePredefinedTypeAST * p = (const cPtr_typePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typePredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_typePredefinedTypeAST::objectCompare (const GALGAS_typePredefinedTypeAST & inOperand) const {
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

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (const cPtr_typePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typePredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_string & inAttribute_mPredefinedTypeName,
                                                                            const GALGAS_predefinedTypeKindEnum & inAttribute_mKind
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typePredefinedTypeAST (inAttribute_mIsPredefined, inAttribute_mPredefinedTypeName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @typePredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_typePredefinedTypeAST::cPtr_typePredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_typePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

void cPtr_typePredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@typePredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_typePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_typePredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typePredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typePredefinedTypeAST ("typePredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  const GALGAS_typePredefinedTypeAST * p = (const GALGAS_typePredefinedTypeAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_typePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uint_36__34_PredefinedTypeAST * p = (const cPtr_uint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34_PredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const {
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

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (const cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_PredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @uint64PredefinedTypeAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

void cPtr_uint_36__34_PredefinedTypeAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@uint64PredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uint_36__34_PredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @uint64PredefinedTypeAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ("uint64PredefinedTypeAST",
                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_uintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_uintPredefinedTypeAST * p = (const cPtr_uintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uintPredefinedTypeAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPredefinedTypeName.objectCompare (p->mAttribute_mPredefinedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mKind.objectCompare (p->mAttribute_mKind) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_uintPredefinedTypeAST::objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const {
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

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uintPredefinedTypeAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                   Pointer class for @uintPredefinedTypeAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName,
                                                        const GALGAS_predefinedTypeKindEnum & in_mKind
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_mIsPredefined, in_mPredefinedTypeName, in_mKind COMMA_THERE) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_uintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

void cPtr_uintPredefinedTypeAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@uintPredefinedTypeAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_uintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_uintPredefinedTypeAST (mAttribute_mIsPredefined, mAttribute_mPredefinedTypeName, mAttribute_mKind COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @uintPredefinedTypeAST type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_uintPredefinedTypeAST ("uintPredefinedTypeAST",
                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sharedMapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapTypeName.objectCompare (p->mAttribute_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mPropertyList.objectCompare (p->mAttribute_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mInsertMethodList.objectCompare (p->mAttribute_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSearchMethodList.objectCompare (p->mAttribute_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapStateList.objectCompare (p->mAttribute_mMapStateList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mMapOverrideBlockListAST.objectCompare (p->mAttribute_mMapOverrideBlockListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sharedMapDeclarationAST::objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const {
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

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                          GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapStateList::constructor_emptyList (HERE),
                                                          GALGAS_mapOverrideBlockListAST::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (const cPtr_sharedMapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sharedMapDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                                const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                                const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                                const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                                const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                                const GALGAS_mapStateList & inAttribute_mMapStateList,
                                                                                const GALGAS_mapOverrideBlockListAST & inAttribute_mMapOverrideBlockListAST
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mMapStateList.isValid () && inAttribute_mMapOverrideBlockListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sharedMapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mMapStateList, inAttribute_mMapOverrideBlockListAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sharedMapDeclarationAST::reader_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mMapTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_sharedMapDeclarationAST::reader_mMapTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_sharedMapDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_sharedMapDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_sharedMapDeclarationAST::reader_mPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_sharedMapDeclarationAST::reader_mPropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST GALGAS_sharedMapDeclarationAST::reader_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_insertMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mInsertMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_insertMethodListAST cPtr_sharedMapDeclarationAST::reader_mInsertMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInsertMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST GALGAS_sharedMapDeclarationAST::reader_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapSearchMethodListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mSearchMethodList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapSearchMethodListAST cPtr_sharedMapDeclarationAST::reader_mSearchMethodList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSearchMethodList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList GALGAS_sharedMapDeclarationAST::reader_mMapStateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapStateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mMapStateList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapStateList cPtr_sharedMapDeclarationAST::reader_mMapStateList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapStateList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST GALGAS_sharedMapDeclarationAST::reader_mMapOverrideBlockListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_mapOverrideBlockListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    result = p->mAttribute_mMapOverrideBlockListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mapOverrideBlockListAST cPtr_sharedMapDeclarationAST::reader_mMapOverrideBlockListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMapOverrideBlockListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @sharedMapDeclarationAST class                                   *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sharedMapDeclarationAST::cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_lstring & in_mMapTypeName,
                                                            const GALGAS_lstringlist & in_mAttributeList,
                                                            const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                            const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                            const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                            const GALGAS_mapStateList & in_mMapStateList,
                                                            const GALGAS_mapOverrideBlockListAST & in_mMapOverrideBlockListAST
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mMapTypeName (in_mMapTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mPropertyList (in_mPropertyList),
mAttribute_mInsertMethodList (in_mInsertMethodList),
mAttribute_mSearchMethodList (in_mSearchMethodList),
mAttribute_mMapStateList (in_mMapStateList),
mAttribute_mMapOverrideBlockListAST (in_mMapOverrideBlockListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sharedMapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

void cPtr_sharedMapDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@sharedMapDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapStateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mMapOverrideBlockListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sharedMapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sharedMapDeclarationAST (mAttribute_mIsPredefined, mAttribute_mMapTypeName, mAttribute_mAttributeList, mAttribute_mPropertyList, mAttribute_mInsertMethodList, mAttribute_mSearchMethodList, mAttribute_mMapStateList, mAttribute_mMapOverrideBlockListAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @sharedMapDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapDeclarationAST ("sharedMapDeclarationAST",
                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sharedMapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sharedMapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST result ;
  const GALGAS_sharedMapDeclarationAST * p = (const GALGAS_sharedMapDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_sortedListDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSortedListTypeName.objectCompare (p->mAttribute_mSortedListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSortDescriptorList.objectCompare (p->mAttribute_mSortDescriptorList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_sortedListDeclarationAST::objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const {
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

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                           GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                  const GALGAS_lstring & inAttribute_mSortedListTypeName,
                                                                                  const GALGAS_propertyInCollectionListAST & inAttribute_mAttributeList,
                                                                                  const GALGAS_sortedListSortDescriptorListAST & inAttribute_mSortDescriptorList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mSortedListTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListDeclarationAST (inAttribute_mIsPredefined, inAttribute_mSortedListTypeName, inAttribute_mAttributeList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_sortedListDeclarationAST::reader_mSortedListTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mAttribute_mSortedListTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_sortedListDeclarationAST::reader_mSortedListTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortedListTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_sortedListDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_sortedListDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListDeclarationAST::reader_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_sortedListSortDescriptorListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    result = p->mAttribute_mSortDescriptorList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListSortDescriptorListAST cPtr_sortedListDeclarationAST::reader_mSortDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @sortedListDeclarationAST class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_lstring & in_mSortedListTypeName,
                                                              const GALGAS_propertyInCollectionListAST & in_mAttributeList,
                                                              const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mSortedListTypeName (in_mSortedListTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mSortDescriptorList (in_mSortDescriptorList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@sortedListDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mAttribute_mIsPredefined, mAttribute_mSortedListTypeName, mAttribute_mAttributeList, mAttribute_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @sortedListDeclarationAST type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  const GALGAS_sortedListDeclarationAST * p = (const GALGAS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_structDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStructTypeName.objectCompare (p->mAttribute_mStructTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAttributeList.objectCompare (p->mAttribute_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mEnumeratedElementTypeName.objectCompare (p->mAttribute_mEnumeratedElementTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_structDeclarationAST::objectCompare (const GALGAS_structDeclarationAST & inOperand) const {
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

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                          const GALGAS_lstring & inAttribute_mStructTypeName,
                                                                          const GALGAS_propertyInCollectionListAST & inAttribute_mAttributeList,
                                                                          const GALGAS_string & inAttribute_mEnumeratedElementTypeName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mStructTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mEnumeratedElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structDeclarationAST (inAttribute_mIsPredefined, inAttribute_mStructTypeName, inAttribute_mAttributeList, inAttribute_mEnumeratedElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structDeclarationAST::reader_mStructTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mAttribute_mStructTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_structDeclarationAST::reader_mStructTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStructTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST GALGAS_structDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyInCollectionListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mAttribute_mAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyInCollectionListAST cPtr_structDeclarationAST::reader_mAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_structDeclarationAST::reader_mEnumeratedElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    result = p->mAttribute_mEnumeratedElementTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_structDeclarationAST::reader_mEnumeratedElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumeratedElementTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @structDeclarationAST class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                      const GALGAS_lstring & in_mStructTypeName,
                                                      const GALGAS_propertyInCollectionListAST & in_mAttributeList,
                                                      const GALGAS_string & in_mEnumeratedElementTypeName
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mAttribute_mStructTypeName (in_mStructTypeName),
mAttribute_mAttributeList (in_mAttributeList),
mAttribute_mEnumeratedElementTypeName (in_mEnumeratedElementTypeName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@structDeclarationAST:" ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStructTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mEnumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_structDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mAttribute_mIsPredefined, mAttribute_mStructTypeName, mAttribute_mAttributeList, mAttribute_mEnumeratedElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @structDeclarationAST type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  const GALGAS_structDeclarationAST * p = (const GALGAS_structDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_semanticDeclarationForGeneration::objectCompare (const GALGAS_semanticDeclarationForGeneration & inOperand) const {
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

GALGAS_semanticDeclarationForGeneration::GALGAS_semanticDeclarationForGeneration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration::GALGAS_semanticDeclarationForGeneration (const cPtr_semanticDeclarationForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @semanticDeclarationForGeneration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticDeclarationForGeneration::cPtr_semanticDeclarationForGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @semanticDeclarationForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ("semanticDeclarationForGeneration",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationForGeneration GALGAS_semanticDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationForGeneration result ;
  const GALGAS_semanticDeclarationForGeneration * p = (const GALGAS_semanticDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const {
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

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_semanticDeclarationWithHeaderForGeneration::reader_mHasHeader (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationWithHeaderForGeneration * p = (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    result = p->mAttribute_mHasHeader ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_semanticDeclarationWithHeaderForGeneration::reader_mHasHeader (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasHeader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_semanticDeclarationWithHeaderForGeneration::reader_mImplementationCppFileName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_semanticDeclarationWithHeaderForGeneration * p = (const cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    result = p->mAttribute_mImplementationCppFileName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_semanticDeclarationWithHeaderForGeneration::reader_mImplementationCppFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementationCppFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @semanticDeclarationWithHeaderForGeneration class                         *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_semanticDeclarationWithHeaderForGeneration::cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                  const GALGAS_string & in_mImplementationCppFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mAttribute_mHasHeader (in_mHasHeader),
mAttribute_mImplementationCppFileName (in_mImplementationCppFileName) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @semanticDeclarationWithHeaderForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ("semanticDeclarationWithHeaderForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractCategoryMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractCategoryMethodForGeneration * p = (const cPtr_abstractCategoryMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractCategoryMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryMethodName.objectCompare (p->mAttribute_mAbstractCategoryMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryMethodFormalParameterList.objectCompare (p->mAttribute_mAbstractCategoryMethodFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractCategoryMethodForGeneration::objectCompare (const GALGAS_abstractCategoryMethodForGeneration & inOperand) const {
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

GALGAS_abstractCategoryMethodForGeneration::GALGAS_abstractCategoryMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryMethodForGeneration GALGAS_abstractCategoryMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractCategoryMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryMethodForGeneration::GALGAS_abstractCategoryMethodForGeneration (const cPtr_abstractCategoryMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCategoryMethodForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryMethodForGeneration GALGAS_abstractCategoryMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                        const GALGAS_string & inAttribute_mAbstractCategoryMethodName,
                                                                                                        const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractCategoryMethodFormalParameterList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractCategoryMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractCategoryMethodName.isValid () && inAttribute_mAbstractCategoryMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractCategoryMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractCategoryMethodName, inAttribute_mAbstractCategoryMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractCategoryMethodForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryMethodForGeneration * p = (const cPtr_abstractCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryMethodForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractCategoryMethodForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_abstractCategoryMethodForGeneration::reader_mAbstractCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryMethodForGeneration * p = (const cPtr_abstractCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryMethodForGeneration) ;
    result = p->mAttribute_mAbstractCategoryMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_abstractCategoryMethodForGeneration::reader_mAbstractCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_abstractCategoryMethodForGeneration::reader_mAbstractCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryMethodForGeneration * p = (const cPtr_abstractCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryMethodForGeneration) ;
    result = p->mAttribute_mAbstractCategoryMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_abstractCategoryMethodForGeneration::reader_mAbstractCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @abstractCategoryMethodForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractCategoryMethodForGeneration::cPtr_abstractCategoryMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                    const GALGAS_string & in_mAbstractCategoryMethodName,
                                                                                    const GALGAS_formalParameterListForGeneration & in_mAbstractCategoryMethodFormalParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mAbstractCategoryMethodName (in_mAbstractCategoryMethodName),
mAttribute_mAbstractCategoryMethodFormalParameterList (in_mAbstractCategoryMethodFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractCategoryMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration ;
}

void cPtr_abstractCategoryMethodForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@abstractCategoryMethodForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractCategoryMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractCategoryMethodForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mAbstractCategoryMethodName, mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @abstractCategoryMethodForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration ("abstractCategoryMethodForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractCategoryMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractCategoryMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCategoryMethodForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryMethodForGeneration GALGAS_abstractCategoryMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractCategoryMethodForGeneration result ;
  const GALGAS_abstractCategoryMethodForGeneration * p = (const GALGAS_abstractCategoryMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCategoryMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCategoryMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractCategoryModifierForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractCategoryModifierForGeneration * p = (const cPtr_abstractCategoryModifierForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractCategoryModifierForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryModifierName.objectCompare (p->mAttribute_mAbstractCategoryModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryModifierFormalParameterList.objectCompare (p->mAttribute_mAbstractCategoryModifierFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractCategoryModifierForGeneration::objectCompare (const GALGAS_abstractCategoryModifierForGeneration & inOperand) const {
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

GALGAS_abstractCategoryModifierForGeneration::GALGAS_abstractCategoryModifierForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryModifierForGeneration GALGAS_abstractCategoryModifierForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractCategoryModifierForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryModifierForGeneration::GALGAS_abstractCategoryModifierForGeneration (const cPtr_abstractCategoryModifierForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCategoryModifierForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryModifierForGeneration GALGAS_abstractCategoryModifierForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                            const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                            const GALGAS_string & inAttribute_mAbstractCategoryModifierName,
                                                                                                            const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractCategoryModifierFormalParameterList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractCategoryModifierForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractCategoryModifierName.isValid () && inAttribute_mAbstractCategoryModifierFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractCategoryModifierForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractCategoryModifierName, inAttribute_mAbstractCategoryModifierFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractCategoryModifierForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryModifierForGeneration * p = (const cPtr_abstractCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryModifierForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractCategoryModifierForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_abstractCategoryModifierForGeneration::reader_mAbstractCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryModifierForGeneration * p = (const cPtr_abstractCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryModifierForGeneration) ;
    result = p->mAttribute_mAbstractCategoryModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_abstractCategoryModifierForGeneration::reader_mAbstractCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_abstractCategoryModifierForGeneration::reader_mAbstractCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryModifierForGeneration * p = (const cPtr_abstractCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryModifierForGeneration) ;
    result = p->mAttribute_mAbstractCategoryModifierFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_abstractCategoryModifierForGeneration::reader_mAbstractCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryModifierFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @abstractCategoryModifierForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractCategoryModifierForGeneration::cPtr_abstractCategoryModifierForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                        const GALGAS_string & in_mAbstractCategoryModifierName,
                                                                                        const GALGAS_formalParameterListForGeneration & in_mAbstractCategoryModifierFormalParameterList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mAbstractCategoryModifierName (in_mAbstractCategoryModifierName),
mAttribute_mAbstractCategoryModifierFormalParameterList (in_mAbstractCategoryModifierFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractCategoryModifierForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration ;
}

void cPtr_abstractCategoryModifierForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@abstractCategoryModifierForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryModifierFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractCategoryModifierForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractCategoryModifierForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mAbstractCategoryModifierName, mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @abstractCategoryModifierForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration ("abstractCategoryModifierForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractCategoryModifierForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractCategoryModifierForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCategoryModifierForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryModifierForGeneration GALGAS_abstractCategoryModifierForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractCategoryModifierForGeneration result ;
  const GALGAS_abstractCategoryModifierForGeneration * p = (const GALGAS_abstractCategoryModifierForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCategoryModifierForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCategoryModifierForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_abstractCategoryReaderForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractCategoryReaderForGeneration * p = (const cPtr_abstractCategoryReaderForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractCategoryReaderForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryReaderName.objectCompare (p->mAttribute_mAbstractCategoryReaderName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mAbstractCategoryReaderFormalParameterList.objectCompare (p->mAttribute_mAbstractCategoryReaderFormalParameterList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_abstractCategoryReaderForGeneration::objectCompare (const GALGAS_abstractCategoryReaderForGeneration & inOperand) const {
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

GALGAS_abstractCategoryReaderForGeneration::GALGAS_abstractCategoryReaderForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryReaderForGeneration GALGAS_abstractCategoryReaderForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractCategoryReaderForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryReaderForGeneration::GALGAS_abstractCategoryReaderForGeneration (const cPtr_abstractCategoryReaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCategoryReaderForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryReaderForGeneration GALGAS_abstractCategoryReaderForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                        const GALGAS_string & inAttribute_mAbstractCategoryReaderName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                        const GALGAS_formalInputParameterListForGeneration & inAttribute_mAbstractCategoryReaderFormalParameterList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractCategoryReaderForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractCategoryReaderName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mAbstractCategoryReaderFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractCategoryReaderForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractCategoryReaderName, inAttribute_mResultType, inAttribute_mAbstractCategoryReaderFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractCategoryReaderForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryReaderForGeneration * p = (const cPtr_abstractCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryReaderForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractCategoryReaderForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_abstractCategoryReaderForGeneration::reader_mAbstractCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryReaderForGeneration * p = (const cPtr_abstractCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryReaderForGeneration) ;
    result = p->mAttribute_mAbstractCategoryReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_abstractCategoryReaderForGeneration::reader_mAbstractCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_abstractCategoryReaderForGeneration::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryReaderForGeneration * p = (const cPtr_abstractCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryReaderForGeneration) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_abstractCategoryReaderForGeneration::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_abstractCategoryReaderForGeneration::reader_mAbstractCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractCategoryReaderForGeneration * p = (const cPtr_abstractCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCategoryReaderForGeneration) ;
    result = p->mAttribute_mAbstractCategoryReaderFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_abstractCategoryReaderForGeneration::reader_mAbstractCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAbstractCategoryReaderFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @abstractCategoryReaderForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_abstractCategoryReaderForGeneration::cPtr_abstractCategoryReaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                    const GALGAS_string & in_mAbstractCategoryReaderName,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mAbstractCategoryReaderFormalParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mAbstractCategoryReaderName (in_mAbstractCategoryReaderName),
mAttribute_mResultType (in_mResultType),
mAttribute_mAbstractCategoryReaderFormalParameterList (in_mAbstractCategoryReaderFormalParameterList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_abstractCategoryReaderForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration ;
}

void cPtr_abstractCategoryReaderForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@abstractCategoryReaderForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryReaderName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mAbstractCategoryReaderFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_abstractCategoryReaderForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractCategoryReaderForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mAbstractCategoryReaderName, mAttribute_mResultType, mAttribute_mAbstractCategoryReaderFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @abstractCategoryReaderForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration ("abstractCategoryReaderForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_abstractCategoryReaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_abstractCategoryReaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCategoryReaderForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractCategoryReaderForGeneration GALGAS_abstractCategoryReaderForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractCategoryReaderForGeneration result ;
  const GALGAS_abstractCategoryReaderForGeneration * p = (const GALGAS_abstractCategoryReaderForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCategoryReaderForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCategoryReaderForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_categoryMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_categoryMethodForGeneration * p = (const cPtr_categoryMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_categoryMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryMethodName.objectCompare (p->mAttribute_mCategoryMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementedAsFunction.objectCompare (p->mAttribute_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryMethodFormalParameterList.objectCompare (p->mAttribute_mCategoryMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_categoryMethodForGeneration::objectCompare (const GALGAS_categoryMethodForGeneration & inOperand) const {
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

GALGAS_categoryMethodForGeneration::GALGAS_categoryMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodForGeneration GALGAS_categoryMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_categoryMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_string::constructor_default (HERE),
                                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_string::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                              GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                              GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodForGeneration::GALGAS_categoryMethodForGeneration (const cPtr_categoryMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_categoryMethodForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodForGeneration GALGAS_categoryMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                        const GALGAS_string & inAttribute_mCategoryMethodName,
                                                                                        const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                        const GALGAS_formalParameterListForGeneration & inAttribute_mCategoryMethodFormalParameterList,
                                                                                        const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mCategoryMethodName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mCategoryMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_categoryMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mCategoryMethodName, inAttribute_mImplementedAsFunction, inAttribute_mCategoryMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_categoryMethodForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryMethodForGeneration * p = (const cPtr_categoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryMethodForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_categoryMethodForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_categoryMethodForGeneration::reader_mCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryMethodForGeneration * p = (const cPtr_categoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryMethodForGeneration) ;
    result = p->mAttribute_mCategoryMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_categoryMethodForGeneration::reader_mCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_categoryMethodForGeneration::reader_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryMethodForGeneration * p = (const cPtr_categoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryMethodForGeneration) ;
    result = p->mAttribute_mImplementedAsFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_categoryMethodForGeneration::reader_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementedAsFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_categoryMethodForGeneration::reader_mCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryMethodForGeneration * p = (const cPtr_categoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryMethodForGeneration) ;
    result = p->mAttribute_mCategoryMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_categoryMethodForGeneration::reader_mCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_categoryMethodForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryMethodForGeneration * p = (const cPtr_categoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryMethodForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_categoryMethodForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_categoryMethodForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryMethodForGeneration * p = (const cPtr_categoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryMethodForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_categoryMethodForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @categoryMethodForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_categoryMethodForGeneration::cPtr_categoryMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                    const GALGAS_string & in_mCategoryMethodName,
                                                                    const GALGAS_bool & in_mImplementedAsFunction,
                                                                    const GALGAS_formalParameterListForGeneration & in_mCategoryMethodFormalParameterList,
                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mCategoryMethodName (in_mCategoryMethodName),
mAttribute_mImplementedAsFunction (in_mImplementedAsFunction),
mAttribute_mCategoryMethodFormalParameterList (in_mCategoryMethodFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_categoryMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryMethodForGeneration ;
}

void cPtr_categoryMethodForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@categoryMethodForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_categoryMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_categoryMethodForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mCategoryMethodName, mAttribute_mImplementedAsFunction, mAttribute_mCategoryMethodFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @categoryMethodForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryMethodForGeneration ("categoryMethodForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryMethodForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryMethodForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryMethodForGeneration GALGAS_categoryMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_categoryMethodForGeneration result ;
  const GALGAS_categoryMethodForGeneration * p = (const GALGAS_categoryMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_categoryModifierForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_categoryModifierForGeneration * p = (const cPtr_categoryModifierForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_categoryModifierForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryModifierName.objectCompare (p->mAttribute_mCategoryModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementedAsFunction.objectCompare (p->mAttribute_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryModifierFormalParameterList.objectCompare (p->mAttribute_mCategoryModifierFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_categoryModifierForGeneration::objectCompare (const GALGAS_categoryModifierForGeneration & inOperand) const {
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

GALGAS_categoryModifierForGeneration::GALGAS_categoryModifierForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierForGeneration GALGAS_categoryModifierForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_categoryModifierForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierForGeneration::GALGAS_categoryModifierForGeneration (const cPtr_categoryModifierForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_categoryModifierForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierForGeneration GALGAS_categoryModifierForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                            const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                            const GALGAS_string & inAttribute_mCategoryModifierName,
                                                                                            const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                            const GALGAS_formalParameterListForGeneration & inAttribute_mCategoryModifierFormalParameterList,
                                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                            const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mCategoryModifierName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mCategoryModifierFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_categoryModifierForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mCategoryModifierName, inAttribute_mImplementedAsFunction, inAttribute_mCategoryModifierFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_categoryModifierForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryModifierForGeneration * p = (const cPtr_categoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryModifierForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_categoryModifierForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_categoryModifierForGeneration::reader_mCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryModifierForGeneration * p = (const cPtr_categoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryModifierForGeneration) ;
    result = p->mAttribute_mCategoryModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_categoryModifierForGeneration::reader_mCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_categoryModifierForGeneration::reader_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryModifierForGeneration * p = (const cPtr_categoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryModifierForGeneration) ;
    result = p->mAttribute_mImplementedAsFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_categoryModifierForGeneration::reader_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementedAsFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_categoryModifierForGeneration::reader_mCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryModifierForGeneration * p = (const cPtr_categoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryModifierForGeneration) ;
    result = p->mAttribute_mCategoryModifierFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_categoryModifierForGeneration::reader_mCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryModifierFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_categoryModifierForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryModifierForGeneration * p = (const cPtr_categoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryModifierForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_categoryModifierForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_categoryModifierForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryModifierForGeneration * p = (const cPtr_categoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryModifierForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_categoryModifierForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @categoryModifierForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_categoryModifierForGeneration::cPtr_categoryModifierForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                        const GALGAS_string & in_mCategoryModifierName,
                                                                        const GALGAS_bool & in_mImplementedAsFunction,
                                                                        const GALGAS_formalParameterListForGeneration & in_mCategoryModifierFormalParameterList,
                                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                        const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mCategoryModifierName (in_mCategoryModifierName),
mAttribute_mImplementedAsFunction (in_mImplementedAsFunction),
mAttribute_mCategoryModifierFormalParameterList (in_mCategoryModifierFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_categoryModifierForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryModifierForGeneration ;
}

void cPtr_categoryModifierForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@categoryModifierForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryModifierFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_categoryModifierForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_categoryModifierForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mCategoryModifierName, mAttribute_mImplementedAsFunction, mAttribute_mCategoryModifierFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @categoryModifierForGeneration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryModifierForGeneration ("categoryModifierForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryModifierForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryModifierForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryModifierForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryModifierForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryModifierForGeneration GALGAS_categoryModifierForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_categoryModifierForGeneration result ;
  const GALGAS_categoryModifierForGeneration * p = (const GALGAS_categoryModifierForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryModifierForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryModifierForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_categoryReaderForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryReaderName.objectCompare (p->mAttribute_mCategoryReaderName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementedAsFunction.objectCompare (p->mAttribute_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVarCppName.objectCompare (p->mAttribute_mResultVarCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryReaderFormalParameterList.objectCompare (p->mAttribute_mCategoryReaderFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_categoryReaderForGeneration::objectCompare (const GALGAS_categoryReaderForGeneration & inOperand) const {
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

GALGAS_categoryReaderForGeneration::GALGAS_categoryReaderForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderForGeneration GALGAS_categoryReaderForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_categoryReaderForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_string::constructor_default (HERE),
                                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_string::constructor_default (HERE),
                                                              GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                              GALGAS_string::constructor_default (HERE),
                                                              GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                              GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                              GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderForGeneration::GALGAS_categoryReaderForGeneration (const cPtr_categoryReaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_categoryReaderForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderForGeneration GALGAS_categoryReaderForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                        const GALGAS_string & inAttribute_mCategoryReaderName,
                                                                                        const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                        const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                        const GALGAS_formalInputParameterListForGeneration & inAttribute_mCategoryReaderFormalParameterList,
                                                                                        const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mCategoryReaderName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mCategoryReaderFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_categoryReaderForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mCategoryReaderName, inAttribute_mImplementedAsFunction, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mCategoryReaderFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_categoryReaderForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_categoryReaderForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_categoryReaderForGeneration::reader_mCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mCategoryReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_categoryReaderForGeneration::reader_mCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_categoryReaderForGeneration::reader_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mImplementedAsFunction ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_categoryReaderForGeneration::reader_mImplementedAsFunction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mImplementedAsFunction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_categoryReaderForGeneration::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_categoryReaderForGeneration::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_categoryReaderForGeneration::reader_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mResultVarCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_categoryReaderForGeneration::reader_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_categoryReaderForGeneration::reader_mCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mCategoryReaderFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_categoryReaderForGeneration::reader_mCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryReaderFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_categoryReaderForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_categoryReaderForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_categoryReaderForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_categoryReaderForGeneration * p = (const cPtr_categoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_categoryReaderForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_categoryReaderForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @categoryReaderForGeneration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_categoryReaderForGeneration::cPtr_categoryReaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                    const GALGAS_string & in_mCategoryReaderName,
                                                                    const GALGAS_bool & in_mImplementedAsFunction,
                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                    const GALGAS_string & in_mResultVarCppName,
                                                                    const GALGAS_formalInputParameterListForGeneration & in_mCategoryReaderFormalParameterList,
                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mCategoryReaderName (in_mCategoryReaderName),
mAttribute_mImplementedAsFunction (in_mImplementedAsFunction),
mAttribute_mResultType (in_mResultType),
mAttribute_mResultVarCppName (in_mResultVarCppName),
mAttribute_mCategoryReaderFormalParameterList (in_mCategoryReaderFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_categoryReaderForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryReaderForGeneration ;
}

void cPtr_categoryReaderForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@categoryReaderForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryReaderName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryReaderFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_categoryReaderForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_categoryReaderForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mCategoryReaderName, mAttribute_mImplementedAsFunction, mAttribute_mResultType, mAttribute_mResultVarCppName, mAttribute_mCategoryReaderFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @categoryReaderForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_categoryReaderForGeneration ("categoryReaderForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_categoryReaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_categoryReaderForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_categoryReaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_categoryReaderForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_categoryReaderForGeneration GALGAS_categoryReaderForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_categoryReaderForGeneration result ;
  const GALGAS_categoryReaderForGeneration * p = (const GALGAS_categoryReaderForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_categoryReaderForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("categoryReaderForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_filewrapperDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperName.objectCompare (p->mAttribute_mFilewrapperName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperAbsolutePath.objectCompare (p->mAttribute_mFilewrapperAbsolutePath) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperFileMap.objectCompare (p->mAttribute_mFilewrapperFileMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperDirectoryMap.objectCompare (p->mAttribute_mFilewrapperDirectoryMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFilewrapperTemplateListForGeneration.objectCompare (p->mAttribute_mFilewrapperTemplateListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_filewrapperDeclarationForGeneration::objectCompare (const GALGAS_filewrapperDeclarationForGeneration & inOperand) const {
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

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_wrapperFileMap::constructor_emptyMap (HERE),
                                                                      GALGAS_wrapperDirectoryMap::constructor_emptyMap (HERE),
                                                                      GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration::GALGAS_filewrapperDeclarationForGeneration (const cPtr_filewrapperDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_string & inAttribute_mFilewrapperName,
                                                                                                        const GALGAS_string & inAttribute_mFilewrapperAbsolutePath,
                                                                                                        const GALGAS_wrapperFileMap & inAttribute_mFilewrapperFileMap,
                                                                                                        const GALGAS_wrapperDirectoryMap & inAttribute_mFilewrapperDirectoryMap,
                                                                                                        const GALGAS_filewrapperTemplateListForGeneration & inAttribute_mFilewrapperTemplateListForGeneration
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFilewrapperName.isValid () && inAttribute_mFilewrapperAbsolutePath.isValid () && inAttribute_mFilewrapperFileMap.isValid () && inAttribute_mFilewrapperDirectoryMap.isValid () && inAttribute_mFilewrapperTemplateListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_filewrapperDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFilewrapperName, inAttribute_mFilewrapperAbsolutePath, inAttribute_mFilewrapperFileMap, inAttribute_mFilewrapperDirectoryMap, inAttribute_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::reader_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_filewrapperDeclarationForGeneration::reader_mFilewrapperName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_filewrapperDeclarationForGeneration::reader_mFilewrapperAbsolutePath (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperAbsolutePath ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_filewrapperDeclarationForGeneration::reader_mFilewrapperAbsolutePath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperAbsolutePath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap GALGAS_filewrapperDeclarationForGeneration::reader_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_wrapperFileMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperFileMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperFileMap cPtr_filewrapperDeclarationForGeneration::reader_mFilewrapperFileMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperFileMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap GALGAS_filewrapperDeclarationForGeneration::reader_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_wrapperDirectoryMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperDirectoryMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_wrapperDirectoryMap cPtr_filewrapperDeclarationForGeneration::reader_mFilewrapperDirectoryMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperDirectoryMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperDeclarationForGeneration::reader_mFilewrapperTemplateListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_filewrapperDeclarationForGeneration * p = (const cPtr_filewrapperDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperDeclarationForGeneration) ;
    result = p->mAttribute_mFilewrapperTemplateListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperTemplateListForGeneration cPtr_filewrapperDeclarationForGeneration::reader_mFilewrapperTemplateListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilewrapperTemplateListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @filewrapperDeclarationForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_filewrapperDeclarationForGeneration::cPtr_filewrapperDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFilewrapperName,
                                                                                    const GALGAS_string & in_mFilewrapperAbsolutePath,
                                                                                    const GALGAS_wrapperFileMap & in_mFilewrapperFileMap,
                                                                                    const GALGAS_wrapperDirectoryMap & in_mFilewrapperDirectoryMap,
                                                                                    const GALGAS_filewrapperTemplateListForGeneration & in_mFilewrapperTemplateListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mFilewrapperName (in_mFilewrapperName),
mAttribute_mFilewrapperAbsolutePath (in_mFilewrapperAbsolutePath),
mAttribute_mFilewrapperFileMap (in_mFilewrapperFileMap),
mAttribute_mFilewrapperDirectoryMap (in_mFilewrapperDirectoryMap),
mAttribute_mFilewrapperTemplateListForGeneration (in_mFilewrapperTemplateListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_filewrapperDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

void cPtr_filewrapperDeclarationForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@filewrapperDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperAbsolutePath.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperFileMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperDirectoryMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFilewrapperTemplateListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_filewrapperDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_filewrapperDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFilewrapperName, mAttribute_mFilewrapperAbsolutePath, mAttribute_mFilewrapperFileMap, mAttribute_mFilewrapperDirectoryMap, mAttribute_mFilewrapperTemplateListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @filewrapperDeclarationForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ("filewrapperDeclarationForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_filewrapperDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_filewrapperDeclarationForGeneration GALGAS_filewrapperDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationForGeneration result ;
  const GALGAS_filewrapperDeclarationForGeneration * p = (const GALGAS_filewrapperDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_filewrapperDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionPrototypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (p->mAttribute_mReturnType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionPrototypeDeclarationForGeneration::objectCompare (const GALGAS_functionPrototypeDeclarationForGeneration & inOperand) const {
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

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                            GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)
                                                                            COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration::GALGAS_functionPrototypeDeclarationForGeneration (const cPtr_functionPrototypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionPrototypeDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                                    const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                                    const GALGAS_string & inAttribute_mFunctionName,
                                                                                                                    const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionPrototypeDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionPrototypeDeclarationForGeneration::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_functionPrototypeDeclarationForGeneration::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_functionPrototypeDeclarationForGeneration::reader_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mFormalArgumentList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_functionPrototypeDeclarationForGeneration::reader_mFormalArgumentList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFormalArgumentList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_functionPrototypeDeclarationForGeneration::reader_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (const cPtr_functionPrototypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionPrototypeDeclarationForGeneration) ;
    result = p->mAttribute_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_functionPrototypeDeclarationForGeneration::reader_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                         Pointer class for @functionPrototypeDeclarationForGeneration class                          *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionPrototypeDeclarationForGeneration::cPtr_functionPrototypeDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                const GALGAS_string & in_mImplementationCppFileName,
                                                                                                const GALGAS_string & in_mFunctionName,
                                                                                                const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mFormalArgumentList (in_mFormalArgumentList),
mAttribute_mReturnType (in_mReturnType) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionPrototypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

void cPtr_functionPrototypeDeclarationForGeneration::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@functionPrototypeDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReturnType.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionPrototypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionPrototypeDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFunctionName, mAttribute_mFormalArgumentList, mAttribute_mReturnType COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @functionPrototypeDeclarationForGeneration type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ("functionPrototypeDeclarationForGeneration",
                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionPrototypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionPrototypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionPrototypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionPrototypeDeclarationForGeneration GALGAS_functionPrototypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionPrototypeDeclarationForGeneration result ;
  const GALGAS_functionPrototypeDeclarationForGeneration * p = (const GALGAS_functionPrototypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionPrototypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_functionImplementationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFormalArgumentList.objectCompare (p->mAttribute_mFormalArgumentList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (p->mAttribute_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableCppName.objectCompare (p->mAttribute_mResultVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_functionImplementationForGeneration::objectCompare (const GALGAS_functionImplementationForGeneration & inOperand) const {
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

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (void) :
GALGAS_functionPrototypeDeclarationForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration::GALGAS_functionImplementationForGeneration (const cPtr_functionImplementationForGeneration * inSourcePtr) :
GALGAS_functionPrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionImplementationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_string & inAttribute_mFunctionName,
                                                                                                        const GALGAS_formalInputParameterListForGeneration & inAttribute_mFormalArgumentList,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType,
                                                                                                        const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mFormalArgumentList.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_functionImplementationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mFormalArgumentList, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_functionImplementationForGeneration::reader_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    result = p->mAttribute_mResultVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_functionImplementationForGeneration::reader_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_functionImplementationForGeneration::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_functionImplementationForGeneration * p = (const cPtr_functionImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionImplementationForGeneration) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_functionImplementationForGeneration::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @functionImplementationForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_functionImplementationForGeneration::cPtr_functionImplementationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_string & in_mFunctionName,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mFormalArgumentList,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                                                    const GALGAS_string & in_mResultVariableCppName,
                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_functionPrototypeDeclarationForGeneration (in_mHasHeader, in_mImplementationCppFileName, in_mFunctionName, in_mFormalArgumentList, in_mReturnType COMMA_THERE),
mAttribute_mResultVariableCppName (in_mResultVariableCppName),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_functionImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

void cPtr_functionImplementationForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@functionImplementationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_functionImplementationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_functionImplementationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFunctionName, mAttribute_mFormalArgumentList, mAttribute_mReturnType, mAttribute_mResultVariableCppName, mAttribute_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @functionImplementationForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_functionImplementationForGeneration ("functionImplementationForGeneration",
                                                            & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_functionImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_functionImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionImplementationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_functionImplementationForGeneration GALGAS_functionImplementationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_functionImplementationForGeneration result ;
  const GALGAS_functionImplementationForGeneration * p = (const GALGAS_functionImplementationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_functionImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_grammarForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_grammarForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mGrammarName.objectCompare (p->mAttribute_mGrammarName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (p->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonTerminalMapForGrammarAnalysis.objectCompare (p->mAttribute_mNonTerminalMapForGrammarAnalysis) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mNonTerminalToAddList.objectCompare (p->mAttribute_mNonTerminalToAddList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasIndexing.objectCompare (p->mAttribute_mHasIndexing) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSyntaxComponents.objectCompare (p->mAttribute_mSyntaxComponents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStartSymbolName.objectCompare (p->mAttribute_mStartSymbolName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHasTranslateFeature.objectCompare (p->mAttribute_mHasTranslateFeature) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppFileContents.objectCompare (p->mAttribute_mCppFileContents) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_grammarForGeneration::objectCompare (const GALGAS_grammarForGeneration & inOperand) const {
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

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_grammarForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (HERE),
                                                       GALGAS_nonTerminalToAddList::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration::GALGAS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                          const GALGAS_string & inAttribute_mGrammarName,
                                                                          const GALGAS_string & inAttribute_mLexiqueName,
                                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inAttribute_mNonTerminalMapForGrammarAnalysis,
                                                                          const GALGAS_nonTerminalToAddList & inAttribute_mNonTerminalToAddList,
                                                                          const GALGAS_bool & inAttribute_mHasIndexing,
                                                                          const GALGAS_lstringlist & inAttribute_mSyntaxComponents,
                                                                          const GALGAS_string & inAttribute_mStartSymbolName,
                                                                          const GALGAS_bool & inAttribute_mHasTranslateFeature,
                                                                          const GALGAS_string & inAttribute_mCppFileContents
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mGrammarName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonTerminalMapForGrammarAnalysis.isValid () && inAttribute_mNonTerminalToAddList.isValid () && inAttribute_mHasIndexing.isValid () && inAttribute_mSyntaxComponents.isValid () && inAttribute_mStartSymbolName.isValid () && inAttribute_mHasTranslateFeature.isValid () && inAttribute_mCppFileContents.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_grammarForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mGrammarName, inAttribute_mLexiqueName, inAttribute_mNonTerminalMapForGrammarAnalysis, inAttribute_mNonTerminalToAddList, inAttribute_mHasIndexing, inAttribute_mSyntaxComponents, inAttribute_mStartSymbolName, inAttribute_mHasTranslateFeature, inAttribute_mCppFileContents COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::reader_mGrammarName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mGrammarName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::reader_mGrammarName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGrammarName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::reader_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::reader_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_grammarForGeneration::reader_mNonTerminalMapForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mNonTerminalMapForGrammarAnalysis ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalSymbolMapForGrammarAnalysis cPtr_grammarForGeneration::reader_mNonTerminalMapForGrammarAnalysis (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalMapForGrammarAnalysis ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList GALGAS_grammarForGeneration::reader_mNonTerminalToAddList (UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mNonTerminalToAddList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_nonTerminalToAddList cPtr_grammarForGeneration::reader_mNonTerminalToAddList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNonTerminalToAddList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarForGeneration::reader_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mHasIndexing ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_grammarForGeneration::reader_mHasIndexing (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasIndexing ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_grammarForGeneration::reader_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mSyntaxComponents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_grammarForGeneration::reader_mSyntaxComponents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSyntaxComponents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::reader_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mStartSymbolName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::reader_mStartSymbolName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStartSymbolName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_grammarForGeneration::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mHasTranslateFeature ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_grammarForGeneration::reader_mHasTranslateFeature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasTranslateFeature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_grammarForGeneration::reader_mCppFileContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_grammarForGeneration * p = (const cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    result = p->mAttribute_mCppFileContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_grammarForGeneration::reader_mCppFileContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppFileContents ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @grammarForGeneration class                                    *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_grammarForGeneration::cPtr_grammarForGeneration (const GALGAS_bool & in_mHasHeader,
                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                      const GALGAS_string & in_mGrammarName,
                                                      const GALGAS_string & in_mLexiqueName,
                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                      const GALGAS_nonTerminalToAddList & in_mNonTerminalToAddList,
                                                      const GALGAS_bool & in_mHasIndexing,
                                                      const GALGAS_lstringlist & in_mSyntaxComponents,
                                                      const GALGAS_string & in_mStartSymbolName,
                                                      const GALGAS_bool & in_mHasTranslateFeature,
                                                      const GALGAS_string & in_mCppFileContents
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mGrammarName (in_mGrammarName),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mNonTerminalMapForGrammarAnalysis (in_mNonTerminalMapForGrammarAnalysis),
mAttribute_mNonTerminalToAddList (in_mNonTerminalToAddList),
mAttribute_mHasIndexing (in_mHasIndexing),
mAttribute_mSyntaxComponents (in_mSyntaxComponents),
mAttribute_mStartSymbolName (in_mStartSymbolName),
mAttribute_mHasTranslateFeature (in_mHasTranslateFeature),
mAttribute_mCppFileContents (in_mCppFileContents) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@grammarForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mGrammarName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_grammarForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mGrammarName, mAttribute_mLexiqueName, mAttribute_mNonTerminalMapForGrammarAnalysis, mAttribute_mNonTerminalToAddList, mAttribute_mHasIndexing, mAttribute_mSyntaxComponents, mAttribute_mStartSymbolName, mAttribute_mHasTranslateFeature, mAttribute_mCppFileContents COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @grammarForGeneration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_grammarForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_grammarForGeneration GALGAS_grammarForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_grammarForGeneration result ;
  const GALGAS_grammarForGeneration * p = (const GALGAS_grammarForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_grammarForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_lexiqueDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mLexiqueName.objectCompare (p->mAttribute_mLexiqueName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mHeaderContents.objectCompare (p->mAttribute_mHeaderContents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCppContents.objectCompare (p->mAttribute_mCppContents) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCocoaHeader.objectCompare (p->mAttribute_mCocoaHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCocoaImplementation.objectCompare (p->mAttribute_mCocoaImplementation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_lexiqueDeclarationForGeneration::objectCompare (const GALGAS_lexiqueDeclarationForGeneration & inOperand) const {
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

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE),
                                                                  GALGAS_string::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration::GALGAS_lexiqueDeclarationForGeneration (const cPtr_lexiqueDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                const GALGAS_string & inAttribute_mLexiqueName,
                                                                                                const GALGAS_string & inAttribute_mHeaderContents,
                                                                                                const GALGAS_string & inAttribute_mCppContents,
                                                                                                const GALGAS_string & inAttribute_mCocoaHeader,
                                                                                                const GALGAS_string & inAttribute_mCocoaImplementation
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mHeaderContents.isValid () && inAttribute_mCppContents.isValid () && inAttribute_mCocoaHeader.isValid () && inAttribute_mCocoaImplementation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mLexiqueName, inAttribute_mHeaderContents, inAttribute_mCppContents, inAttribute_mCocoaHeader, inAttribute_mCocoaImplementation COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::reader_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mLexiqueName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::reader_mLexiqueName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLexiqueName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::reader_mHeaderContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mHeaderContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::reader_mHeaderContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::reader_mCppContents (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mCppContents ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::reader_mCppContents (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppContents ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::reader_mCocoaHeader (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mCocoaHeader ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::reader_mCocoaHeader (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCocoaHeader ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_lexiqueDeclarationForGeneration::reader_mCocoaImplementation (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_lexiqueDeclarationForGeneration * p = (const cPtr_lexiqueDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueDeclarationForGeneration) ;
    result = p->mAttribute_mCocoaImplementation ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_lexiqueDeclarationForGeneration::reader_mCocoaImplementation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCocoaImplementation ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                              Pointer class for @lexiqueDeclarationForGeneration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_lexiqueDeclarationForGeneration::cPtr_lexiqueDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                            const GALGAS_string & in_mImplementationCppFileName,
                                                                            const GALGAS_string & in_mLexiqueName,
                                                                            const GALGAS_string & in_mHeaderContents,
                                                                            const GALGAS_string & in_mCppContents,
                                                                            const GALGAS_string & in_mCocoaHeader,
                                                                            const GALGAS_string & in_mCocoaImplementation
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mLexiqueName (in_mLexiqueName),
mAttribute_mHeaderContents (in_mHeaderContents),
mAttribute_mCppContents (in_mCppContents),
mAttribute_mCocoaHeader (in_mCocoaHeader),
mAttribute_mCocoaImplementation (in_mCocoaImplementation) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_lexiqueDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

void cPtr_lexiqueDeclarationForGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@lexiqueDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mHeaderContents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCppContents.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCocoaHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCocoaImplementation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_lexiqueDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mLexiqueName, mAttribute_mHeaderContents, mAttribute_mCppContents, mAttribute_mCocoaHeader, mAttribute_mCocoaImplementation COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @lexiqueDeclarationForGeneration type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ("lexiqueDeclarationForGeneration",
                                                        & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_lexiqueDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_lexiqueDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lexiqueDeclarationForGeneration GALGAS_lexiqueDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueDeclarationForGeneration result ;
  const GALGAS_lexiqueDeclarationForGeneration * p = (const GALGAS_lexiqueDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_onceFunctionDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionName.objectCompare (p->mAttribute_mFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReturnType.objectCompare (p->mAttribute_mReturnType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVariableCppName.objectCompare (p->mAttribute_mResultVariableCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mFunctionInstructionList.objectCompare (p->mAttribute_mFunctionInstructionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_onceFunctionDeclarationForGeneration::objectCompare (const GALGAS_onceFunctionDeclarationForGeneration & inOperand) const {
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

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration::GALGAS_onceFunctionDeclarationForGeneration (const cPtr_onceFunctionDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_onceFunctionDeclarationForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_string & inAttribute_mFunctionName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReturnType,
                                                                                                          const GALGAS_string & inAttribute_mResultVariableCppName,
                                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mFunctionInstructionList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mFunctionName.isValid () && inAttribute_mReturnType.isValid () && inAttribute_mResultVariableCppName.isValid () && inAttribute_mFunctionInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_onceFunctionDeclarationForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mFunctionName, inAttribute_mReturnType, inAttribute_mResultVariableCppName, inAttribute_mFunctionInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mFunctionName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_onceFunctionDeclarationForGeneration::reader_mFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_onceFunctionDeclarationForGeneration::reader_mReturnType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mReturnType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_onceFunctionDeclarationForGeneration::reader_mReturnType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReturnType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_onceFunctionDeclarationForGeneration::reader_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mResultVariableCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_onceFunctionDeclarationForGeneration::reader_mResultVariableCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVariableCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_onceFunctionDeclarationForGeneration::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (const cPtr_onceFunctionDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_onceFunctionDeclarationForGeneration) ;
    result = p->mAttribute_mFunctionInstructionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_onceFunctionDeclarationForGeneration::reader_mFunctionInstructionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionInstructionList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @onceFunctionDeclarationForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_onceFunctionDeclarationForGeneration::cPtr_onceFunctionDeclarationForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_string & in_mFunctionName,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & in_mReturnType,
                                                                                      const GALGAS_string & in_mResultVariableCppName,
                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mFunctionInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mFunctionName (in_mFunctionName),
mAttribute_mReturnType (in_mReturnType),
mAttribute_mResultVariableCppName (in_mResultVariableCppName),
mAttribute_mFunctionInstructionList (in_mFunctionInstructionList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_onceFunctionDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

void cPtr_onceFunctionDeclarationForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@onceFunctionDeclarationForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReturnType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVariableCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mFunctionInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_onceFunctionDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_onceFunctionDeclarationForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mFunctionName, mAttribute_mReturnType, mAttribute_mResultVariableCppName, mAttribute_mFunctionInstructionList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @onceFunctionDeclarationForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ("onceFunctionDeclarationForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_onceFunctionDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_onceFunctionDeclarationForGeneration GALGAS_onceFunctionDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationForGeneration result ;
  const GALGAS_onceFunctionDeclarationForGeneration * p = (const GALGAS_onceFunctionDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_onceFunctionDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_optionComponentForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mIsPredefined.objectCompare (p->mAttribute_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOptionComponentName.objectCompare (p->mAttribute_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBoolOptionMap.objectCompare (p->mAttribute_mBoolOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mUIntOptionMap.objectCompare (p->mAttribute_mUIntOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStringOptionMap.objectCompare (p->mAttribute_mStringOptionMap) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mStringListOptionMap.objectCompare (p->mAttribute_mStringListOptionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_optionComponentForGeneration::objectCompare (const GALGAS_optionComponentForGeneration & inOperand) const {
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

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE),
                                                               GALGAS_commandLineOptionMap::constructor_emptyMap (HERE)
                                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentForGeneration::GALGAS_optionComponentForGeneration (const cPtr_optionComponentForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                          const GALGAS_string & inAttribute_mOptionComponentName,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mBoolOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mUIntOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mStringOptionMap,
                                                                                          const GALGAS_commandLineOptionMap & inAttribute_mStringListOptionMap
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mIsPredefined.isValid () && inAttribute_mOptionComponentName.isValid () && inAttribute_mBoolOptionMap.isValid () && inAttribute_mUIntOptionMap.isValid () && inAttribute_mStringOptionMap.isValid () && inAttribute_mStringListOptionMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_optionComponentForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mIsPredefined, inAttribute_mOptionComponentName, inAttribute_mBoolOptionMap, inAttribute_mUIntOptionMap, inAttribute_mStringOptionMap, inAttribute_mStringListOptionMap COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_optionComponentForGeneration::reader_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mAttribute_mIsPredefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_optionComponentForGeneration::reader_mIsPredefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsPredefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_optionComponentForGeneration::reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mAttribute_mOptionComponentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_optionComponentForGeneration::reader_mOptionComponentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionComponentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::reader_mBoolOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mAttribute_mBoolOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cPtr_optionComponentForGeneration::reader_mBoolOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoolOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::reader_mUIntOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mAttribute_mUIntOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cPtr_optionComponentForGeneration::reader_mUIntOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUIntOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::reader_mStringOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mAttribute_mStringOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cPtr_optionComponentForGeneration::reader_mStringOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap GALGAS_optionComponentForGeneration::reader_mStringListOptionMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_commandLineOptionMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_optionComponentForGeneration * p = (const cPtr_optionComponentForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentForGeneration) ;
    result = p->mAttribute_mStringListOptionMap ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_commandLineOptionMap cPtr_optionComponentForGeneration::reader_mStringListOptionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStringListOptionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                Pointer class for @optionComponentForGeneration class                                *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_optionComponentForGeneration::cPtr_optionComponentForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_bool & in_mIsPredefined,
                                                                      const GALGAS_string & in_mOptionComponentName,
                                                                      const GALGAS_commandLineOptionMap & in_mBoolOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mUIntOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mStringOptionMap,
                                                                      const GALGAS_commandLineOptionMap & in_mStringListOptionMap
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mIsPredefined (in_mIsPredefined),
mAttribute_mOptionComponentName (in_mOptionComponentName),
mAttribute_mBoolOptionMap (in_mBoolOptionMap),
mAttribute_mUIntOptionMap (in_mUIntOptionMap),
mAttribute_mStringOptionMap (in_mStringOptionMap),
mAttribute_mStringListOptionMap (in_mStringListOptionMap) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_optionComponentForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

void cPtr_optionComponentForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@optionComponentForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBoolOptionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mUIntOptionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStringOptionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mStringListOptionMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_optionComponentForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionComponentForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mIsPredefined, mAttribute_mOptionComponentName, mAttribute_mBoolOptionMap, mAttribute_mUIntOptionMap, mAttribute_mStringOptionMap, mAttribute_mStringListOptionMap COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @optionComponentForGeneration type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentForGeneration ("optionComponentForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_optionComponentForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_optionComponentForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_optionComponentForGeneration GALGAS_optionComponentForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentForGeneration result ;
  const GALGAS_optionComponentForGeneration * p = (const GALGAS_optionComponentForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overrideCategoryReaderForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBaseTypeName.objectCompare (p->mAttribute_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryReaderName.objectCompare (p->mAttribute_mOverridingCategoryReaderName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultType.objectCompare (p->mAttribute_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mResultVarCppName.objectCompare (p->mAttribute_mResultVarCppName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mOverridingCategoryReaderFormalParameterList.objectCompare (p->mAttribute_mOverridingCategoryReaderFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overrideCategoryReaderForGeneration::objectCompare (const GALGAS_overrideCategoryReaderForGeneration & inOperand) const {
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

GALGAS_overrideCategoryReaderForGeneration::GALGAS_overrideCategoryReaderForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideCategoryReaderForGeneration GALGAS_overrideCategoryReaderForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overrideCategoryReaderForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                      GALGAS_string::constructor_default (HERE),
                                                                      GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                                      GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                      GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideCategoryReaderForGeneration::GALGAS_overrideCategoryReaderForGeneration (const cPtr_overrideCategoryReaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overrideCategoryReaderForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideCategoryReaderForGeneration GALGAS_overrideCategoryReaderForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                        const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                        const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                        const GALGAS_string & inAttribute_mOverridingCategoryReaderName,
                                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mResultType,
                                                                                                        const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                                        const GALGAS_formalInputParameterListForGeneration & inAttribute_mOverridingCategoryReaderFormalParameterList,
                                                                                                        const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                        const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overrideCategoryReaderForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mOverridingCategoryReaderName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mOverridingCategoryReaderFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overrideCategoryReaderForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mOverridingCategoryReaderName, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mOverridingCategoryReaderFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overrideCategoryReaderForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overrideCategoryReaderForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overrideCategoryReaderForGeneration::reader_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mBaseTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overrideCategoryReaderForGeneration::reader_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBaseTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overrideCategoryReaderForGeneration::reader_mOverridingCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mOverridingCategoryReaderName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overrideCategoryReaderForGeneration::reader_mOverridingCategoryReaderName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryReaderName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overrideCategoryReaderForGeneration::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mResultType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overrideCategoryReaderForGeneration::reader_mResultType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overrideCategoryReaderForGeneration::reader_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mResultVarCppName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overrideCategoryReaderForGeneration::reader_mResultVarCppName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResultVarCppName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration GALGAS_overrideCategoryReaderForGeneration::reader_mOverridingCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalInputParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mOverridingCategoryReaderFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalInputParameterListForGeneration cPtr_overrideCategoryReaderForGeneration::reader_mOverridingCategoryReaderFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOverridingCategoryReaderFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_overrideCategoryReaderForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_overrideCategoryReaderForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_overrideCategoryReaderForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overrideCategoryReaderForGeneration * p = (const cPtr_overrideCategoryReaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideCategoryReaderForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_overrideCategoryReaderForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                            Pointer class for @overrideCategoryReaderForGeneration class                             *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overrideCategoryReaderForGeneration::cPtr_overrideCategoryReaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                    const GALGAS_string & in_mImplementationCppFileName,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                    const GALGAS_string & in_mBaseTypeName,
                                                                                    const GALGAS_string & in_mOverridingCategoryReaderName,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_mResultType,
                                                                                    const GALGAS_string & in_mResultVarCppName,
                                                                                    const GALGAS_formalInputParameterListForGeneration & in_mOverridingCategoryReaderFormalParameterList,
                                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                    const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mBaseTypeName (in_mBaseTypeName),
mAttribute_mOverridingCategoryReaderName (in_mOverridingCategoryReaderName),
mAttribute_mResultType (in_mResultType),
mAttribute_mResultVarCppName (in_mResultVarCppName),
mAttribute_mOverridingCategoryReaderFormalParameterList (in_mOverridingCategoryReaderFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overrideCategoryReaderForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration ;
}

void cPtr_overrideCategoryReaderForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@overrideCategoryReaderForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryReaderName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mOverridingCategoryReaderFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overrideCategoryReaderForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overrideCategoryReaderForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mBaseTypeName, mAttribute_mOverridingCategoryReaderName, mAttribute_mResultType, mAttribute_mResultVarCppName, mAttribute_mOverridingCategoryReaderFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @overrideCategoryReaderForGeneration type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration ("overrideCategoryReaderForGeneration",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overrideCategoryReaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overrideCategoryReaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideCategoryReaderForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overrideCategoryReaderForGeneration GALGAS_overrideCategoryReaderForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_overrideCategoryReaderForGeneration result ;
  const GALGAS_overrideCategoryReaderForGeneration * p = (const GALGAS_overrideCategoryReaderForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overrideCategoryReaderForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideCategoryReaderForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingCategoryMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingCategoryMethodForGeneration * p = (const cPtr_overridingCategoryMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingCategoryMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBaseTypeName.objectCompare (p->mAttribute_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryMethodName.objectCompare (p->mAttribute_mCategoryMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryMethodFormalParameterList.objectCompare (p->mAttribute_mCategoryMethodFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingCategoryMethodForGeneration::objectCompare (const GALGAS_overridingCategoryMethodForGeneration & inOperand) const {
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

GALGAS_overridingCategoryMethodForGeneration::GALGAS_overridingCategoryMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodForGeneration GALGAS_overridingCategoryMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingCategoryMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                        GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                        GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodForGeneration::GALGAS_overridingCategoryMethodForGeneration (const cPtr_overridingCategoryMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingCategoryMethodForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodForGeneration GALGAS_overridingCategoryMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                            const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                            const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                            const GALGAS_string & inAttribute_mCategoryMethodName,
                                                                                                            const GALGAS_formalParameterListForGeneration & inAttribute_mCategoryMethodFormalParameterList,
                                                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                            const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mCategoryMethodName.isValid () && inAttribute_mCategoryMethodFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingCategoryMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mCategoryMethodName, inAttribute_mCategoryMethodFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overridingCategoryMethodForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodForGeneration * p = (const cPtr_overridingCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overridingCategoryMethodForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingCategoryMethodForGeneration::reader_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodForGeneration * p = (const cPtr_overridingCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodForGeneration) ;
    result = p->mAttribute_mBaseTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingCategoryMethodForGeneration::reader_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBaseTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingCategoryMethodForGeneration::reader_mCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodForGeneration * p = (const cPtr_overridingCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodForGeneration) ;
    result = p->mAttribute_mCategoryMethodName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingCategoryMethodForGeneration::reader_mCategoryMethodName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryMethodName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_overridingCategoryMethodForGeneration::reader_mCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodForGeneration * p = (const cPtr_overridingCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodForGeneration) ;
    result = p->mAttribute_mCategoryMethodFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_overridingCategoryMethodForGeneration::reader_mCategoryMethodFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryMethodFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_overridingCategoryMethodForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodForGeneration * p = (const cPtr_overridingCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_overridingCategoryMethodForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_overridingCategoryMethodForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryMethodForGeneration * p = (const cPtr_overridingCategoryMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryMethodForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_overridingCategoryMethodForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                           Pointer class for @overridingCategoryMethodForGeneration class                            *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingCategoryMethodForGeneration::cPtr_overridingCategoryMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                        const GALGAS_string & in_mImplementationCppFileName,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                        const GALGAS_string & in_mBaseTypeName,
                                                                                        const GALGAS_string & in_mCategoryMethodName,
                                                                                        const GALGAS_formalParameterListForGeneration & in_mCategoryMethodFormalParameterList,
                                                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                        const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mBaseTypeName (in_mBaseTypeName),
mAttribute_mCategoryMethodName (in_mCategoryMethodName),
mAttribute_mCategoryMethodFormalParameterList (in_mCategoryMethodFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingCategoryMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration ;
}

void cPtr_overridingCategoryMethodForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@overridingCategoryMethodForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingCategoryMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingCategoryMethodForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mBaseTypeName, mAttribute_mCategoryMethodName, mAttribute_mCategoryMethodFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @overridingCategoryMethodForGeneration type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration ("overridingCategoryMethodForGeneration",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingCategoryMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingCategoryMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingCategoryMethodForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryMethodForGeneration GALGAS_overridingCategoryMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryMethodForGeneration result ;
  const GALGAS_overridingCategoryMethodForGeneration * p = (const GALGAS_overridingCategoryMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingCategoryMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingCategoryMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_overridingCategoryModifierForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_overridingCategoryModifierForGeneration * p = (const cPtr_overridingCategoryModifierForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_overridingCategoryModifierForGeneration) ;
  if (kOperandEqual == result) {
    result = mAttribute_mHasHeader.objectCompare (p->mAttribute_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mImplementationCppFileName.objectCompare (p->mAttribute_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mReceiverType.objectCompare (p->mAttribute_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mBaseTypeName.objectCompare (p->mAttribute_mBaseTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryModifierName.objectCompare (p->mAttribute_mCategoryModifierName) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mCategoryModifierFormalParameterList.objectCompare (p->mAttribute_mCategoryModifierFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mTypedAttributeList.objectCompare (p->mAttribute_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mAttribute_mSemanticInstructionListForGeneration.objectCompare (p->mAttribute_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_overridingCategoryModifierForGeneration::objectCompare (const GALGAS_overridingCategoryModifierForGeneration & inOperand) const {
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

GALGAS_overridingCategoryModifierForGeneration::GALGAS_overridingCategoryModifierForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierForGeneration GALGAS_overridingCategoryModifierForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_overridingCategoryModifierForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                          GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                          GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE),
                                                                          GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                          GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                                          COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierForGeneration::GALGAS_overridingCategoryModifierForGeneration (const cPtr_overridingCategoryModifierForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingCategoryModifierForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierForGeneration GALGAS_overridingCategoryModifierForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                                const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inAttribute_mReceiverType,
                                                                                                                const GALGAS_string & inAttribute_mBaseTypeName,
                                                                                                                const GALGAS_string & inAttribute_mCategoryModifierName,
                                                                                                                const GALGAS_formalParameterListForGeneration & inAttribute_mCategoryModifierFormalParameterList,
                                                                                                                const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                                                const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryModifierForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mBaseTypeName.isValid () && inAttribute_mCategoryModifierName.isValid () && inAttribute_mCategoryModifierFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_overridingCategoryModifierForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mBaseTypeName, inAttribute_mCategoryModifierName, inAttribute_mCategoryModifierFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_overridingCategoryModifierForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap_2D_proxy result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierForGeneration * p = (const cPtr_overridingCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierForGeneration) ;
    result = p->mAttribute_mReceiverType ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy cPtr_overridingCategoryModifierForGeneration::reader_mReceiverType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mReceiverType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingCategoryModifierForGeneration::reader_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierForGeneration * p = (const cPtr_overridingCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierForGeneration) ;
    result = p->mAttribute_mBaseTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingCategoryModifierForGeneration::reader_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBaseTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_overridingCategoryModifierForGeneration::reader_mCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierForGeneration * p = (const cPtr_overridingCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierForGeneration) ;
    result = p->mAttribute_mCategoryModifierName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string cPtr_overridingCategoryModifierForGeneration::reader_mCategoryModifierName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryModifierName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration GALGAS_overridingCategoryModifierForGeneration::reader_mCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierForGeneration * p = (const cPtr_overridingCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierForGeneration) ;
    result = p->mAttribute_mCategoryModifierFormalParameterList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_formalParameterListForGeneration cPtr_overridingCategoryModifierForGeneration::reader_mCategoryModifierFormalParameterList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCategoryModifierFormalParameterList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList GALGAS_overridingCategoryModifierForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_typedPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierForGeneration * p = (const cPtr_overridingCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierForGeneration) ;
    result = p->mAttribute_mTypedAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typedPropertyList cPtr_overridingCategoryModifierForGeneration::reader_mTypedAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTypedAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration GALGAS_overridingCategoryModifierForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_overridingCategoryModifierForGeneration * p = (const cPtr_overridingCategoryModifierForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingCategoryModifierForGeneration) ;
    result = p->mAttribute_mSemanticInstructionListForGeneration ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_semanticInstructionListForGeneration cPtr_overridingCategoryModifierForGeneration::reader_mSemanticInstructionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSemanticInstructionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                          Pointer class for @overridingCategoryModifierForGeneration class                           *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_overridingCategoryModifierForGeneration::cPtr_overridingCategoryModifierForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                            const GALGAS_string & in_mImplementationCppFileName,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_mReceiverType,
                                                                                            const GALGAS_string & in_mBaseTypeName,
                                                                                            const GALGAS_string & in_mCategoryModifierName,
                                                                                            const GALGAS_formalParameterListForGeneration & in_mCategoryModifierFormalParameterList,
                                                                                            const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                                            const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mAttribute_mReceiverType (in_mReceiverType),
mAttribute_mBaseTypeName (in_mBaseTypeName),
mAttribute_mCategoryModifierName (in_mCategoryModifierName),
mAttribute_mCategoryModifierFormalParameterList (in_mCategoryModifierFormalParameterList),
mAttribute_mTypedAttributeList (in_mTypedAttributeList),
mAttribute_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_overridingCategoryModifierForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration ;
}

void cPtr_overridingCategoryModifierForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "[@overridingCategoryModifierForGeneration:" ;
  mAttribute_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryModifierName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mCategoryModifierFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mAttribute_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_overridingCategoryModifierForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_overridingCategoryModifierForGeneration (mAttribute_mHasHeader, mAttribute_mImplementationCppFileName, mAttribute_mReceiverType, mAttribute_mBaseTypeName, mAttribute_mCategoryModifierName, mAttribute_mCategoryModifierFormalParameterList, mAttribute_mTypedAttributeList, mAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @overridingCategoryModifierForGeneration type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration ("overridingCategoryModifierForGeneration",
                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_overridingCategoryModifierForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_overridingCategoryModifierForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overridingCategoryModifierForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_overridingCategoryModifierForGeneration GALGAS_overridingCategoryModifierForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_overridingCategoryModifierForGeneration result ;
  const GALGAS_overridingCategoryModifierForGeneration * p = (const GALGAS_overridingCategoryModifierForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_overridingCategoryModifierForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingCategoryModifierForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

