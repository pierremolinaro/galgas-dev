#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//----------------------------------------------------------------------------------------------------------------------
// @lexicalTagInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalTagInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalTagInstructionAST * p = (const cPtr_lexicalTagInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTagName.objectCompare (p->mProperty_mLexicalTagName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalTagInstructionAST::objectCompare (const GALGAS_lexicalTagInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalTagInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST::GALGAS_lexicalTagInstructionAST (const cPtr_lexicalTagInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalTagInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexicalTagName
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  if (inAttribute_mLexicalTagName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalTagInstructionAST (inAttribute_mLexicalTagName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalTagInstructionAST::readProperty_mLexicalTagName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalTagInstructionAST * p = (cPtr_lexicalTagInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalTagInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalTagInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalTagInstructionAST::cPtr_lexicalTagInstructionAST (const GALGAS_lstring & in_mLexicalTagName
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName (in_mLexicalTagName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalTagInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

void cPtr_lexicalTagInstructionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalTagInstructionAST:" ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalTagInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalTagInstructionAST (mProperty_mLexicalTagName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTagInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagInstructionAST ("lexicalTagInstructionAST",
                                                 & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST result ;
  const GALGAS_lexicalTagInstructionAST * p = (const GALGAS_lexicalTagInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalTagInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalTagInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak::GALGAS_lexicalTagInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak & GALGAS_lexicalTagInstructionAST_2D_weak::operator = (const GALGAS_lexicalTagInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak::GALGAS_lexicalTagInstructionAST_2D_weak (const GALGAS_lexicalTagInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak GALGAS_lexicalTagInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST GALGAS_lexicalTagInstructionAST_2D_weak::bang_lexicalTagInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalTagInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalTagInstructionAST) ;
      result = GALGAS_lexicalTagInstructionAST ((cPtr_lexicalTagInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalTagInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2D_weak ("lexicalTagInstructionAST-weak",
                                                         & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalTagInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalTagInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalTagInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalTagInstructionAST_2D_weak GALGAS_lexicalTagInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalTagInstructionAST_2D_weak result ;
  const GALGAS_lexicalTagInstructionAST_2D_weak * p = (const GALGAS_lexicalTagInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalTagInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalRewindInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalRewindInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalRewindInstructionAST * p = (const cPtr_lexicalRewindInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLexicalTagName.objectCompare (p->mProperty_mLexicalTagName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalName.objectCompare (p->mProperty_mTerminalName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalRewindInstructionAST::objectCompare (const GALGAS_lexicalRewindInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (void) :
GALGAS_lexicalInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalRewindInstructionAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST::GALGAS_lexicalRewindInstructionAST (const cPtr_lexicalRewindInstructionAST * inSourcePtr) :
GALGAS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRewindInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::constructor_new (const GALGAS_lstring & inAttribute_mLexicalTagName,
                                                                                        const GALGAS_lstring & inAttribute_mTerminalName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  if (inAttribute_mLexicalTagName.isValid () && inAttribute_mTerminalName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalRewindInstructionAST (inAttribute_mLexicalTagName, inAttribute_mTerminalName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::readProperty_mLexicalTagName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mLexicalTagName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalRewindInstructionAST::readProperty_mTerminalName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalRewindInstructionAST * p = (cPtr_lexicalRewindInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRewindInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRewindInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalRewindInstructionAST::cPtr_lexicalRewindInstructionAST (const GALGAS_lstring & in_mLexicalTagName,
                                                                    const GALGAS_lstring & in_mTerminalName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (THERE),
mProperty_mLexicalTagName (in_mLexicalTagName),
mProperty_mTerminalName (in_mTerminalName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalRewindInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

void cPtr_lexicalRewindInstructionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@lexicalRewindInstructionAST:" ;
  mProperty_mLexicalTagName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalRewindInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalRewindInstructionAST (mProperty_mLexicalTagName, mProperty_mTerminalName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRewindInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ("lexicalRewindInstructionAST",
                                                    & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST result ;
  const GALGAS_lexicalRewindInstructionAST * p = (const GALGAS_lexicalRewindInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRewindInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalRewindInstructionAST_2D_weak::objectCompare (const GALGAS_lexicalRewindInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak::GALGAS_lexicalRewindInstructionAST_2D_weak (void) :
GALGAS_lexicalInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak & GALGAS_lexicalRewindInstructionAST_2D_weak::operator = (const GALGAS_lexicalRewindInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak::GALGAS_lexicalRewindInstructionAST_2D_weak (const GALGAS_lexicalRewindInstructionAST & inSource) :
GALGAS_lexicalInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak GALGAS_lexicalRewindInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST GALGAS_lexicalRewindInstructionAST_2D_weak::bang_lexicalRewindInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalRewindInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRewindInstructionAST) ;
      result = GALGAS_lexicalRewindInstructionAST ((cPtr_lexicalRewindInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalRewindInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2D_weak ("lexicalRewindInstructionAST-weak",
                                                            & kTypeDescriptor_GALGAS_lexicalInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalRewindInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRewindInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalRewindInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalRewindInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRewindInstructionAST_2D_weak GALGAS_lexicalRewindInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexicalRewindInstructionAST_2D_weak result ;
  const GALGAS_lexicalRewindInstructionAST_2D_weak * p = (const GALGAS_lexicalRewindInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalRewindInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRewindInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexiqueComponentAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexiqueComponentAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexiqueComponentAST * p = (const cPtr_lexiqueComponentAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexiqueComponentName.objectCompare (p->mProperty_mLexiqueComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsTemplate.objectCompare (p->mProperty_mIsTemplate) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateDelimitorList.objectCompare (p->mProperty_mTemplateDelimitorList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTemplateReplacementList.objectCompare (p->mProperty_mTemplateReplacementList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalAttributeList.objectCompare (p->mProperty_mLexicalAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalStyleList.objectCompare (p->mProperty_mLexicalStyleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTerminalDeclarationList.objectCompare (p->mProperty_mTerminalDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalMessageDeclarationList.objectCompare (p->mProperty_mLexicalMessageDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalListDeclarationList.objectCompare (p->mProperty_mLexicalListDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalRuleList.objectCompare (p->mProperty_mLexicalRuleList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternRoutineList.objectCompare (p->mProperty_mExternRoutineList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternFunctionList.objectCompare (p->mProperty_mExternFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingListAST.objectCompare (p->mProperty_mIndexingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIndexingDirectory.objectCompare (p->mProperty_mIndexingDirectory) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLexicalFunctionListAST.objectCompare (p->mProperty_mLexicalFunctionListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexiqueComponentAST::objectCompare (const GALGAS_lexiqueComponentAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lexicalFunctionListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST::GALGAS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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
                                                                        const GALGAS_lstring & inAttribute_mIndexingDirectory,
                                                                        const GALGAS_lexicalFunctionListAST & inAttribute_mLexicalFunctionListAST
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mLexiqueComponentName.isValid () && inAttribute_mIsTemplate.isValid () && inAttribute_mTemplateDelimitorList.isValid () && inAttribute_mTemplateReplacementList.isValid () && inAttribute_mLexicalAttributeList.isValid () && inAttribute_mLexicalStyleList.isValid () && inAttribute_mTerminalDeclarationList.isValid () && inAttribute_mLexicalMessageDeclarationList.isValid () && inAttribute_mLexicalListDeclarationList.isValid () && inAttribute_mLexicalRuleList.isValid () && inAttribute_mExternRoutineList.isValid () && inAttribute_mExternFunctionList.isValid () && inAttribute_mIndexingListAST.isValid () && inAttribute_mIndexingDirectory.isValid () && inAttribute_mLexicalFunctionListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexiqueComponentAST (inAttribute_mIsPredefined, inAttribute_mLexiqueComponentName, inAttribute_mIsTemplate, inAttribute_mTemplateDelimitorList, inAttribute_mTemplateReplacementList, inAttribute_mLexicalAttributeList, inAttribute_mLexicalStyleList, inAttribute_mTerminalDeclarationList, inAttribute_mLexicalMessageDeclarationList, inAttribute_mLexicalListDeclarationList, inAttribute_mLexicalRuleList, inAttribute_mExternRoutineList, inAttribute_mExternFunctionList, inAttribute_mIndexingListAST, inAttribute_mIndexingDirectory, inAttribute_mLexicalFunctionListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_lexiqueComponentAST::readProperty_mIsTemplate (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIsTemplate ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_metamodelTemplateDelimitorListAST GALGAS_lexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_metamodelTemplateDelimitorListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_templateReplacementListAST GALGAS_lexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_templateReplacementListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalAttributeListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalAttributeListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalStyleListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalStyleList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalStyleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalStyleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_terminalDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mTerminalDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_terminalDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTerminalDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalMessageDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalMessageDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalMessageDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalMessageDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalListDeclarationListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalListDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalListDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalListDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalRuleListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalRuleList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalRuleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalRuleList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externRoutineListAST GALGAS_lexiqueComponentAST::readProperty_mExternRoutineList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externRoutineListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mExternRoutineList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externFunctionListAST GALGAS_lexiqueComponentAST::readProperty_mExternFunctionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externFunctionListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mExternFunctionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_indexingListAST GALGAS_lexiqueComponentAST::readProperty_mIndexingListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_indexingListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIndexingListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexiqueComponentAST::readProperty_mIndexingDirectory (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIndexingDirectory ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionListAST GALGAS_lexiqueComponentAST::readProperty_mLexicalFunctionListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lexicalFunctionListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalFunctionListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueComponentAST class
//----------------------------------------------------------------------------------------------------------------------

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
                                                    const GALGAS_lstring & in_mIndexingDirectory,
                                                    const GALGAS_lexicalFunctionListAST & in_mLexicalFunctionListAST
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mLexiqueComponentName (in_mLexiqueComponentName),
mProperty_mIsTemplate (in_mIsTemplate),
mProperty_mTemplateDelimitorList (in_mTemplateDelimitorList),
mProperty_mTemplateReplacementList (in_mTemplateReplacementList),
mProperty_mLexicalAttributeList (in_mLexicalAttributeList),
mProperty_mLexicalStyleList (in_mLexicalStyleList),
mProperty_mTerminalDeclarationList (in_mTerminalDeclarationList),
mProperty_mLexicalMessageDeclarationList (in_mLexicalMessageDeclarationList),
mProperty_mLexicalListDeclarationList (in_mLexicalListDeclarationList),
mProperty_mLexicalRuleList (in_mLexicalRuleList),
mProperty_mExternRoutineList (in_mExternRoutineList),
mProperty_mExternFunctionList (in_mExternFunctionList),
mProperty_mIndexingListAST (in_mIndexingListAST),
mProperty_mIndexingDirectory (in_mIndexingDirectory),
mProperty_mLexicalFunctionListAST (in_mLexicalFunctionListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

void cPtr_lexiqueComponentAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@lexiqueComponentAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsTemplate.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalStyleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTerminalDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalMessageDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalListDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalRuleList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternRoutineList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIndexingDirectory.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLexicalFunctionListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexiqueComponentAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mProperty_mIsPredefined, mProperty_mLexiqueComponentName, mProperty_mIsTemplate, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, mProperty_mLexicalAttributeList, mProperty_mLexicalStyleList, mProperty_mTerminalDeclarationList, mProperty_mLexicalMessageDeclarationList, mProperty_mLexicalListDeclarationList, mProperty_mLexicalRuleList, mProperty_mExternRoutineList, mProperty_mExternFunctionList, mProperty_mIndexingListAST, mProperty_mIndexingDirectory, mProperty_mLexicalFunctionListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueComponentAST_2D_weak::objectCompare (const GALGAS_lexiqueComponentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak::GALGAS_lexiqueComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak & GALGAS_lexiqueComponentAST_2D_weak::operator = (const GALGAS_lexiqueComponentAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak::GALGAS_lexiqueComponentAST_2D_weak (const GALGAS_lexiqueComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak GALGAS_lexiqueComponentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST GALGAS_lexiqueComponentAST_2D_weak::bang_lexiqueComponentAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexiqueComponentAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueComponentAST) ;
      result = GALGAS_lexiqueComponentAST ((cPtr_lexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueComponentAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ("lexiqueComponentAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueComponentAST_2D_weak GALGAS_lexiqueComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueComponentAST_2D_weak result ;
  const GALGAS_lexiqueComponentAST_2D_weak * p = (const GALGAS_lexiqueComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (void) :
mProperty_mLexiqueName (),
mProperty_mLexicalRoutineMessageMap (),
mProperty_mLexicalFunctionMap (),
mProperty_mLexicalMessageMap (),
mProperty_mTerminalMap (),
mProperty_mTerminalList (),
mProperty_mLexicalAttributeMap (),
mProperty_mLexicalTokenListMap (),
mProperty_mUnicodeStringToGenerate (),
mProperty_mTemplateDelimitorList (),
mProperty_mStyleMap (),
mProperty_mExternUnicodeTestFunctions () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::~ GALGAS_lexiqueAnalysisContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext::GALGAS_lexiqueAnalysisContext (const GALGAS_string & inOperand0,
                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                              const GALGAS_terminalMap & inOperand4,
                                                              const GALGAS_terminalList & inOperand5,
                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                              const GALGAS_stringset & inOperand8,
                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                              const GALGAS_styleMap & inOperand10,
                                                              const GALGAS_stringset & inOperand11) :
mProperty_mLexiqueName (inOperand0),
mProperty_mLexicalRoutineMessageMap (inOperand1),
mProperty_mLexicalFunctionMap (inOperand2),
mProperty_mLexicalMessageMap (inOperand3),
mProperty_mTerminalMap (inOperand4),
mProperty_mTerminalList (inOperand5),
mProperty_mLexicalAttributeMap (inOperand6),
mProperty_mLexicalTokenListMap (inOperand7),
mProperty_mUnicodeStringToGenerate (inOperand8),
mProperty_mTemplateDelimitorList (inOperand9),
mProperty_mStyleMap (inOperand10),
mProperty_mExternUnicodeTestFunctions (inOperand11) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_lexiqueAnalysisContext (GALGAS_string::constructor_default (HERE),
                                        GALGAS_lexicalRoutineMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalFunctionMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalMessageMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalMap::constructor_emptyMap (HERE),
                                        GALGAS_terminalList::constructor_emptyList (HERE),
                                        GALGAS_lexicalAttributeMap::constructor_emptyMap (HERE),
                                        GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE),
                                        GALGAS_templateDelimitorList::constructor_emptyList (HERE),
                                        GALGAS_styleMap::constructor_emptyMap (HERE),
                                        GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::constructor_new (const GALGAS_string & inOperand0,
                                                                              const GALGAS_lexicalRoutineMap & inOperand1,
                                                                              const GALGAS_lexicalFunctionMap & inOperand2,
                                                                              const GALGAS_lexicalMessageMap & inOperand3,
                                                                              const GALGAS_terminalMap & inOperand4,
                                                                              const GALGAS_terminalList & inOperand5,
                                                                              const GALGAS_lexicalAttributeMap & inOperand6,
                                                                              const GALGAS_lexicalExplicitTokenListMapMap & inOperand7,
                                                                              const GALGAS_stringset & inOperand8,
                                                                              const GALGAS_templateDelimitorList & inOperand9,
                                                                              const GALGAS_styleMap & inOperand10,
                                                                              const GALGAS_stringset & inOperand11 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_lexiqueAnalysisContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexiqueAnalysisContext::objectCompare (const GALGAS_lexiqueAnalysisContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLexiqueName.objectCompare (inOperand.mProperty_mLexiqueName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalRoutineMessageMap.objectCompare (inOperand.mProperty_mLexicalRoutineMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalFunctionMap.objectCompare (inOperand.mProperty_mLexicalFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalMessageMap.objectCompare (inOperand.mProperty_mLexicalMessageMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalMap.objectCompare (inOperand.mProperty_mTerminalMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTerminalList.objectCompare (inOperand.mProperty_mTerminalList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalAttributeMap.objectCompare (inOperand.mProperty_mLexicalAttributeMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mLexicalTokenListMap.objectCompare (inOperand.mProperty_mLexicalTokenListMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mUnicodeStringToGenerate.objectCompare (inOperand.mProperty_mUnicodeStringToGenerate) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTemplateDelimitorList.objectCompare (inOperand.mProperty_mTemplateDelimitorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStyleMap.objectCompare (inOperand.mProperty_mStyleMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternUnicodeTestFunctions.objectCompare (inOperand.mProperty_mExternUnicodeTestFunctions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_lexiqueAnalysisContext::isValid (void) const {
  return mProperty_mLexiqueName.isValid () && mProperty_mLexicalRoutineMessageMap.isValid () && mProperty_mLexicalFunctionMap.isValid () && mProperty_mLexicalMessageMap.isValid () && mProperty_mTerminalMap.isValid () && mProperty_mTerminalList.isValid () && mProperty_mLexicalAttributeMap.isValid () && mProperty_mLexicalTokenListMap.isValid () && mProperty_mUnicodeStringToGenerate.isValid () && mProperty_mTemplateDelimitorList.isValid () && mProperty_mStyleMap.isValid () && mProperty_mExternUnicodeTestFunctions.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueAnalysisContext::drop (void) {
  mProperty_mLexiqueName.drop () ;
  mProperty_mLexicalRoutineMessageMap.drop () ;
  mProperty_mLexicalFunctionMap.drop () ;
  mProperty_mLexicalMessageMap.drop () ;
  mProperty_mTerminalMap.drop () ;
  mProperty_mTerminalList.drop () ;
  mProperty_mLexicalAttributeMap.drop () ;
  mProperty_mLexicalTokenListMap.drop () ;
  mProperty_mUnicodeStringToGenerate.drop () ;
  mProperty_mTemplateDelimitorList.drop () ;
  mProperty_mStyleMap.drop () ;
  mProperty_mExternUnicodeTestFunctions.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_lexiqueAnalysisContext::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @lexiqueAnalysisContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalRoutineMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalMessageMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTerminalList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalAttributeMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mLexicalTokenListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mUnicodeStringToGenerate.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStyleMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternUnicodeTestFunctions.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexiqueAnalysisContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexiqueAnalysisContext ("lexiqueAnalysisContext",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexiqueAnalysisContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueAnalysisContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexiqueAnalysisContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexiqueAnalysisContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexiqueAnalysisContext GALGAS_lexiqueAnalysisContext::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexiqueAnalysisContext result ;
  const GALGAS_lexiqueAnalysisContext * p = (const GALGAS_lexiqueAnalysisContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexiqueAnalysisContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueAnalysisContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalFunctionCallAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCallAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCallAST * p = (const cPtr_lexicalFunctionCallAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCalledFunctionName.objectCompare (p->mProperty_mCalledFunctionName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCallAST::objectCompare (const GALGAS_lexicalFunctionCallAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCallAST::constructor_new (GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST::GALGAS_lexicalFunctionCallAST (const cPtr_lexicalFunctionCallAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCallAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::constructor_new (const GALGAS_lstring & inAttribute_mCalledFunctionName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST result ;
  if (inAttribute_mCalledFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCallAST (inAttribute_mCalledFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_lexicalFunctionCallAST::readProperty_mCalledFunctionName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_lexicalFunctionCallAST * p = (cPtr_lexicalFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCallAST) ;
    return p->mProperty_mCalledFunctionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCallAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCallAST::cPtr_lexicalFunctionCallAST (const GALGAS_lstring & in_mCalledFunctionName
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCalledFunctionName (in_mCalledFunctionName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

void cPtr_lexicalFunctionCallAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCallAST:" ;
  mProperty_mCalledFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCallAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCallAST (mProperty_mCalledFunctionName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCallAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallAST ("lexicalFunctionCallAST",
                                               & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST result ;
  const GALGAS_lexicalFunctionCallAST * p = (const GALGAS_lexicalFunctionCallAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionCallAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionCallAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak::GALGAS_lexicalFunctionCallAST_2D_weak (void) :
GALGAS_lexicalFunctionExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak & GALGAS_lexicalFunctionCallAST_2D_weak::operator = (const GALGAS_lexicalFunctionCallAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak::GALGAS_lexicalFunctionCallAST_2D_weak (const GALGAS_lexicalFunctionCallAST & inSource) :
GALGAS_lexicalFunctionExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak GALGAS_lexicalFunctionCallAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST GALGAS_lexicalFunctionCallAST_2D_weak::bang_lexicalFunctionCallAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCallAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionCallAST) ;
      result = GALGAS_lexicalFunctionCallAST ((cPtr_lexicalFunctionCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCallAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCallAST_2D_weak ("lexicalFunctionCallAST-weak",
                                                       & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCallAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCallAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCallAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCallAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCallAST_2D_weak GALGAS_lexicalFunctionCallAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCallAST_2D_weak result ;
  const GALGAS_lexicalFunctionCallAST_2D_weak * p = (const GALGAS_lexicalFunctionCallAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCallAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCallAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalFunctionCharacterMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCharacterMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCharacterMatchAST * p = (const cPtr_lexicalFunctionCharacterMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mCharacter.objectCompare (p->mProperty_mCharacter) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCharacterMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST::GALGAS_lexicalFunctionCharacterMatchAST (const cPtr_lexicalFunctionCharacterMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mCharacter
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  if (inAttribute_mCharacter.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterMatchAST (inAttribute_mCharacter COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterMatchAST::readProperty_mCharacter (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalFunctionCharacterMatchAST * p = (cPtr_lexicalFunctionCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterMatchAST) ;
    return p->mProperty_mCharacter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCharacterMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCharacterMatchAST::cPtr_lexicalFunctionCharacterMatchAST (const GALGAS_lchar & in_mCharacter
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mCharacter (in_mCharacter) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

void cPtr_lexicalFunctionCharacterMatchAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCharacterMatchAST:" ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCharacterMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterMatchAST (mProperty_mCharacter COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ("lexicalFunctionCharacterMatchAST",
                                                         & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  const GALGAS_lexicalFunctionCharacterMatchAST * p = (const GALGAS_lexicalFunctionCharacterMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterMatchAST_2D_weak (void) :
GALGAS_lexicalFunctionExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak & GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::operator = (const GALGAS_lexicalFunctionCharacterMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterMatchAST_2D_weak (const GALGAS_lexicalFunctionCharacterMatchAST & inSource) :
GALGAS_lexicalFunctionExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::bang_lexicalFunctionCharacterMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCharacterMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionCharacterMatchAST) ;
      result = GALGAS_lexicalFunctionCharacterMatchAST ((cPtr_lexicalFunctionCharacterMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST_2D_weak ("lexicalFunctionCharacterMatchAST-weak",
                                                                 & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterMatchAST_2D_weak GALGAS_lexicalFunctionCharacterMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterMatchAST_2D_weak result ;
  const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak * p = (const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @lexicalFunctionCharacterIntervalMatchAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_lexicalFunctionCharacterIntervalMatchAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (const cPtr_lexicalFunctionCharacterIntervalMatchAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLowerBound.objectCompare (p->mProperty_mLowerBound) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUpperBound.objectCompare (p->mProperty_mUpperBound) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_lexicalFunctionCharacterIntervalMatchAST::objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (void) :
GALGAS_lexicalFunctionExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (GALGAS_lchar::constructor_default (HERE),
                                                                           GALGAS_lchar::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST::GALGAS_lexicalFunctionCharacterIntervalMatchAST (const cPtr_lexicalFunctionCharacterIntervalMatchAST * inSourcePtr) :
GALGAS_lexicalFunctionExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::constructor_new (const GALGAS_lchar & inAttribute_mLowerBound,
                                                                                                                  const GALGAS_lchar & inAttribute_mUpperBound
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  if (inAttribute_mLowerBound.isValid () && inAttribute_mUpperBound.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST (inAttribute_mLowerBound, inAttribute_mUpperBound COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::readProperty_mLowerBound (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    return p->mProperty_mLowerBound ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lchar GALGAS_lexicalFunctionCharacterIntervalMatchAST::readProperty_mUpperBound (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lchar () ;
  }else{
    cPtr_lexicalFunctionCharacterIntervalMatchAST * p = (cPtr_lexicalFunctionCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
    return p->mProperty_mUpperBound ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @lexicalFunctionCharacterIntervalMatchAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_lexicalFunctionCharacterIntervalMatchAST::cPtr_lexicalFunctionCharacterIntervalMatchAST (const GALGAS_lchar & in_mLowerBound,
                                                                                              const GALGAS_lchar & in_mUpperBound
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalFunctionExpressionAST (THERE),
mProperty_mLowerBound (in_mLowerBound),
mProperty_mUpperBound (in_mUpperBound) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_lexicalFunctionCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;
}

void cPtr_lexicalFunctionCharacterIntervalMatchAST::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@lexicalFunctionCharacterIntervalMatchAST:" ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_lexicalFunctionCharacterIntervalMatchAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_lexicalFunctionCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterIntervalMatchAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ("lexicalFunctionCharacterIntervalMatchAST",
                                                                 & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterIntervalMatchAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterIntervalMatchAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST * p = (const GALGAS_lexicalFunctionCharacterIntervalMatchAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterIntervalMatchAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterIntervalMatchAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::objectCompare (const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak (void) :
GALGAS_lexicalFunctionExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak & GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::operator = (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak (const GALGAS_lexicalFunctionCharacterIntervalMatchAST & inSource) :
GALGAS_lexicalFunctionExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::bang_lexicalFunctionCharacterIntervalMatchAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalFunctionCharacterIntervalMatchAST) ;
      result = GALGAS_lexicalFunctionCharacterIntervalMatchAST ((cPtr_lexicalFunctionCharacterIntervalMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@lexicalFunctionCharacterIntervalMatchAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak ("lexicalFunctionCharacterIntervalMatchAST-weak",
                                                                         & kTypeDescriptor_GALGAS_lexicalFunctionExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak result ;
  const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak * p = (const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_lexicalFunctionCharacterIntervalMatchAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionCharacterIntervalMatchAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @optionComponentDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_optionComponentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_optionComponentDeclarationAST * p = (const cPtr_optionComponentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptionComponentName.objectCompare (p->mProperty_mOptionComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOptions.objectCompare (p->mProperty_mOptions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_optionComponentDeclarationAST::objectCompare (const GALGAS_optionComponentDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_optionComponentDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_commandLineOptionListAST::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST::GALGAS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST::setter_setMOptionComponentName (GALGAS_lstring inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptionComponentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_optionComponentDeclarationAST::setter_setMOptions (GALGAS_commandLineOptionListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    p->mProperty_mOptions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_optionComponentDeclarationAST::readProperty_mOptionComponentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_commandLineOptionListAST GALGAS_optionComponentDeclarationAST::readProperty_mOptions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_commandLineOptionListAST () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                        const GALGAS_lstring & in_mOptionComponentName,
                                                                        const GALGAS_commandLineOptionListAST & in_mOptions
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mOptionComponentName (in_mOptionComponentName),
mProperty_mOptions (in_mOptions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_optionComponentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

void cPtr_optionComponentDeclarationAST::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@optionComponentDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOptions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_optionComponentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mProperty_mIsPredefined, mProperty_mOptionComponentName, mProperty_mOptions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_optionComponentDeclarationAST_2D_weak::objectCompare (const GALGAS_optionComponentDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak::GALGAS_optionComponentDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak & GALGAS_optionComponentDeclarationAST_2D_weak::operator = (const GALGAS_optionComponentDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak::GALGAS_optionComponentDeclarationAST_2D_weak (const GALGAS_optionComponentDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak GALGAS_optionComponentDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST GALGAS_optionComponentDeclarationAST_2D_weak::bang_optionComponentDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_optionComponentDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentDeclarationAST) ;
      result = GALGAS_optionComponentDeclarationAST ((cPtr_optionComponentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@optionComponentDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2D_weak ("optionComponentDeclarationAST-weak",
                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_optionComponentDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_optionComponentDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_optionComponentDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_optionComponentDeclarationAST_2D_weak GALGAS_optionComponentDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_optionComponentDeclarationAST_2D_weak result ;
  const GALGAS_optionComponentDeclarationAST_2D_weak * p = (const GALGAS_optionComponentDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_optionComponentDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionComponentDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @semanticDeclarationWithHeaderForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration::GALGAS_semanticDeclarationWithHeaderForGeneration (const cPtr_semanticDeclarationWithHeaderForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMHasHeader (GALGAS_bool inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mHasHeader = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationWithHeaderForGeneration::setter_setMImplementationCppFileName (GALGAS_string inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    p->mProperty_mImplementationCppFileName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_semanticDeclarationWithHeaderForGeneration::readProperty_mHasHeader (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    return p->mProperty_mHasHeader ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_semanticDeclarationWithHeaderForGeneration::readProperty_mImplementationCppFileName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticDeclarationWithHeaderForGeneration) ;
    return p->mProperty_mImplementationCppFileName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationWithHeaderForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationWithHeaderForGeneration::cPtr_semanticDeclarationWithHeaderForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                                  const GALGAS_string & in_mImplementationCppFileName
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mHasHeader (in_mHasHeader),
mProperty_mImplementationCppFileName (in_mImplementationCppFileName) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationWithHeaderForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ("semanticDeclarationWithHeaderForGeneration",
                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::objectCompare (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak & GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::operator = (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (const GALGAS_semanticDeclarationWithHeaderForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::bang_semanticDeclarationWithHeaderForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationWithHeaderForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      result = GALGAS_semanticDeclarationWithHeaderForGeneration ((cPtr_semanticDeclarationWithHeaderForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticDeclarationWithHeaderForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ("semanticDeclarationWithHeaderForGeneration-weak",
                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak result ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak * p = (const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationWithHeaderForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @arrayDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_arrayDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayDeclarationAST * p = (const cPtr_arrayDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayTypeName.objectCompare (p->mProperty_mArrayTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDimension.objectCompare (p->mProperty_mDimension) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_arrayDeclarationAST::objectCompare (const GALGAS_arrayDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_arrayDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_luint::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST::GALGAS_arrayDeclarationAST (const cPtr_arrayDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_lstring & inAttribute_mArrayTypeName,
                                                                        const GALGAS_lstring & inAttribute_mElementTypeName,
                                                                        const GALGAS_luint & inAttribute_mDimension
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mArrayTypeName.isValid () && inAttribute_mElementTypeName.isValid () && inAttribute_mDimension.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayDeclarationAST (inAttribute_mIsPredefined, inAttribute_mArrayTypeName, inAttribute_mElementTypeName, inAttribute_mDimension COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST::readProperty_mArrayTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    return p->mProperty_mArrayTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayDeclarationAST::readProperty_mElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    return p->mProperty_mElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_luint GALGAS_arrayDeclarationAST::readProperty_mDimension (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_luint () ;
  }else{
    cPtr_arrayDeclarationAST * p = (cPtr_arrayDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayDeclarationAST) ;
    return p->mProperty_mDimension ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @arrayDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_arrayDeclarationAST::cPtr_arrayDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mArrayTypeName,
                                                    const GALGAS_lstring & in_mElementTypeName,
                                                    const GALGAS_luint & in_mDimension
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mArrayTypeName (in_mArrayTypeName),
mProperty_mElementTypeName (in_mElementTypeName),
mProperty_mDimension (in_mDimension) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_arrayDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST ;
}

void cPtr_arrayDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@arrayDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDimension.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_arrayDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayDeclarationAST (mProperty_mIsPredefined, mProperty_mArrayTypeName, mProperty_mElementTypeName, mProperty_mDimension COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@arrayDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayDeclarationAST ("arrayDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST result ;
  const GALGAS_arrayDeclarationAST * p = (const GALGAS_arrayDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_arrayDeclarationAST_2D_weak::objectCompare (const GALGAS_arrayDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak::GALGAS_arrayDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak & GALGAS_arrayDeclarationAST_2D_weak::operator = (const GALGAS_arrayDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak::GALGAS_arrayDeclarationAST_2D_weak (const GALGAS_arrayDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak GALGAS_arrayDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST GALGAS_arrayDeclarationAST_2D_weak::bang_arrayDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_arrayDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayDeclarationAST) ;
      result = GALGAS_arrayDeclarationAST ((cPtr_arrayDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@arrayDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayDeclarationAST_2D_weak ("arrayDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayDeclarationAST_2D_weak GALGAS_arrayDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayDeclarationAST_2D_weak result ;
  const GALGAS_arrayDeclarationAST_2D_weak * p = (const GALGAS_arrayDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @semanticTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_semanticTypeForGeneration::objectCompare (const GALGAS_semanticTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration::GALGAS_semanticTypeForGeneration (const cPtr_semanticTypeForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticTypeForGeneration::setter_setMSelfTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_semanticTypeForGeneration * p = (cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    p->mProperty_mSelfTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_semanticTypeForGeneration::readProperty_mSelfTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_semanticTypeForGeneration * p = (cPtr_semanticTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticTypeForGeneration) ;
    return p->mProperty_mSelfTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @semanticTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_semanticTypeForGeneration::cPtr_semanticTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mSelfTypeEntry (in_mSelfTypeEntry) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypeForGeneration ("semanticTypeForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration result ;
  const GALGAS_semanticTypeForGeneration * p = (const GALGAS_semanticTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticTypeForGeneration_2D_weak::objectCompare (const GALGAS_semanticTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak & GALGAS_semanticTypeForGeneration_2D_weak::operator = (const GALGAS_semanticTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak::GALGAS_semanticTypeForGeneration_2D_weak (const GALGAS_semanticTypeForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration GALGAS_semanticTypeForGeneration_2D_weak::bang_semanticTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticTypeForGeneration) ;
      result = GALGAS_semanticTypeForGeneration ((cPtr_semanticTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ("semanticTypeForGeneration-weak",
                                                          & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticTypeForGeneration_2D_weak GALGAS_semanticTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_semanticTypeForGeneration_2D_weak result ;
  const GALGAS_semanticTypeForGeneration_2D_weak * p = (const GALGAS_semanticTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolsetDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolsetDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetDeclarationAST * p = (const cPtr_boolsetDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mBoolsetTypeName.objectCompare (p->mProperty_mBoolsetTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolsetDeclarationAST::objectCompare (const GALGAS_boolsetDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolsetDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstringlist::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST::GALGAS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                            const GALGAS_lstring & inAttribute_mBoolsetTypeName,
                                                                            const GALGAS_lstringlist & inAttribute_mFlagList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mBoolsetTypeName.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetDeclarationAST (inAttribute_mIsPredefined, inAttribute_mBoolsetTypeName, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_boolsetDeclarationAST::readProperty_mBoolsetTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mBoolsetTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetDeclarationAST::readProperty_mFlagList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mFlagList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolsetDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mBoolsetTypeName,
                                                        const GALGAS_lstringlist & in_mFlagList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mBoolsetTypeName (in_mBoolsetTypeName),
mProperty_mFlagList (in_mFlagList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

void cPtr_boolsetDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@boolsetDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBoolsetTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_mIsPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST result ;
  const GALGAS_boolsetDeclarationAST * p = (const GALGAS_boolsetDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolsetDeclarationAST_2D_weak::objectCompare (const GALGAS_boolsetDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak::GALGAS_boolsetDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak & GALGAS_boolsetDeclarationAST_2D_weak::operator = (const GALGAS_boolsetDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak::GALGAS_boolsetDeclarationAST_2D_weak (const GALGAS_boolsetDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak GALGAS_boolsetDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST GALGAS_boolsetDeclarationAST_2D_weak::bang_boolsetDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetDeclarationAST) ;
      result = GALGAS_boolsetDeclarationAST ((cPtr_boolsetDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ("boolsetDeclarationAST-weak",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetDeclarationAST_2D_weak GALGAS_boolsetDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_boolsetDeclarationAST_2D_weak result ;
  const GALGAS_boolsetDeclarationAST_2D_weak * p = (const GALGAS_boolsetDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @boolsetTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_boolsetTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolsetTypeForGeneration * p = (const cPtr_boolsetTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFlagList.objectCompare (p->mProperty_mFlagList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_boolsetTypeForGeneration::objectCompare (const GALGAS_boolsetTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                           GALGAS_lstringlist::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration::GALGAS_boolsetTypeForGeneration (const cPtr_boolsetTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                  const GALGAS_lstringlist & inAttribute_mFlagList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mFlagList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolsetTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mFlagList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_boolsetTypeForGeneration::readProperty_mFlagList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_boolsetTypeForGeneration * p = (cPtr_boolsetTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetTypeForGeneration) ;
    return p->mProperty_mFlagList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @boolsetTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_boolsetTypeForGeneration::cPtr_boolsetTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                              const GALGAS_lstringlist & in_mFlagList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mFlagList (in_mFlagList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_boolsetTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

void cPtr_boolsetTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@boolsetTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_boolsetTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolsetTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mFlagList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration ("boolsetTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration result ;
  const GALGAS_boolsetTypeForGeneration * p = (const GALGAS_boolsetTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_boolsetTypeForGeneration_2D_weak::objectCompare (const GALGAS_boolsetTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak & GALGAS_boolsetTypeForGeneration_2D_weak::operator = (const GALGAS_boolsetTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak::GALGAS_boolsetTypeForGeneration_2D_weak (const GALGAS_boolsetTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration GALGAS_boolsetTypeForGeneration_2D_weak::bang_boolsetTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_boolsetTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolsetTypeForGeneration) ;
      result = GALGAS_boolsetTypeForGeneration ((cPtr_boolsetTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@boolsetTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ("boolsetTypeForGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boolsetTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boolsetTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolsetTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boolsetTypeForGeneration_2D_weak GALGAS_boolsetTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_boolsetTypeForGeneration_2D_weak result ;
  const GALGAS_boolsetTypeForGeneration_2D_weak * p = (const GALGAS_boolsetTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolsetTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @classDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_classDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReference.objectCompare (p->mProperty_mIsReference) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (p->mProperty_mClassTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassFeatureList.objectCompare (p->mProperty_mClassFeatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_classDeclarationAST::objectCompare (const GALGAS_classDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_classDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                        const GALGAS_bool & inAttribute_mIsAbstract,
                                                                        const GALGAS_bool & inAttribute_mIsReference,
                                                                        const GALGAS_lstring & inAttribute_mClassTypeName,
                                                                        const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                        const GALGAS_lstringlist & inAttribute_mClassFeatureList,
                                                                        const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsReference.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mClassFeatureList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclarationAST (inAttribute_mIsPredefined, inAttribute_mIsAbstract, inAttribute_mIsReference, inAttribute_mClassTypeName, inAttribute_mSuperClassName, inAttribute_mClassFeatureList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_mIsAbstract (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classDeclarationAST::readProperty_mIsReference (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::readProperty_mClassTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_classDeclarationAST::readProperty_mSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_classDeclarationAST::readProperty_mClassFeatureList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassFeatureList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_classDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @classDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_bool & in_mIsReference,
                                                    const GALGAS_lstring & in_mClassTypeName,
                                                    const GALGAS_lstring & in_mSuperClassName,
                                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsReference (in_mIsReference),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mClassFeatureList (in_mClassFeatureList),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@classDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassFeatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_mIsPredefined, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mClassFeatureList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@classDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  const GALGAS_classDeclarationAST * p = (const GALGAS_classDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classDeclarationAST_2D_weak::objectCompare (const GALGAS_classDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak::GALGAS_classDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak & GALGAS_classDeclarationAST_2D_weak::operator = (const GALGAS_classDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak::GALGAS_classDeclarationAST_2D_weak (const GALGAS_classDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak GALGAS_classDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_classDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST GALGAS_classDeclarationAST_2D_weak::bang_classDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_classDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classDeclarationAST) ;
      result = GALGAS_classDeclarationAST ((cPtr_classDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ("classDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classDeclarationAST_2D_weak GALGAS_classDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST_2D_weak result ;
  const GALGAS_classDeclarationAST_2D_weak * p = (const GALGAS_classDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @classTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_classTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classTypeForGeneration * p = (const cPtr_classTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsReference.objectCompare (p->mProperty_mIsReference) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClass.objectCompare (p->mProperty_mSuperClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllTypedAttributeList.objectCompare (p->mProperty_mAllTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCurrentTypedAttributeList.objectCompare (p->mProperty_mCurrentTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (p->mProperty_mGenerateHeaderInSeparateFile) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_classTypeForGeneration::objectCompare (const GALGAS_classTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_classTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                         GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                         GALGAS_bool::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration::GALGAS_classTypeForGeneration (const cPtr_classTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                              const GALGAS_bool & inAttribute_mIsAbstract,
                                                                              const GALGAS_bool & inAttribute_mIsReference,
                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSuperClass,
                                                                              const GALGAS_typedPropertyList & inAttribute_mAllTypedAttributeList,
                                                                              const GALGAS_typedPropertyList & inAttribute_mCurrentTypedAttributeList,
                                                                              const GALGAS_bool & inAttribute_mGenerateHeaderInSeparateFile
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsReference.isValid () && inAttribute_mSuperClass.isValid () && inAttribute_mAllTypedAttributeList.isValid () && inAttribute_mCurrentTypedAttributeList.isValid () && inAttribute_mGenerateHeaderInSeparateFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mIsAbstract, inAttribute_mIsReference, inAttribute_mSuperClass, inAttribute_mAllTypedAttributeList, inAttribute_mCurrentTypedAttributeList, inAttribute_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mIsAbstract (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mIsReference (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mIsReference ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_classTypeForGeneration::readProperty_mSuperClass (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mSuperClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_mAllTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mAllTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_classTypeForGeneration::readProperty_mCurrentTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mCurrentTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_classTypeForGeneration::readProperty_mGenerateHeaderInSeparateFile (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_classTypeForGeneration * p = (cPtr_classTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classTypeForGeneration) ;
    return p->mProperty_mGenerateHeaderInSeparateFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @classTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_classTypeForGeneration::cPtr_classTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                          const GALGAS_bool & in_mIsAbstract,
                                                          const GALGAS_bool & in_mIsReference,
                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mSuperClass,
                                                          const GALGAS_typedPropertyList & in_mAllTypedAttributeList,
                                                          const GALGAS_typedPropertyList & in_mCurrentTypedAttributeList,
                                                          const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsReference (in_mIsReference),
mProperty_mSuperClass (in_mSuperClass),
mProperty_mAllTypedAttributeList (in_mAllTypedAttributeList),
mProperty_mCurrentTypedAttributeList (in_mCurrentTypedAttributeList),
mProperty_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_classTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

void cPtr_classTypeForGeneration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@classTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsReference.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCurrentTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mIsAbstract, mProperty_mIsReference, mProperty_mSuperClass, mProperty_mAllTypedAttributeList, mProperty_mCurrentTypedAttributeList, mProperty_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@classTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classTypeForGeneration ("classTypeForGeneration",
                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration result ;
  const GALGAS_classTypeForGeneration * p = (const GALGAS_classTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_classTypeForGeneration_2D_weak::objectCompare (const GALGAS_classTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak & GALGAS_classTypeForGeneration_2D_weak::operator = (const GALGAS_classTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak::GALGAS_classTypeForGeneration_2D_weak (const GALGAS_classTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration GALGAS_classTypeForGeneration_2D_weak::bang_classTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_classTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classTypeForGeneration) ;
      result = GALGAS_classTypeForGeneration ((cPtr_classTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@classTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ("classTypeForGeneration-weak",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_classTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_classTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_classTypeForGeneration_2D_weak GALGAS_classTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_classTypeForGeneration_2D_weak result ;
  const GALGAS_classTypeForGeneration_2D_weak * p = (const GALGAS_classTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @weakReferenceDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_weakReferenceDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_weakReferenceDeclarationAST * p = (const cPtr_weakReferenceDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassTypeName.objectCompare (p->mProperty_mClassTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWeakReferenceTypeName.objectCompare (p->mProperty_mWeakReferenceTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperWeakReferenceTypeName.objectCompare (p->mProperty_mSuperWeakReferenceTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassFeatureList.objectCompare (p->mProperty_mClassFeatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_weakReferenceDeclarationAST::objectCompare (const GALGAS_weakReferenceDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_weakReferenceDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstringlist::constructor_emptyList (HERE),
                                                              GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST::GALGAS_weakReferenceDeclarationAST (const cPtr_weakReferenceDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                        const GALGAS_lstring & inAttribute_mClassTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mWeakReferenceTypeName,
                                                                                        const GALGAS_lstring & inAttribute_mSuperWeakReferenceTypeName,
                                                                                        const GALGAS_lstringlist & inAttribute_mClassFeatureList,
                                                                                        const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mClassTypeName.isValid () && inAttribute_mWeakReferenceTypeName.isValid () && inAttribute_mSuperWeakReferenceTypeName.isValid () && inAttribute_mClassFeatureList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_weakReferenceDeclarationAST (inAttribute_mIsPredefined, inAttribute_mClassTypeName, inAttribute_mWeakReferenceTypeName, inAttribute_mSuperWeakReferenceTypeName, inAttribute_mClassFeatureList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mClassTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mWeakReferenceTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mWeakReferenceTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_weakReferenceDeclarationAST::readProperty_mSuperWeakReferenceTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mSuperWeakReferenceTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_weakReferenceDeclarationAST::readProperty_mClassFeatureList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassFeatureList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_weakReferenceDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                                    const GALGAS_lstring & in_mClassTypeName,
                                                                    const GALGAS_lstring & in_mWeakReferenceTypeName,
                                                                    const GALGAS_lstring & in_mSuperWeakReferenceTypeName,
                                                                    const GALGAS_lstringlist & in_mClassFeatureList,
                                                                    const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mClassTypeName (in_mClassTypeName),
mProperty_mWeakReferenceTypeName (in_mWeakReferenceTypeName),
mProperty_mSuperWeakReferenceTypeName (in_mSuperWeakReferenceTypeName),
mProperty_mClassFeatureList (in_mClassFeatureList),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

void cPtr_weakReferenceDeclarationAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@weakReferenceDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassFeatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_weakReferenceDeclarationAST (mProperty_mIsPredefined, mProperty_mClassTypeName, mProperty_mWeakReferenceTypeName, mProperty_mSuperWeakReferenceTypeName, mProperty_mClassFeatureList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ("weakReferenceDeclarationAST",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST result ;
  const GALGAS_weakReferenceDeclarationAST * p = (const GALGAS_weakReferenceDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_weakReferenceDeclarationAST_2D_weak::objectCompare (const GALGAS_weakReferenceDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak::GALGAS_weakReferenceDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak & GALGAS_weakReferenceDeclarationAST_2D_weak::operator = (const GALGAS_weakReferenceDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak::GALGAS_weakReferenceDeclarationAST_2D_weak (const GALGAS_weakReferenceDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak GALGAS_weakReferenceDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST GALGAS_weakReferenceDeclarationAST_2D_weak::bang_weakReferenceDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_weakReferenceDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceDeclarationAST) ;
      result = GALGAS_weakReferenceDeclarationAST ((cPtr_weakReferenceDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ("weakReferenceDeclarationAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceDeclarationAST_2D_weak GALGAS_weakReferenceDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceDeclarationAST_2D_weak result ;
  const GALGAS_weakReferenceDeclarationAST_2D_weak * p = (const GALGAS_weakReferenceDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @weakReferenceTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_weakReferenceTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_weakReferenceTypeForGeneration * p = (const cPtr_weakReferenceTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReferenceClassType.objectCompare (p->mProperty_mReferenceClassType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClass.objectCompare (p->mProperty_mSuperClass) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAllTypedPropertyList.objectCompare (p->mProperty_mAllTypedPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerateHeaderInSeparateFile.objectCompare (p->mProperty_mGenerateHeaderInSeparateFile) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_weakReferenceTypeForGeneration::objectCompare (const GALGAS_weakReferenceTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_weakReferenceTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                 GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                 GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                 GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                                 GALGAS_bool::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration::GALGAS_weakReferenceTypeForGeneration (const cPtr_weakReferenceTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReferenceClassType,
                                                                                              const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSuperClass,
                                                                                              const GALGAS_typedPropertyList & inAttribute_mAllTypedPropertyList,
                                                                                              const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                              const GALGAS_bool & inAttribute_mGenerateHeaderInSeparateFile
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mReferenceClassType.isValid () && inAttribute_mSuperClass.isValid () && inAttribute_mAllTypedPropertyList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mGenerateHeaderInSeparateFile.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_weakReferenceTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mReferenceClassType, inAttribute_mSuperClass, inAttribute_mAllTypedPropertyList, inAttribute_mTypedAttributeList, inAttribute_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_weakReferenceTypeForGeneration::readProperty_mReferenceClassType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mReferenceClassType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_weakReferenceTypeForGeneration::readProperty_mSuperClass (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mSuperClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::readProperty_mAllTypedPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mAllTypedPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_weakReferenceTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_weakReferenceTypeForGeneration::readProperty_mGenerateHeaderInSeparateFile (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_weakReferenceTypeForGeneration * p = (cPtr_weakReferenceTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceTypeForGeneration) ;
    return p->mProperty_mGenerateHeaderInSeparateFile ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_weakReferenceTypeForGeneration::cPtr_weakReferenceTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mReferenceClassType,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & in_mSuperClass,
                                                                          const GALGAS_typedPropertyList & in_mAllTypedPropertyList,
                                                                          const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                          const GALGAS_bool & in_mGenerateHeaderInSeparateFile
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mReferenceClassType (in_mReferenceClassType),
mProperty_mSuperClass (in_mSuperClass),
mProperty_mAllTypedPropertyList (in_mAllTypedPropertyList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mGenerateHeaderInSeparateFile (in_mGenerateHeaderInSeparateFile) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_weakReferenceTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

void cPtr_weakReferenceTypeForGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@weakReferenceTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReferenceClassType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperClass.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAllTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_weakReferenceTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_weakReferenceTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mReferenceClassType, mProperty_mSuperClass, mProperty_mAllTypedPropertyList, mProperty_mTypedAttributeList, mProperty_mGenerateHeaderInSeparateFile COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ("weakReferenceTypeForGeneration",
                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration result ;
  const GALGAS_weakReferenceTypeForGeneration * p = (const GALGAS_weakReferenceTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_weakReferenceTypeForGeneration_2D_weak::objectCompare (const GALGAS_weakReferenceTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak & GALGAS_weakReferenceTypeForGeneration_2D_weak::operator = (const GALGAS_weakReferenceTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak::GALGAS_weakReferenceTypeForGeneration_2D_weak (const GALGAS_weakReferenceTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration GALGAS_weakReferenceTypeForGeneration_2D_weak::bang_weakReferenceTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_weakReferenceTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_weakReferenceTypeForGeneration) ;
      result = GALGAS_weakReferenceTypeForGeneration ((cPtr_weakReferenceTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@weakReferenceTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ("weakReferenceTypeForGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_weakReferenceTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_weakReferenceTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_weakReferenceTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_weakReferenceTypeForGeneration_2D_weak GALGAS_weakReferenceTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_weakReferenceTypeForGeneration_2D_weak result ;
  const GALGAS_weakReferenceTypeForGeneration_2D_weak * p = (const GALGAS_weakReferenceTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_weakReferenceTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumDeclarationAST * p = (const cPtr_enumDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumTypeName.objectCompare (p->mProperty_mEnumTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (p->mProperty_mConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultConstantName.objectCompare (p->mProperty_mDefaultConstantName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumDeclarationAST::objectCompare (const GALGAS_enumDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_enumConstantList::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST::GALGAS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mEnumTypeName,
                                                                      const GALGAS_enumConstantList & inAttribute_mConstantList,
                                                                      const GALGAS_lstring & inAttribute_mDefaultConstantName
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mEnumTypeName.isValid () && inAttribute_mConstantList.isValid () && inAttribute_mDefaultConstantName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumDeclarationAST (inAttribute_mIsPredefined, inAttribute_mEnumTypeName, inAttribute_mConstantList, inAttribute_mDefaultConstantName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST::readProperty_mEnumTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mEnumTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantList GALGAS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumConstantList () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mConstantList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_enumDeclarationAST::readProperty_mDefaultConstantName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mDefaultConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mEnumTypeName,
                                                  const GALGAS_enumConstantList & in_mConstantList,
                                                  const GALGAS_lstring & in_mDefaultConstantName
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mEnumTypeName (in_mEnumTypeName),
mProperty_mConstantList (in_mConstantList),
mProperty_mDefaultConstantName (in_mDefaultConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@enumDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultConstantName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_mIsPredefined, mProperty_mEnumTypeName, mProperty_mConstantList, mProperty_mDefaultConstantName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST result ;
  const GALGAS_enumDeclarationAST * p = (const GALGAS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumDeclarationAST_2D_weak::objectCompare (const GALGAS_enumDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak::GALGAS_enumDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak & GALGAS_enumDeclarationAST_2D_weak::operator = (const GALGAS_enumDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak::GALGAS_enumDeclarationAST_2D_weak (const GALGAS_enumDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak GALGAS_enumDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST GALGAS_enumDeclarationAST_2D_weak::bang_enumDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumDeclarationAST) ;
      result = GALGAS_enumDeclarationAST ((cPtr_enumDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ("enumDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumDeclarationAST_2D_weak GALGAS_enumDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclarationAST_2D_weak result ;
  const GALGAS_enumDeclarationAST_2D_weak * p = (const GALGAS_enumDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumTypeForGeneration * p = (const cPtr_enumTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConstantList.objectCompare (p->mProperty_mConstantList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumTypeForGeneration::objectCompare (const GALGAS_enumTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                        GALGAS_enumConstantListForGeneration::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration::GALGAS_enumTypeForGeneration (const cPtr_enumTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                            const GALGAS_enumConstantListForGeneration & inAttribute_mConstantList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mConstantList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mConstantList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumConstantListForGeneration GALGAS_enumTypeForGeneration::readProperty_mConstantList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumConstantListForGeneration () ;
  }else{
    cPtr_enumTypeForGeneration * p = (cPtr_enumTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumTypeForGeneration) ;
    return p->mProperty_mConstantList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumTypeForGeneration::cPtr_enumTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                        const GALGAS_enumConstantListForGeneration & in_mConstantList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mConstantList (in_mConstantList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

void cPtr_enumTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@enumTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mConstantList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeForGeneration ("enumTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration result ;
  const GALGAS_enumTypeForGeneration * p = (const GALGAS_enumTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumTypeForGeneration_2D_weak::objectCompare (const GALGAS_enumTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak::GALGAS_enumTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak & GALGAS_enumTypeForGeneration_2D_weak::operator = (const GALGAS_enumTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak::GALGAS_enumTypeForGeneration_2D_weak (const GALGAS_enumTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak GALGAS_enumTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration GALGAS_enumTypeForGeneration_2D_weak::bang_enumTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumTypeForGeneration) ;
      result = GALGAS_enumTypeForGeneration ((cPtr_enumTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumTypeForGeneration_2D_weak ("enumTypeForGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumTypeForGeneration_2D_weak GALGAS_enumTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_enumTypeForGeneration_2D_weak result ;
  const GALGAS_enumTypeForGeneration_2D_weak * p = (const GALGAS_enumTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @externTypeDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_externTypeDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externTypeDeclarationAST * p = (const cPtr_externTypeDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeName.objectCompare (p->mProperty_mExternTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppPreDeclarationCode.objectCompare (p->mProperty_mCppPreDeclarationCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppClassCode.objectCompare (p->mProperty_mCppClassCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeConstructorList.objectCompare (p->mProperty_mExternTypeConstructorList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeGetterList.objectCompare (p->mProperty_mExternTypeGetterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeSetterList.objectCompare (p->mProperty_mExternTypeSetterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeMethodList.objectCompare (p->mProperty_mExternTypeMethodList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_externTypeDeclarationAST::objectCompare (const GALGAS_externTypeDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_externTypeDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_externTypeConstructorList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeGetterList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeSetterList::constructor_emptyList (HERE),
                                                           GALGAS_externTypeMethodList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST::GALGAS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                  const GALGAS_lstring & inAttribute_mExternTypeName,
                                                                                  const GALGAS_string & inAttribute_mCppPreDeclarationCode,
                                                                                  const GALGAS_string & inAttribute_mCppClassCode,
                                                                                  const GALGAS_externTypeConstructorList & inAttribute_mExternTypeConstructorList,
                                                                                  const GALGAS_externTypeGetterList & inAttribute_mExternTypeGetterList,
                                                                                  const GALGAS_externTypeSetterList & inAttribute_mExternTypeSetterList,
                                                                                  const GALGAS_externTypeMethodList & inAttribute_mExternTypeMethodList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mExternTypeName.isValid () && inAttribute_mCppPreDeclarationCode.isValid () && inAttribute_mCppClassCode.isValid () && inAttribute_mExternTypeConstructorList.isValid () && inAttribute_mExternTypeGetterList.isValid () && inAttribute_mExternTypeSetterList.isValid () && inAttribute_mExternTypeMethodList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationAST (inAttribute_mIsPredefined, inAttribute_mExternTypeName, inAttribute_mCppPreDeclarationCode, inAttribute_mCppClassCode, inAttribute_mExternTypeConstructorList, inAttribute_mExternTypeGetterList, inAttribute_mExternTypeSetterList, inAttribute_mExternTypeMethodList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_externTypeDeclarationAST::readProperty_mExternTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationAST::readProperty_mCppPreDeclarationCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationAST::readProperty_mCppClassCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppClassCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeConstructorList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeConstructorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeConstructorList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeConstructorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeGetterList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeGetterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeGetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeGetterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeSetterList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeSetterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeSetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeSetterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeMethodList GALGAS_externTypeDeclarationAST::readProperty_mExternTypeMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externTypeMethodList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_lstring & in_mExternTypeName,
                                                              const GALGAS_string & in_mCppPreDeclarationCode,
                                                              const GALGAS_string & in_mCppClassCode,
                                                              const GALGAS_externTypeConstructorList & in_mExternTypeConstructorList,
                                                              const GALGAS_externTypeGetterList & in_mExternTypeGetterList,
                                                              const GALGAS_externTypeSetterList & in_mExternTypeSetterList,
                                                              const GALGAS_externTypeMethodList & in_mExternTypeMethodList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mExternTypeName (in_mExternTypeName),
mProperty_mCppPreDeclarationCode (in_mCppPreDeclarationCode),
mProperty_mCppClassCode (in_mCppClassCode),
mProperty_mExternTypeConstructorList (in_mExternTypeConstructorList),
mProperty_mExternTypeGetterList (in_mExternTypeGetterList),
mProperty_mExternTypeSetterList (in_mExternTypeSetterList),
mProperty_mExternTypeMethodList (in_mExternTypeMethodList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

void cPtr_externTypeDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@externTypeDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeConstructorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeGetterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeSetterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeMethodList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_mIsPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_mExternTypeConstructorList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeDeclarationAST_2D_weak::objectCompare (const GALGAS_externTypeDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak::GALGAS_externTypeDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak & GALGAS_externTypeDeclarationAST_2D_weak::operator = (const GALGAS_externTypeDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak::GALGAS_externTypeDeclarationAST_2D_weak (const GALGAS_externTypeDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak GALGAS_externTypeDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST GALGAS_externTypeDeclarationAST_2D_weak::bang_externTypeDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationAST) ;
      result = GALGAS_externTypeDeclarationAST ((cPtr_externTypeDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ("externTypeDeclarationAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationAST_2D_weak GALGAS_externTypeDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationAST_2D_weak result ;
  const GALGAS_externTypeDeclarationAST_2D_weak * p = (const GALGAS_externTypeDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @externTypeDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_externTypeDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_externTypeDeclarationForGeneration * p = (const cPtr_externTypeDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternTypeName.objectCompare (p->mProperty_mExternTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppPreDeclarationCode.objectCompare (p->mProperty_mCppPreDeclarationCode) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppClassCode.objectCompare (p->mProperty_mCppClassCode) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_externTypeDeclarationForGeneration::objectCompare (const GALGAS_externTypeDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE),
                                                                     GALGAS_string::constructor_default (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration::GALGAS_externTypeDeclarationForGeneration (const cPtr_externTypeDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                                      const GALGAS_string & inAttribute_mExternTypeName,
                                                                                                      const GALGAS_string & inAttribute_mCppPreDeclarationCode,
                                                                                                      const GALGAS_string & inAttribute_mCppClassCode
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mExternTypeName.isValid () && inAttribute_mCppPreDeclarationCode.isValid () && inAttribute_mCppClassCode.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_externTypeDeclarationForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mExternTypeName, inAttribute_mCppPreDeclarationCode, inAttribute_mCppClassCode COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mExternTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mExternTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mCppPreDeclarationCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_externTypeDeclarationForGeneration::readProperty_mCppClassCode (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_externTypeDeclarationForGeneration * p = (cPtr_externTypeDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationForGeneration) ;
    return p->mProperty_mCppClassCode ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationForGeneration::cPtr_externTypeDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                                  const GALGAS_string & in_mExternTypeName,
                                                                                  const GALGAS_string & in_mCppPreDeclarationCode,
                                                                                  const GALGAS_string & in_mCppClassCode
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mExternTypeName (in_mExternTypeName),
mProperty_mCppPreDeclarationCode (in_mCppPreDeclarationCode),
mProperty_mCppClassCode (in_mCppClassCode) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_externTypeDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

void cPtr_externTypeDeclarationForGeneration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@externTypeDeclarationForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_externTypeDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_externTypeDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ("externTypeDeclarationForGeneration",
                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration result ;
  const GALGAS_externTypeDeclarationForGeneration * p = (const GALGAS_externTypeDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_externTypeDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_externTypeDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak::GALGAS_externTypeDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak & GALGAS_externTypeDeclarationForGeneration_2D_weak::operator = (const GALGAS_externTypeDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak::GALGAS_externTypeDeclarationForGeneration_2D_weak (const GALGAS_externTypeDeclarationForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak GALGAS_externTypeDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration GALGAS_externTypeDeclarationForGeneration_2D_weak::bang_externTypeDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externTypeDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externTypeDeclarationForGeneration) ;
      result = GALGAS_externTypeDeclarationForGeneration ((cPtr_externTypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@externTypeDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2D_weak ("externTypeDeclarationForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externTypeDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externTypeDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externTypeDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externTypeDeclarationForGeneration_2D_weak GALGAS_externTypeDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externTypeDeclarationForGeneration_2D_weak result ;
  const GALGAS_externTypeDeclarationForGeneration_2D_weak * p = (const GALGAS_externTypeDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externTypeDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @graphDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_graphDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphDeclarationAST * p = (const cPtr_graphDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGraphTypeName.objectCompare (p->mProperty_mGraphTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeName.objectCompare (p->mProperty_mAssociatedListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertModifierList.objectCompare (p->mProperty_mInsertModifierList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_graphDeclarationAST::objectCompare (const GALGAS_graphDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_graphInsertModifierList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST::GALGAS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationAST::setter_setMGraphTypeName (GALGAS_lstring inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mGraphTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationAST::setter_setMAssociatedListTypeName (GALGAS_lstring inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mAssociatedListTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationAST::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    p->mProperty_mInsertModifierList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphDeclarationAST::readProperty_mGraphTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mGraphTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_graphDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                    const GALGAS_lstring & in_mGraphTypeName,
                                                    const GALGAS_lstring & in_mAssociatedListTypeName,
                                                    const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mGraphTypeName (in_mGraphTypeName),
mProperty_mAssociatedListTypeName (in_mAssociatedListTypeName),
mProperty_mInsertModifierList (in_mInsertModifierList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

void cPtr_graphDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@graphDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGraphTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_mIsPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@graphDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphDeclarationAST_2D_weak::objectCompare (const GALGAS_graphDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak::GALGAS_graphDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak & GALGAS_graphDeclarationAST_2D_weak::operator = (const GALGAS_graphDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak::GALGAS_graphDeclarationAST_2D_weak (const GALGAS_graphDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak GALGAS_graphDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_graphDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST GALGAS_graphDeclarationAST_2D_weak::bang_graphDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphDeclarationAST) ;
      result = GALGAS_graphDeclarationAST ((cPtr_graphDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@graphDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationAST_2D_weak ("graphDeclarationAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationAST_2D_weak GALGAS_graphDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationAST_2D_weak result ;
  const GALGAS_graphDeclarationAST_2D_weak * p = (const GALGAS_graphDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @graphDeclarationForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_graphDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_graphDeclarationForGeneration * p = (const cPtr_graphDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeEntry.objectCompare (p->mProperty_mAssociatedListTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListElementTypeEntry.objectCompare (p->mProperty_mAssociatedListElementTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertModifierList.objectCompare (p->mProperty_mInsertModifierList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_graphDeclarationForGeneration::objectCompare (const GALGAS_graphDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_graphDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                GALGAS_graphInsertModifierList::constructor_emptyList (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration::GALGAS_graphDeclarationForGeneration (const cPtr_graphDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                            const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mAssociatedListTypeEntry,
                                                                                            const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mAssociatedListElementTypeEntry,
                                                                                            const GALGAS_graphInsertModifierList & inAttribute_mInsertModifierList
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mAssociatedListTypeEntry.isValid () && inAttribute_mAssociatedListElementTypeEntry.isValid () && inAttribute_mInsertModifierList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_graphDeclarationForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mAssociatedListTypeEntry, inAttribute_mAssociatedListElementTypeEntry, inAttribute_mInsertModifierList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationForGeneration::setter_setMAssociatedListTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mAssociatedListTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationForGeneration::setter_setMAssociatedListElementTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mAssociatedListElementTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphDeclarationForGeneration::setter_setMInsertModifierList (GALGAS_graphInsertModifierList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    p->mProperty_mInsertModifierList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_graphDeclarationForGeneration::readProperty_mAssociatedListTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_graphDeclarationForGeneration::readProperty_mAssociatedListElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mAssociatedListElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphInsertModifierList GALGAS_graphDeclarationForGeneration::readProperty_mInsertModifierList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationForGeneration * p = (cPtr_graphDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationForGeneration) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_graphDeclarationForGeneration::cPtr_graphDeclarationForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListTypeEntry,
                                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListElementTypeEntry,
                                                                        const GALGAS_graphInsertModifierList & in_mInsertModifierList
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mAssociatedListTypeEntry (in_mAssociatedListTypeEntry),
mProperty_mAssociatedListElementTypeEntry (in_mAssociatedListElementTypeEntry),
mProperty_mInsertModifierList (in_mInsertModifierList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_graphDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

void cPtr_graphDeclarationForGeneration::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@graphDeclarationForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_graphDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_graphDeclarationForGeneration (mProperty_mSelfTypeEntry, mProperty_mAssociatedListTypeEntry, mProperty_mAssociatedListElementTypeEntry, mProperty_mInsertModifierList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@graphDeclarationForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationForGeneration ("graphDeclarationForGeneration",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration result ;
  const GALGAS_graphDeclarationForGeneration * p = (const GALGAS_graphDeclarationForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_graphDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak::GALGAS_graphDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak & GALGAS_graphDeclarationForGeneration_2D_weak::operator = (const GALGAS_graphDeclarationForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak::GALGAS_graphDeclarationForGeneration_2D_weak (const GALGAS_graphDeclarationForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak GALGAS_graphDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration GALGAS_graphDeclarationForGeneration_2D_weak::bang_graphDeclarationForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_graphDeclarationForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_graphDeclarationForGeneration) ;
      result = GALGAS_graphDeclarationForGeneration ((cPtr_graphDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@graphDeclarationForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2D_weak ("graphDeclarationForGeneration-weak",
                                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphDeclarationForGeneration_2D_weak GALGAS_graphDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_graphDeclarationForGeneration_2D_weak result ;
  const GALGAS_graphDeclarationForGeneration_2D_weak * p = (const GALGAS_graphDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @listDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_listDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listDeclarationAST * p = (const cPtr_listDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListTypeName.objectCompare (p->mProperty_mListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listDeclarationAST::objectCompare (const GALGAS_listDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST::GALGAS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mListTypeName,
                                                                      const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mListTypeName.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listDeclarationAST (inAttribute_mIsPredefined, inAttribute_mListTypeName, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_listDeclarationAST::readProperty_mListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_listDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mListTypeName,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mListTypeName (in_mListTypeName),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

void cPtr_listDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@listDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_mIsPredefined, mProperty_mListTypeName, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listDeclarationAST_2D_weak::objectCompare (const GALGAS_listDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak::GALGAS_listDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak & GALGAS_listDeclarationAST_2D_weak::operator = (const GALGAS_listDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak::GALGAS_listDeclarationAST_2D_weak (const GALGAS_listDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak GALGAS_listDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST GALGAS_listDeclarationAST_2D_weak::bang_listDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listDeclarationAST) ;
      result = GALGAS_listDeclarationAST ((cPtr_listDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@listDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listDeclarationAST_2D_weak ("listDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listDeclarationAST_2D_weak GALGAS_listDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listDeclarationAST_2D_weak result ;
  const GALGAS_listDeclarationAST_2D_weak * p = (const GALGAS_listDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @listTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_listTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listTypeForGeneration * p = (const cPtr_listTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListElementTypeIndex.objectCompare (p->mProperty_mListElementTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listTypeForGeneration::objectCompare (const GALGAS_listTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_listTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                        GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                        GALGAS_typedPropertyList::constructor_emptyList (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration::GALGAS_listTypeForGeneration (const cPtr_listTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                            const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mListElementTypeIndex,
                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_listTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_listTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_listTypeForGeneration * p = (cPtr_listTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listTypeForGeneration::cPtr_listTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mListElementTypeIndex,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mListElementTypeIndex (in_mListElementTypeIndex),
mProperty_mTypedAttributeList (in_mTypedAttributeList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

void cPtr_listTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listTypeForGeneration ("listTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration result ;
  const GALGAS_listTypeForGeneration * p = (const GALGAS_listTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listTypeForGeneration_2D_weak::objectCompare (const GALGAS_listTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak::GALGAS_listTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak & GALGAS_listTypeForGeneration_2D_weak::operator = (const GALGAS_listTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak::GALGAS_listTypeForGeneration_2D_weak (const GALGAS_listTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak GALGAS_listTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration GALGAS_listTypeForGeneration_2D_weak::bang_listTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listTypeForGeneration) ;
      result = GALGAS_listTypeForGeneration ((cPtr_listTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@listTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listTypeForGeneration_2D_weak ("listTypeForGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listTypeForGeneration_2D_weak GALGAS_listTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listTypeForGeneration_2D_weak result ;
  const GALGAS_listTypeForGeneration_2D_weak * p = (const GALGAS_listTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @listmapDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_listmapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapDeclarationAST * p = (const cPtr_listmapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListmapTypeName.objectCompare (p->mProperty_mListmapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeName.objectCompare (p->mProperty_mAssociatedListTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listmapDeclarationAST::objectCompare (const GALGAS_listmapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST::GALGAS_listmapDeclarationAST (const cPtr_listmapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_listmapDeclarationAST::readProperty_mListmapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_listmapDeclarationAST * p = (cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    return p->mProperty_mListmapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_listmapDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_listmapDeclarationAST * p = (cPtr_listmapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listmapDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listmapDeclarationAST::cPtr_listmapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                        const GALGAS_lstring & in_mListmapTypeName,
                                                        const GALGAS_lstring & in_mAssociatedListTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mListmapTypeName (in_mListmapTypeName),
mProperty_mAssociatedListTypeName (in_mAssociatedListTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listmapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

void cPtr_listmapDeclarationAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@listmapDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListmapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listmapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapDeclarationAST (mProperty_mIsPredefined, mProperty_mListmapTypeName, mProperty_mAssociatedListTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listmapDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapDeclarationAST ("listmapDeclarationAST",
                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listmapDeclarationAST_2D_weak::objectCompare (const GALGAS_listmapDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak::GALGAS_listmapDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak & GALGAS_listmapDeclarationAST_2D_weak::operator = (const GALGAS_listmapDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak::GALGAS_listmapDeclarationAST_2D_weak (const GALGAS_listmapDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak GALGAS_listmapDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST GALGAS_listmapDeclarationAST_2D_weak::bang_listmapDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listmapDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listmapDeclarationAST) ;
      result = GALGAS_listmapDeclarationAST ((cPtr_listmapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@listmapDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapDeclarationAST_2D_weak ("listmapDeclarationAST-weak",
                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapDeclarationAST_2D_weak GALGAS_listmapDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_listmapDeclarationAST_2D_weak result ;
  const GALGAS_listmapDeclarationAST_2D_weak * p = (const GALGAS_listmapDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @listmapTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_listmapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_listmapTypeForGeneration * p = (const cPtr_listmapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypeIndex.objectCompare (p->mProperty_mAssociatedListTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListTypedAttributeList.objectCompare (p->mProperty_mAssociatedListTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedListMapElementTypeIndex.objectCompare (p->mProperty_mAssociatedListMapElementTypeIndex) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_listmapTypeForGeneration::objectCompare (const GALGAS_listmapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                           GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                           GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                           GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration::GALGAS_listmapTypeForGeneration (const cPtr_listmapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listmapTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mAssociatedListTypeIndex,
                                                                                  const GALGAS_typedPropertyList & inAttribute_mAssociatedListTypedAttributeList,
                                                                                  const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mAssociatedListMapElementTypeIndex
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mAssociatedListTypeIndex.isValid () && inAttribute_mAssociatedListTypedAttributeList.isValid () && inAttribute_mAssociatedListMapElementTypeIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_listmapTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mAssociatedListTypeIndex, inAttribute_mAssociatedListTypedAttributeList, inAttribute_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_listmapTypeForGeneration::readProperty_mAssociatedListTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    return p->mProperty_mAssociatedListTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_listmapTypeForGeneration::readProperty_mAssociatedListTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    return p->mProperty_mAssociatedListTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_listmapTypeForGeneration::readProperty_mAssociatedListMapElementTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_listmapTypeForGeneration * p = (cPtr_listmapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listmapTypeForGeneration) ;
    return p->mProperty_mAssociatedListMapElementTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @listmapTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_listmapTypeForGeneration::cPtr_listmapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                              const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListTypeIndex,
                                                              const GALGAS_typedPropertyList & in_mAssociatedListTypedAttributeList,
                                                              const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedListMapElementTypeIndex
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mAssociatedListTypeIndex (in_mAssociatedListTypeIndex),
mProperty_mAssociatedListTypedAttributeList (in_mAssociatedListTypedAttributeList),
mProperty_mAssociatedListMapElementTypeIndex (in_mAssociatedListMapElementTypeIndex) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_listmapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

void cPtr_listmapTypeForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@listmapTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedListMapElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_listmapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_listmapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mAssociatedListTypeIndex, mProperty_mAssociatedListTypedAttributeList, mProperty_mAssociatedListMapElementTypeIndex COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@listmapTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapTypeForGeneration ("listmapTypeForGeneration",
                                                 & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration result ;
  const GALGAS_listmapTypeForGeneration * p = (const GALGAS_listmapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_listmapTypeForGeneration_2D_weak::objectCompare (const GALGAS_listmapTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak::GALGAS_listmapTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak & GALGAS_listmapTypeForGeneration_2D_weak::operator = (const GALGAS_listmapTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak::GALGAS_listmapTypeForGeneration_2D_weak (const GALGAS_listmapTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak GALGAS_listmapTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration GALGAS_listmapTypeForGeneration_2D_weak::bang_listmapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_listmapTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_listmapTypeForGeneration) ;
      result = GALGAS_listmapTypeForGeneration ((cPtr_listmapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@listmapTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_listmapTypeForGeneration_2D_weak ("listmapTypeForGeneration-weak",
                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listmapTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listmapTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listmapTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listmapTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_listmapTypeForGeneration_2D_weak GALGAS_listmapTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_listmapTypeForGeneration_2D_weak result ;
  const GALGAS_listmapTypeForGeneration_2D_weak * p = (const GALGAS_listmapTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_listmapTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listmapTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dictDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dictDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dictDeclarationAST * p = (const cPtr_dictDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDictTypeName.objectCompare (p->mProperty_mDictTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyTypeName.objectCompare (p->mProperty_mKeyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dictDeclarationAST::objectCompare (const GALGAS_dictDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_dictDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE),
                                                     GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST::GALGAS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mDictTypeName,
                                                                      const GALGAS_lstring & inAttribute_mKeyTypeName,
                                                                      const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                      const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mDictTypeName.isValid () && inAttribute_mKeyTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dictDeclarationAST (inAttribute_mIsPredefined, inAttribute_mDictTypeName, inAttribute_mKeyTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictDeclarationAST::readProperty_mDictTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mDictTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictDeclarationAST::readProperty_mKeyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_dictDeclarationAST::readProperty_mAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_dictDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dictDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mDictTypeName,
                                                  const GALGAS_lstring & in_mKeyTypeName,
                                                  const GALGAS_lstringlist & in_mAttributeList,
                                                  const GALGAS_propertyInCollectionListAST & in_mPropertyList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mDictTypeName (in_mDictTypeName),
mProperty_mKeyTypeName (in_mKeyTypeName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mPropertyList (in_mPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dictDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

void cPtr_dictDeclarationAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@dictDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_mIsPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mAttributeList, mProperty_mPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dictDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST result ;
  const GALGAS_dictDeclarationAST * p = (const GALGAS_dictDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dictDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dictDeclarationAST_2D_weak::objectCompare (const GALGAS_dictDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak::GALGAS_dictDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak & GALGAS_dictDeclarationAST_2D_weak::operator = (const GALGAS_dictDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak::GALGAS_dictDeclarationAST_2D_weak (const GALGAS_dictDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak GALGAS_dictDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dictDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST GALGAS_dictDeclarationAST_2D_weak::bang_dictDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dictDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictDeclarationAST) ;
      result = GALGAS_dictDeclarationAST ((cPtr_dictDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dictDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictDeclarationAST_2D_weak ("dictDeclarationAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictDeclarationAST_2D_weak GALGAS_dictDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dictDeclarationAST_2D_weak result ;
  const GALGAS_dictDeclarationAST_2D_weak * p = (const GALGAS_dictDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dictDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dictTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dictTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dictTypeForGeneration * p = (const cPtr_dictTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeEntry.objectCompare (p->mProperty_mElementTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDictTypeName.objectCompare (p->mProperty_mDictTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKeyTypeName.objectCompare (p->mProperty_mKeyTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dictTypeForGeneration::objectCompare (const GALGAS_dictTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                        GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                        GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration::GALGAS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                            const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mElementTypeEntry,
                                                                            const GALGAS_lstring & inAttribute_mDictTypeName,
                                                                            const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                            const GALGAS_lstring & inAttribute_mKeyTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mElementTypeEntry.isValid () && inAttribute_mDictTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mKeyTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dictTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mElementTypeEntry, inAttribute_mDictTypeName, inAttribute_mTypedAttributeList, inAttribute_mKeyTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_dictTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictTypeForGeneration::readProperty_mDictTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mDictTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_dictTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_dictTypeForGeneration::readProperty_mKeyTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dictTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                        const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeEntry,
                                                        const GALGAS_lstring & in_mDictTypeName,
                                                        const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                        const GALGAS_lstring & in_mKeyTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (in_mElementTypeEntry),
mProperty_mDictTypeName (in_mDictTypeName),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mKeyTypeName (in_mKeyTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

void cPtr_dictTypeForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@dictTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dictTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dictTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                              & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration result ;
  const GALGAS_dictTypeForGeneration * p = (const GALGAS_dictTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dictTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dictTypeForGeneration_2D_weak::objectCompare (const GALGAS_dictTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak::GALGAS_dictTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak & GALGAS_dictTypeForGeneration_2D_weak::operator = (const GALGAS_dictTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak::GALGAS_dictTypeForGeneration_2D_weak (const GALGAS_dictTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak GALGAS_dictTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration GALGAS_dictTypeForGeneration_2D_weak::bang_dictTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dictTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dictTypeForGeneration) ;
      result = GALGAS_dictTypeForGeneration ((cPtr_dictTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dictTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dictTypeForGeneration_2D_weak ("dictTypeForGeneration-weak",
                                                      & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dictTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dictTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dictTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dictTypeForGeneration_2D_weak GALGAS_dictTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_dictTypeForGeneration_2D_weak result ;
  const GALGAS_dictTypeForGeneration_2D_weak * p = (const GALGAS_dictTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dictTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @mapDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_mapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapDeclarationAST * p = (const cPtr_mapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapTypeName.objectCompare (p->mProperty_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRemoveMethodList.objectCompare (p->mProperty_mRemoveMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertOrReplaceDeclarationListAST.objectCompare (p->mProperty_mInsertOrReplaceDeclarationListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_mapDeclarationAST::objectCompare (const GALGAS_mapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST::GALGAS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapDeclarationAST::setter_setMMapTypeName (GALGAS_lstring inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mMapTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapDeclarationAST::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapDeclarationAST::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapDeclarationAST::setter_setMRemoveMethodList (GALGAS_mapRemoveMethodListAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mRemoveMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapDeclarationAST::setter_setMInsertOrReplaceDeclarationListAST (GALGAS_insertOrReplaceDeclarationListAST inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    p->mProperty_mInsertOrReplaceDeclarationListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_mapDeclarationAST::readProperty_mAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_mapDeclarationAST::readProperty_mInsertMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapDeclarationAST::readProperty_mRemoveMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapRemoveMethodListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertOrReplaceDeclarationListAST GALGAS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertOrReplaceDeclarationListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @mapDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

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
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mRemoveMethodList (in_mRemoveMethodList),
mProperty_mInsertOrReplaceDeclarationListAST (in_mInsertOrReplaceDeclarationListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@mapDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_mIsPredefined, mProperty_mMapTypeName, mProperty_mAttributeList, mProperty_mPropertyList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mInsertOrReplaceDeclarationListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@mapDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapDeclarationAST_2D_weak::objectCompare (const GALGAS_mapDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak::GALGAS_mapDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak & GALGAS_mapDeclarationAST_2D_weak::operator = (const GALGAS_mapDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak::GALGAS_mapDeclarationAST_2D_weak (const GALGAS_mapDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak GALGAS_mapDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_mapDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST GALGAS_mapDeclarationAST_2D_weak::bang_mapDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapDeclarationAST) ;
      result = GALGAS_mapDeclarationAST ((cPtr_mapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapDeclarationAST_2D_weak ("mapDeclarationAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapDeclarationAST_2D_weak GALGAS_mapDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapDeclarationAST_2D_weak result ;
  const GALGAS_mapDeclarationAST_2D_weak * p = (const GALGAS_mapDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @mapTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_mapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapTypeForGeneration * p = (const cPtr_mapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeEntry.objectCompare (p->mProperty_mElementTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapTypeName.objectCompare (p->mProperty_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRemoveMethodList.objectCompare (p->mProperty_mRemoveMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasInsertOrReplaceModifier.objectCompare (p->mProperty_mHasInsertOrReplaceModifier) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActivateSuggestions.objectCompare (p->mProperty_mActivateSuggestions) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_mapTypeForGeneration::objectCompare (const GALGAS_mapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_mapRemoveMethodListAST::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration::GALGAS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mElementTypeEntry,
                                                                          const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                          const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                          const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                          const GALGAS_mapRemoveMethodListAST & inAttribute_mRemoveMethodList,
                                                                          const GALGAS_bool & inAttribute_mHasInsertOrReplaceModifier,
                                                                          const GALGAS_bool & inAttribute_mActivateSuggestions
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mElementTypeEntry.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mRemoveMethodList.isValid () && inAttribute_mHasInsertOrReplaceModifier.isValid () && inAttribute_mActivateSuggestions.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mElementTypeEntry, inAttribute_mMapTypeName, inAttribute_mTypedAttributeList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mRemoveMethodList, inAttribute_mHasInsertOrReplaceModifier, inAttribute_mActivateSuggestions COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMElementTypeEntry (GALGAS_unifiedTypeMap_2D_entry inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mElementTypeEntry = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMMapTypeName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mMapTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMRemoveMethodList (GALGAS_mapRemoveMethodListAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mRemoveMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMHasInsertOrReplaceModifier (GALGAS_bool inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mHasInsertOrReplaceModifier = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mapTypeForGeneration::setter_setMActivateSuggestions (GALGAS_bool inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    p->mProperty_mActivateSuggestions = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_mapTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapTypeForGeneration::readProperty_mMapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mMapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_mapTypeForGeneration::readProperty_mInsertMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapRemoveMethodListAST GALGAS_mapTypeForGeneration::readProperty_mRemoveMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapRemoveMethodListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapTypeForGeneration::readProperty_mHasInsertOrReplaceModifier (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mHasInsertOrReplaceModifier ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_mapTypeForGeneration::readProperty_mActivateSuggestions (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mActivateSuggestions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @mapTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mElementTypeEntry,
                                                      const GALGAS_lstring & in_mMapTypeName,
                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                      const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                      const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                      const GALGAS_mapRemoveMethodListAST & in_mRemoveMethodList,
                                                      const GALGAS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GALGAS_bool & in_mActivateSuggestions
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mElementTypeEntry (in_mElementTypeEntry),
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mRemoveMethodList (in_mRemoveMethodList),
mProperty_mHasInsertOrReplaceModifier (in_mHasInsertOrReplaceModifier),
mProperty_mActivateSuggestions (in_mActivateSuggestions) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@mapTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRemoveMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActivateSuggestions.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mRemoveMethodList, mProperty_mHasInsertOrReplaceModifier, mProperty_mActivateSuggestions COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@mapTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                             & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration result ;
  const GALGAS_mapTypeForGeneration * p = (const GALGAS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapTypeForGeneration_2D_weak::objectCompare (const GALGAS_mapTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak::GALGAS_mapTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak & GALGAS_mapTypeForGeneration_2D_weak::operator = (const GALGAS_mapTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak::GALGAS_mapTypeForGeneration_2D_weak (const GALGAS_mapTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak GALGAS_mapTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration GALGAS_mapTypeForGeneration_2D_weak::bang_mapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapTypeForGeneration) ;
      result = GALGAS_mapTypeForGeneration ((cPtr_mapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapTypeForGeneration_2D_weak ("mapTypeForGeneration-weak",
                                                     & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapTypeForGeneration_2D_weak GALGAS_mapTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mapTypeForGeneration_2D_weak result ;
  const GALGAS_mapTypeForGeneration_2D_weak * p = (const GALGAS_mapTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @mapEntryDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_mapEntryDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapEntryDeclarationAST * p = (const cPtr_mapEntryDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapEntryDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapEntryTypeName.objectCompare (p->mProperty_mMapEntryTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedMapTypeName.objectCompare (p->mProperty_mAssociatedMapTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_mapEntryDeclarationAST::objectCompare (const GALGAS_mapEntryDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST::GALGAS_mapEntryDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST GALGAS_mapEntryDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapEntryDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE)
                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST::GALGAS_mapEntryDeclarationAST (const cPtr_mapEntryDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapEntryDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST GALGAS_mapEntryDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                              const GALGAS_lstring & inAttribute_mMapEntryTypeName,
                                                                              const GALGAS_lstring & inAttribute_mAssociatedMapTypeName
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_mapEntryDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapEntryTypeName.isValid () && inAttribute_mAssociatedMapTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapEntryDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapEntryTypeName, inAttribute_mAssociatedMapTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapEntryDeclarationAST::readProperty_mMapEntryTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapEntryDeclarationAST * p = (cPtr_mapEntryDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapEntryDeclarationAST) ;
    return p->mProperty_mMapEntryTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_mapEntryDeclarationAST::readProperty_mAssociatedMapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_mapEntryDeclarationAST * p = (cPtr_mapEntryDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapEntryDeclarationAST) ;
    return p->mProperty_mAssociatedMapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @mapEntryDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_mapEntryDeclarationAST::cPtr_mapEntryDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                          const GALGAS_lstring & in_mMapEntryTypeName,
                                                          const GALGAS_lstring & in_mAssociatedMapTypeName
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mMapEntryTypeName (in_mMapEntryTypeName),
mProperty_mAssociatedMapTypeName (in_mAssociatedMapTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mapEntryDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapEntryDeclarationAST ;
}

void cPtr_mapEntryDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@mapEntryDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapEntryTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedMapTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapEntryDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapEntryDeclarationAST (mProperty_mIsPredefined, mProperty_mMapEntryTypeName, mProperty_mAssociatedMapTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@mapEntryDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapEntryDeclarationAST ("mapEntryDeclarationAST",
                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapEntryDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapEntryDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapEntryDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapEntryDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST GALGAS_mapEntryDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapEntryDeclarationAST result ;
  const GALGAS_mapEntryDeclarationAST * p = (const GALGAS_mapEntryDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapEntryDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapEntryDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapEntryDeclarationAST_2D_weak::objectCompare (const GALGAS_mapEntryDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST_2D_weak::GALGAS_mapEntryDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST_2D_weak & GALGAS_mapEntryDeclarationAST_2D_weak::operator = (const GALGAS_mapEntryDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST_2D_weak::GALGAS_mapEntryDeclarationAST_2D_weak (const GALGAS_mapEntryDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST_2D_weak GALGAS_mapEntryDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_mapEntryDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST GALGAS_mapEntryDeclarationAST_2D_weak::bang_mapEntryDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapEntryDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapEntryDeclarationAST) ;
      result = GALGAS_mapEntryDeclarationAST ((cPtr_mapEntryDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapEntryDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapEntryDeclarationAST_2D_weak ("mapEntryDeclarationAST-weak",
                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapEntryDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapEntryDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapEntryDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapEntryDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryDeclarationAST_2D_weak GALGAS_mapEntryDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_mapEntryDeclarationAST_2D_weak result ;
  const GALGAS_mapEntryDeclarationAST_2D_weak * p = (const GALGAS_mapEntryDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapEntryDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapEntryDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @mapEntryTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_mapEntryTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_mapEntryTypeForGeneration * p = (const cPtr_mapEntryTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_mapEntryTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedMapTypeEntry.objectCompare (p->mProperty_mAssociatedMapTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAssociatedMapTypedAttributeList.objectCompare (p->mProperty_mAssociatedMapTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_mapEntryTypeForGeneration::objectCompare (const GALGAS_mapEntryTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration::GALGAS_mapEntryTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration GALGAS_mapEntryTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_mapEntryTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                            GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                            GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                            GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration::GALGAS_mapEntryTypeForGeneration (const cPtr_mapEntryTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapEntryTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration GALGAS_mapEntryTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                    const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mAssociatedMapTypeEntry,
                                                                                    const GALGAS_typedPropertyList & inAttribute_mAssociatedMapTypedAttributeList,
                                                                                    const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_mapEntryTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mAssociatedMapTypeEntry.isValid () && inAttribute_mAssociatedMapTypedAttributeList.isValid () && inAttribute_mSearchMethodList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_mapEntryTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mAssociatedMapTypeEntry, inAttribute_mAssociatedMapTypedAttributeList, inAttribute_mSearchMethodList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_mapEntryTypeForGeneration::readProperty_mAssociatedMapTypeEntry (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_mapEntryTypeForGeneration * p = (cPtr_mapEntryTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapEntryTypeForGeneration) ;
    return p->mProperty_mAssociatedMapTypeEntry ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_mapEntryTypeForGeneration::readProperty_mAssociatedMapTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_mapEntryTypeForGeneration * p = (cPtr_mapEntryTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapEntryTypeForGeneration) ;
    return p->mProperty_mAssociatedMapTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_mapEntryTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_mapEntryTypeForGeneration * p = (cPtr_mapEntryTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapEntryTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @mapEntryTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_mapEntryTypeForGeneration::cPtr_mapEntryTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                const GALGAS_unifiedTypeMap_2D_entry & in_mAssociatedMapTypeEntry,
                                                                const GALGAS_typedPropertyList & in_mAssociatedMapTypedAttributeList,
                                                                const GALGAS_mapSearchMethodListAST & in_mSearchMethodList
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mAssociatedMapTypeEntry (in_mAssociatedMapTypeEntry),
mProperty_mAssociatedMapTypedAttributeList (in_mAssociatedMapTypedAttributeList),
mProperty_mSearchMethodList (in_mSearchMethodList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_mapEntryTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapEntryTypeForGeneration ;
}

void cPtr_mapEntryTypeForGeneration::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@mapEntryTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedMapTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAssociatedMapTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_mapEntryTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_mapEntryTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mAssociatedMapTypeEntry, mProperty_mAssociatedMapTypedAttributeList, mProperty_mSearchMethodList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@mapEntryTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapEntryTypeForGeneration ("mapEntryTypeForGeneration",
                                                  & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapEntryTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapEntryTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapEntryTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapEntryTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration GALGAS_mapEntryTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapEntryTypeForGeneration result ;
  const GALGAS_mapEntryTypeForGeneration * p = (const GALGAS_mapEntryTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapEntryTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapEntryTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mapEntryTypeForGeneration_2D_weak::objectCompare (const GALGAS_mapEntryTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration_2D_weak::GALGAS_mapEntryTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration_2D_weak & GALGAS_mapEntryTypeForGeneration_2D_weak::operator = (const GALGAS_mapEntryTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration_2D_weak::GALGAS_mapEntryTypeForGeneration_2D_weak (const GALGAS_mapEntryTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration_2D_weak GALGAS_mapEntryTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_mapEntryTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration GALGAS_mapEntryTypeForGeneration_2D_weak::bang_mapEntryTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_mapEntryTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_mapEntryTypeForGeneration) ;
      result = GALGAS_mapEntryTypeForGeneration ((cPtr_mapEntryTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@mapEntryTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mapEntryTypeForGeneration_2D_weak ("mapEntryTypeForGeneration-weak",
                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mapEntryTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapEntryTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mapEntryTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mapEntryTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapEntryTypeForGeneration_2D_weak GALGAS_mapEntryTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_mapEntryTypeForGeneration_2D_weak result ;
  const GALGAS_mapEntryTypeForGeneration_2D_weak * p = (const GALGAS_mapEntryTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mapEntryTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapEntryTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sharedMapDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sharedMapDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sharedMapDeclarationAST * p = (const cPtr_sharedMapDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapTypeName.objectCompare (p->mProperty_mMapTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAttributeList.objectCompare (p->mProperty_mAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapStateList.objectCompare (p->mProperty_mMapStateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapOverrideBlockListAST.objectCompare (p->mProperty_mMapOverrideBlockListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSharedMapAttributeListAST.objectCompare (p->mProperty_mSharedMapAttributeListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sharedMapDeclarationAST::objectCompare (const GALGAS_sharedMapDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sharedMapDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstringlist::constructor_emptyList (HERE),
                                                          GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                          GALGAS_insertMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapSearchMethodListAST::constructor_emptyList (HERE),
                                                          GALGAS_mapStateList::constructor_emptyList (HERE),
                                                          GALGAS_mapOverrideBlockListAST::constructor_emptyList (HERE),
                                                          GALGAS_sharedMapAttributeListAST::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST::GALGAS_sharedMapDeclarationAST (const cPtr_sharedMapDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sharedMapDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                const GALGAS_lstring & inAttribute_mMapTypeName,
                                                                                const GALGAS_lstringlist & inAttribute_mAttributeList,
                                                                                const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                                const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                                const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                                const GALGAS_mapStateList & inAttribute_mMapStateList,
                                                                                const GALGAS_mapOverrideBlockListAST & inAttribute_mMapOverrideBlockListAST,
                                                                                const GALGAS_sharedMapAttributeListAST & inAttribute_mSharedMapAttributeListAST
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mMapTypeName.isValid () && inAttribute_mAttributeList.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mMapStateList.isValid () && inAttribute_mMapOverrideBlockListAST.isValid () && inAttribute_mSharedMapAttributeListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sharedMapDeclarationAST (inAttribute_mIsPredefined, inAttribute_mMapTypeName, inAttribute_mAttributeList, inAttribute_mPropertyList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mMapStateList, inAttribute_mMapOverrideBlockListAST, inAttribute_mSharedMapAttributeListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMMapTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mMapTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMAttributeList (GALGAS_lstringlist inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMPropertyList (GALGAS_propertyInCollectionListAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMMapStateList (GALGAS_mapStateList inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mMapStateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMMapOverrideBlockListAST (GALGAS_mapOverrideBlockListAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mMapOverrideBlockListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapDeclarationAST::setter_setMSharedMapAttributeListAST (GALGAS_sharedMapAttributeListAST inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    p->mProperty_mSharedMapAttributeListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sharedMapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_sharedMapDeclarationAST::readProperty_mAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_sharedMapDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_sharedMapDeclarationAST::readProperty_mInsertMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_sharedMapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateList GALGAS_sharedMapDeclarationAST::readProperty_mMapStateList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapStateList () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mMapStateList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideBlockListAST GALGAS_sharedMapDeclarationAST::readProperty_mMapOverrideBlockListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapOverrideBlockListAST () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mMapOverrideBlockListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapAttributeListAST GALGAS_sharedMapDeclarationAST::readProperty_mSharedMapAttributeListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sharedMapAttributeListAST () ;
  }else{
    cPtr_sharedMapDeclarationAST * p = (cPtr_sharedMapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapDeclarationAST) ;
    return p->mProperty_mSharedMapAttributeListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sharedMapDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sharedMapDeclarationAST::cPtr_sharedMapDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                            const GALGAS_lstring & in_mMapTypeName,
                                                            const GALGAS_lstringlist & in_mAttributeList,
                                                            const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                            const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                            const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                            const GALGAS_mapStateList & in_mMapStateList,
                                                            const GALGAS_mapOverrideBlockListAST & in_mMapOverrideBlockListAST,
                                                            const GALGAS_sharedMapAttributeListAST & in_mSharedMapAttributeListAST
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mMapTypeName (in_mMapTypeName),
mProperty_mAttributeList (in_mAttributeList),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mMapStateList (in_mMapStateList),
mProperty_mMapOverrideBlockListAST (in_mMapOverrideBlockListAST),
mProperty_mSharedMapAttributeListAST (in_mSharedMapAttributeListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sharedMapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

void cPtr_sharedMapDeclarationAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@sharedMapDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapStateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapOverrideBlockListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSharedMapAttributeListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sharedMapDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sharedMapDeclarationAST (mProperty_mIsPredefined, mProperty_mMapTypeName, mProperty_mAttributeList, mProperty_mPropertyList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mMapStateList, mProperty_mMapOverrideBlockListAST, mProperty_mSharedMapAttributeListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sharedMapDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapDeclarationAST ("sharedMapDeclarationAST",
                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sharedMapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sharedMapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sharedMapDeclarationAST_2D_weak::objectCompare (const GALGAS_sharedMapDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST_2D_weak::GALGAS_sharedMapDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST_2D_weak & GALGAS_sharedMapDeclarationAST_2D_weak::operator = (const GALGAS_sharedMapDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST_2D_weak::GALGAS_sharedMapDeclarationAST_2D_weak (const GALGAS_sharedMapDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST_2D_weak GALGAS_sharedMapDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST GALGAS_sharedMapDeclarationAST_2D_weak::bang_sharedMapDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sharedMapDeclarationAST) ;
      result = GALGAS_sharedMapDeclarationAST ((cPtr_sharedMapDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sharedMapDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapDeclarationAST_2D_weak ("sharedMapDeclarationAST-weak",
                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sharedMapDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sharedMapDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapDeclarationAST_2D_weak GALGAS_sharedMapDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapDeclarationAST_2D_weak result ;
  const GALGAS_sharedMapDeclarationAST_2D_weak * p = (const GALGAS_sharedMapDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sharedMapTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sharedMapTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sharedMapTypeForGeneration * p = (const cPtr_sharedMapTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInsertMethodList.objectCompare (p->mProperty_mInsertMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSearchMethodList.objectCompare (p->mProperty_mSearchMethodList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapAutomatonStateMap.objectCompare (p->mProperty_mMapAutomatonStateMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapAutomatonActionMap.objectCompare (p->mProperty_mMapAutomatonActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapStateSortedList.objectCompare (p->mProperty_mMapStateSortedList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMapOverrideList.objectCompare (p->mProperty_mMapOverrideList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShadowBehaviour.objectCompare (p->mProperty_mShadowBehaviour) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mShadowMessage.objectCompare (p->mProperty_mShadowMessage) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sharedMapTypeForGeneration::objectCompare (const GALGAS_sharedMapTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration::GALGAS_sharedMapTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration::GALGAS_sharedMapTypeForGeneration (const cPtr_sharedMapTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sharedMapTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration GALGAS_sharedMapTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                      const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                      const GALGAS_insertMethodListAST & inAttribute_mInsertMethodList,
                                                                                      const GALGAS_mapSearchMethodListAST & inAttribute_mSearchMethodList,
                                                                                      const GALGAS_mapAutomatonStateMap & inAttribute_mMapAutomatonStateMap,
                                                                                      const GALGAS_mapAutomatonActionMap & inAttribute_mMapAutomatonActionMap,
                                                                                      const GALGAS_mapStateSortedList & inAttribute_mMapStateSortedList,
                                                                                      const GALGAS_mapOverrideList & inAttribute_mMapOverrideList,
                                                                                      const GALGAS_mapAutomatonMessageKind & inAttribute_mShadowBehaviour,
                                                                                      const GALGAS_string & inAttribute_mShadowMessage
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mInsertMethodList.isValid () && inAttribute_mSearchMethodList.isValid () && inAttribute_mMapAutomatonStateMap.isValid () && inAttribute_mMapAutomatonActionMap.isValid () && inAttribute_mMapStateSortedList.isValid () && inAttribute_mMapOverrideList.isValid () && inAttribute_mShadowBehaviour.isValid () && inAttribute_mShadowMessage.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sharedMapTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mTypedAttributeList, inAttribute_mInsertMethodList, inAttribute_mSearchMethodList, inAttribute_mMapAutomatonStateMap, inAttribute_mMapAutomatonActionMap, inAttribute_mMapStateSortedList, inAttribute_mMapOverrideList, inAttribute_mShadowBehaviour, inAttribute_mShadowMessage COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMTypedAttributeList (GALGAS_typedPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mTypedAttributeList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMInsertMethodList (GALGAS_insertMethodListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mInsertMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMSearchMethodList (GALGAS_mapSearchMethodListAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mSearchMethodList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMMapAutomatonStateMap (GALGAS_mapAutomatonStateMap inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapAutomatonStateMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMMapAutomatonActionMap (GALGAS_mapAutomatonActionMap inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapAutomatonActionMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMMapStateSortedList (GALGAS_mapStateSortedList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapStateSortedList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMMapOverrideList (GALGAS_mapOverrideList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mMapOverrideList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMShadowBehaviour (GALGAS_mapAutomatonMessageKind inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mShadowBehaviour = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_sharedMapTypeForGeneration::setter_setMShadowMessage (GALGAS_string inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    p->mProperty_mShadowMessage = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_sharedMapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_insertMethodListAST GALGAS_sharedMapTypeForGeneration::readProperty_mInsertMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_insertMethodListAST () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mInsertMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapSearchMethodListAST GALGAS_sharedMapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapSearchMethodListAST () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonStateMap GALGAS_sharedMapTypeForGeneration::readProperty_mMapAutomatonStateMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapAutomatonStateMap () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mMapAutomatonStateMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonActionMap GALGAS_sharedMapTypeForGeneration::readProperty_mMapAutomatonActionMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapAutomatonActionMap () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mMapAutomatonActionMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapStateSortedList GALGAS_sharedMapTypeForGeneration::readProperty_mMapStateSortedList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapStateSortedList () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mMapStateSortedList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapOverrideList GALGAS_sharedMapTypeForGeneration::readProperty_mMapOverrideList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapOverrideList () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mMapOverrideList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mapAutomatonMessageKind GALGAS_sharedMapTypeForGeneration::readProperty_mShadowBehaviour (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_mapAutomatonMessageKind () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mShadowBehaviour ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_sharedMapTypeForGeneration::readProperty_mShadowMessage (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_sharedMapTypeForGeneration * p = (cPtr_sharedMapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sharedMapTypeForGeneration) ;
    return p->mProperty_mShadowMessage ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sharedMapTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sharedMapTypeForGeneration::cPtr_sharedMapTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                  const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                  const GALGAS_insertMethodListAST & in_mInsertMethodList,
                                                                  const GALGAS_mapSearchMethodListAST & in_mSearchMethodList,
                                                                  const GALGAS_mapAutomatonStateMap & in_mMapAutomatonStateMap,
                                                                  const GALGAS_mapAutomatonActionMap & in_mMapAutomatonActionMap,
                                                                  const GALGAS_mapStateSortedList & in_mMapStateSortedList,
                                                                  const GALGAS_mapOverrideList & in_mMapOverrideList,
                                                                  const GALGAS_mapAutomatonMessageKind & in_mShadowBehaviour,
                                                                  const GALGAS_string & in_mShadowMessage
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mInsertMethodList (in_mInsertMethodList),
mProperty_mSearchMethodList (in_mSearchMethodList),
mProperty_mMapAutomatonStateMap (in_mMapAutomatonStateMap),
mProperty_mMapAutomatonActionMap (in_mMapAutomatonActionMap),
mProperty_mMapStateSortedList (in_mMapStateSortedList),
mProperty_mMapOverrideList (in_mMapOverrideList),
mProperty_mShadowBehaviour (in_mShadowBehaviour),
mProperty_mShadowMessage (in_mShadowMessage) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sharedMapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;
}

void cPtr_sharedMapTypeForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@sharedMapTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInsertMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapAutomatonStateMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapAutomatonActionMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapStateSortedList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMapOverrideList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mShadowBehaviour.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mShadowMessage.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sharedMapTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sharedMapTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mTypedAttributeList, mProperty_mInsertMethodList, mProperty_mSearchMethodList, mProperty_mMapAutomatonStateMap, mProperty_mMapAutomatonActionMap, mProperty_mMapStateSortedList, mProperty_mMapOverrideList, mProperty_mShadowBehaviour, mProperty_mShadowMessage COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sharedMapTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ("sharedMapTypeForGeneration",
                                                   & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sharedMapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sharedMapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration GALGAS_sharedMapTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration result ;
  const GALGAS_sharedMapTypeForGeneration * p = (const GALGAS_sharedMapTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sharedMapTypeForGeneration_2D_weak::objectCompare (const GALGAS_sharedMapTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration_2D_weak::GALGAS_sharedMapTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration_2D_weak & GALGAS_sharedMapTypeForGeneration_2D_weak::operator = (const GALGAS_sharedMapTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration_2D_weak::GALGAS_sharedMapTypeForGeneration_2D_weak (const GALGAS_sharedMapTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration_2D_weak GALGAS_sharedMapTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration GALGAS_sharedMapTypeForGeneration_2D_weak::bang_sharedMapTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sharedMapTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sharedMapTypeForGeneration) ;
      result = GALGAS_sharedMapTypeForGeneration ((cPtr_sharedMapTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sharedMapTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sharedMapTypeForGeneration_2D_weak ("sharedMapTypeForGeneration-weak",
                                                           & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sharedMapTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sharedMapTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sharedMapTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sharedMapTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sharedMapTypeForGeneration_2D_weak GALGAS_sharedMapTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_sharedMapTypeForGeneration_2D_weak result ;
  const GALGAS_sharedMapTypeForGeneration_2D_weak * p = (const GALGAS_sharedMapTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sharedMapTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sharedMapTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sortedListDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sortedListDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListDeclarationAST * p = (const cPtr_sortedListDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSortedListTypeName.objectCompare (p->mProperty_mSortedListTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyList.objectCompare (p->mProperty_mPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSortDescriptorList.objectCompare (p->mProperty_mSortDescriptorList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sortedListDeclarationAST::objectCompare (const GALGAS_sortedListDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                           GALGAS_sortedListSortDescriptorListAST::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST::GALGAS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                  const GALGAS_lstring & inAttribute_mSortedListTypeName,
                                                                                  const GALGAS_propertyInCollectionListAST & inAttribute_mPropertyList,
                                                                                  const GALGAS_sortedListSortDescriptorListAST & inAttribute_mSortDescriptorList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mSortedListTypeName.isValid () && inAttribute_mPropertyList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListDeclarationAST (inAttribute_mIsPredefined, inAttribute_mSortedListTypeName, inAttribute_mPropertyList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_sortedListDeclarationAST::readProperty_mSortedListTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortedListTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_sortedListDeclarationAST::readProperty_mPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListSortDescriptorListAST GALGAS_sortedListDeclarationAST::readProperty_mSortDescriptorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sortedListSortDescriptorListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sortedListDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                              const GALGAS_lstring & in_mSortedListTypeName,
                                                              const GALGAS_propertyInCollectionListAST & in_mPropertyList,
                                                              const GALGAS_sortedListSortDescriptorListAST & in_mSortDescriptorList
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mSortedListTypeName (in_mSortedListTypeName),
mProperty_mPropertyList (in_mPropertyList),
mProperty_mSortDescriptorList (in_mSortDescriptorList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@sortedListDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_mIsPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sortedListDeclarationAST_2D_weak::objectCompare (const GALGAS_sortedListDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak::GALGAS_sortedListDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak & GALGAS_sortedListDeclarationAST_2D_weak::operator = (const GALGAS_sortedListDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak::GALGAS_sortedListDeclarationAST_2D_weak (const GALGAS_sortedListDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak GALGAS_sortedListDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST GALGAS_sortedListDeclarationAST_2D_weak::bang_sortedListDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sortedListDeclarationAST) ;
      result = GALGAS_sortedListDeclarationAST ((cPtr_sortedListDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListDeclarationAST_2D_weak ("sortedListDeclarationAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListDeclarationAST_2D_weak GALGAS_sortedListDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_sortedListDeclarationAST_2D_weak result ;
  const GALGAS_sortedListDeclarationAST_2D_weak * p = (const GALGAS_sortedListDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @sortedListTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_sortedListTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_sortedListTypeForGeneration * p = (const cPtr_sortedListTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListElementTypeIndex.objectCompare (p->mProperty_mListElementTypeIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSortDescriptorList.objectCompare (p->mProperty_mSortDescriptorList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_sortedListTypeForGeneration::objectCompare (const GALGAS_sortedListTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_sortedListTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                              GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                              GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                              GALGAS_sortDescriptorListForGeneration::constructor_emptyList (HERE)
                                                              COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration::GALGAS_sortedListTypeForGeneration (const cPtr_sortedListTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mListElementTypeIndex,
                                                                                        const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                        const GALGAS_sortDescriptorListForGeneration & inAttribute_mSortDescriptorList
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mListElementTypeIndex.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSortDescriptorList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_sortedListTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mListElementTypeIndex, inAttribute_mTypedAttributeList, inAttribute_mSortDescriptorList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_sortedListTypeForGeneration::readProperty_mListElementTypeIndex (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mListElementTypeIndex ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_sortedListTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortDescriptorListForGeneration GALGAS_sortedListTypeForGeneration::readProperty_mSortDescriptorList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_sortDescriptorListForGeneration () ;
  }else{
    cPtr_sortedListTypeForGeneration * p = (cPtr_sortedListTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListTypeForGeneration) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @sortedListTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_sortedListTypeForGeneration::cPtr_sortedListTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                                    const GALGAS_unifiedTypeMap_2D_entry & in_mListElementTypeIndex,
                                                                    const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                    const GALGAS_sortDescriptorListForGeneration & in_mSortDescriptorList
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mListElementTypeIndex (in_mListElementTypeIndex),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSortDescriptorList (in_mSortDescriptorList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_sortedListTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

void cPtr_sortedListTypeForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@sortedListTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mListElementTypeIndex.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_sortedListTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_sortedListTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mListElementTypeIndex, mProperty_mTypedAttributeList, mProperty_mSortDescriptorList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListTypeForGeneration ("sortedListTypeForGeneration",
                                                    & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration result ;
  const GALGAS_sortedListTypeForGeneration * p = (const GALGAS_sortedListTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_sortedListTypeForGeneration_2D_weak::objectCompare (const GALGAS_sortedListTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak::GALGAS_sortedListTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak & GALGAS_sortedListTypeForGeneration_2D_weak::operator = (const GALGAS_sortedListTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak::GALGAS_sortedListTypeForGeneration_2D_weak (const GALGAS_sortedListTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak GALGAS_sortedListTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration GALGAS_sortedListTypeForGeneration_2D_weak::bang_sortedListTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sortedListTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sortedListTypeForGeneration) ;
      result = GALGAS_sortedListTypeForGeneration ((cPtr_sortedListTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@sortedListTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ("sortedListTypeForGeneration-weak",
                                                            & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sortedListTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sortedListTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sortedListTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_sortedListTypeForGeneration_2D_weak GALGAS_sortedListTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_sortedListTypeForGeneration_2D_weak result ;
  const GALGAS_sortedListTypeForGeneration_2D_weak * p = (const GALGAS_sortedListTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_sortedListTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structDeclarationAST * p = (const cPtr_structDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructTypeName.objectCompare (p->mProperty_mStructTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStructurePropertyList.objectCompare (p->mProperty_mStructurePropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumeratedElementTypeName.objectCompare (p->mProperty_mEnumeratedElementTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structDeclarationAST::objectCompare (const GALGAS_structDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_structDeclarationAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_propertyInCollectionListAST::constructor_emptyList (HERE),
                                                       GALGAS_string::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST::GALGAS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                          const GALGAS_lstring & inAttribute_mStructTypeName,
                                                                          const GALGAS_propertyInCollectionListAST & inAttribute_mStructurePropertyList,
                                                                          const GALGAS_string & inAttribute_mEnumeratedElementTypeName
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mStructTypeName.isValid () && inAttribute_mStructurePropertyList.isValid () && inAttribute_mEnumeratedElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structDeclarationAST (inAttribute_mIsPredefined, inAttribute_mStructTypeName, inAttribute_mStructurePropertyList, inAttribute_mEnumeratedElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_structDeclarationAST::readProperty_mStructTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionListAST GALGAS_structDeclarationAST::readProperty_mStructurePropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyInCollectionListAST () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructurePropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_structDeclarationAST::readProperty_mEnumeratedElementTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mEnumeratedElementTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GALGAS_bool & in_mIsPredefined,
                                                      const GALGAS_lstring & in_mStructTypeName,
                                                      const GALGAS_propertyInCollectionListAST & in_mStructurePropertyList,
                                                      const GALGAS_string & in_mEnumeratedElementTypeName
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mStructTypeName (in_mStructTypeName),
mProperty_mStructurePropertyList (in_mStructurePropertyList),
mProperty_mEnumeratedElementTypeName (in_mEnumeratedElementTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@structDeclarationAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStructurePropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_mIsPredefined, mProperty_mStructTypeName, mProperty_mStructurePropertyList, mProperty_mEnumeratedElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structDeclarationAST_2D_weak::objectCompare (const GALGAS_structDeclarationAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak::GALGAS_structDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak & GALGAS_structDeclarationAST_2D_weak::operator = (const GALGAS_structDeclarationAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak::GALGAS_structDeclarationAST_2D_weak (const GALGAS_structDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak GALGAS_structDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structDeclarationAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST GALGAS_structDeclarationAST_2D_weak::bang_structDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structDeclarationAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structDeclarationAST) ;
      result = GALGAS_structDeclarationAST ((cPtr_structDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structDeclarationAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structDeclarationAST_2D_weak ("structDeclarationAST-weak",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structDeclarationAST_2D_weak GALGAS_structDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structDeclarationAST_2D_weak result ;
  const GALGAS_structDeclarationAST_2D_weak * p = (const GALGAS_structDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structTypeForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structTypeForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structTypeForGeneration * p = (const cPtr_structTypeForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfTypeEntry.objectCompare (p->mProperty_mSelfTypeEntry) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedPropertyList.objectCompare (p->mProperty_mTypedPropertyList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structTypeForGeneration::objectCompare (const GALGAS_structTypeForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (void) :
GALGAS_semanticTypeForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_structTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                          GALGAS_typedPropertyList::constructor_emptyList (HERE)
                                                          COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration::GALGAS_structTypeForGeneration (const cPtr_structTypeForGeneration * inSourcePtr) :
GALGAS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structTypeForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::constructor_new (const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mSelfTypeEntry,
                                                                                const GALGAS_typedPropertyList & inAttribute_mTypedPropertyList
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  if (inAttribute_mSelfTypeEntry.isValid () && inAttribute_mTypedPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structTypeForGeneration (inAttribute_mSelfTypeEntry, inAttribute_mTypedPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_structTypeForGeneration::readProperty_mTypedPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_structTypeForGeneration * p = (cPtr_structTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structTypeForGeneration) ;
    return p->mProperty_mTypedPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structTypeForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structTypeForGeneration::cPtr_structTypeForGeneration (const GALGAS_unifiedTypeMap_2D_entry & in_mSelfTypeEntry,
                                                            const GALGAS_typedPropertyList & in_mTypedPropertyList
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_mSelfTypeEntry COMMA_THERE),
mProperty_mTypedPropertyList (in_mTypedPropertyList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

void cPtr_structTypeForGeneration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@structTypeForGeneration:" ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structTypeForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structTypeForGeneration (mProperty_mSelfTypeEntry, mProperty_mTypedPropertyList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structTypeForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structTypeForGeneration ("structTypeForGeneration",
                                                & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration result ;
  const GALGAS_structTypeForGeneration * p = (const GALGAS_structTypeForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structTypeForGeneration_2D_weak::objectCompare (const GALGAS_structTypeForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak::GALGAS_structTypeForGeneration_2D_weak (void) :
GALGAS_semanticTypeForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak & GALGAS_structTypeForGeneration_2D_weak::operator = (const GALGAS_structTypeForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak::GALGAS_structTypeForGeneration_2D_weak (const GALGAS_structTypeForGeneration & inSource) :
GALGAS_semanticTypeForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak GALGAS_structTypeForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structTypeForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration GALGAS_structTypeForGeneration_2D_weak::bang_structTypeForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structTypeForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structTypeForGeneration) ;
      result = GALGAS_structTypeForGeneration ((cPtr_structTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structTypeForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structTypeForGeneration_2D_weak ("structTypeForGeneration-weak",
                                                        & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structTypeForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structTypeForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structTypeForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structTypeForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structTypeForGeneration_2D_weak GALGAS_structTypeForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_structTypeForGeneration_2D_weak result ;
  const GALGAS_structTypeForGeneration_2D_weak * p = (const GALGAS_structTypeForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structTypeForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structTypeForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionGetterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_abstractExtensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionGetterAST * p = (const cPtr_abstractExtensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterName.objectCompare (p->mProperty_mAbstractExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterFormalInputParameterList.objectCompare (p->mProperty_mAbstractExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterReturnedTypeName.objectCompare (p->mProperty_mAbstractExtensionGetterReturnedTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionGetterAST::objectCompare (const GALGAS_abstractExtensionGetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                             GALGAS_lstring::constructor_default (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST::GALGAS_abstractExtensionGetterAST (const cPtr_abstractExtensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionGetterName,
                                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mAbstractExtensionGetterFormalInputParameterList,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionGetterReturnedTypeName
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mAbstractExtensionGetterFormalInputParameterList.isValid () && inAttribute_mAbstractExtensionGetterReturnedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionGetterName, inAttribute_mAbstractExtensionGetterFormalInputParameterList, inAttribute_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterFormalInputParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterFormalInputParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionGetterAST::readProperty_mAbstractExtensionGetterReturnedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionGetterAST * p = (cPtr_abstractExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterAST) ;
    return p->mProperty_mAbstractExtensionGetterReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterAST::cPtr_abstractExtensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterName,
                                                                  const GALGAS_formalInputParameterListAST & in_mAbstractExtensionGetterFormalInputParameterList,
                                                                  const GALGAS_lstring & in_mAbstractExtensionGetterReturnedTypeName
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mProperty_mAbstractExtensionGetterFormalInputParameterList (in_mAbstractExtensionGetterFormalInputParameterList),
mProperty_mAbstractExtensionGetterReturnedTypeName (in_mAbstractExtensionGetterReturnedTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

void cPtr_abstractExtensionGetterAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionGetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionGetterName, mProperty_mAbstractExtensionGetterFormalInputParameterList, mProperty_mAbstractExtensionGetterReturnedTypeName COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionGetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterAST ("abstractExtensionGetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST result ;
  const GALGAS_abstractExtensionGetterAST * p = (const GALGAS_abstractExtensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionGetterAST_2D_weak::objectCompare (const GALGAS_abstractExtensionGetterAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak::GALGAS_abstractExtensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak & GALGAS_abstractExtensionGetterAST_2D_weak::operator = (const GALGAS_abstractExtensionGetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak::GALGAS_abstractExtensionGetterAST_2D_weak (const GALGAS_abstractExtensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak GALGAS_abstractExtensionGetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST GALGAS_abstractExtensionGetterAST_2D_weak::bang_abstractExtensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionGetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterAST) ;
      result = GALGAS_abstractExtensionGetterAST ((cPtr_abstractExtensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionGetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2D_weak ("abstractExtensionGetterAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterAST_2D_weak GALGAS_abstractExtensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterAST_2D_weak result ;
  const GALGAS_abstractExtensionGetterAST_2D_weak * p = (const GALGAS_abstractExtensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionGetterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_abstractExtensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionGetterForGeneration * p = (const cPtr_abstractExtensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterName.objectCompare (p->mProperty_mAbstractExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionGetterFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionGetterFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionGetterForGeneration::objectCompare (const GALGAS_abstractExtensionGetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration::GALGAS_abstractExtensionGetterForGeneration (const cPtr_abstractExtensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionGetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionGetterName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mAbstractExtensionGetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionGetterName.isValid () && inAttribute_mResultType.isValid () && inAttribute_mAbstractExtensionGetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionGetterName, inAttribute_mResultType, inAttribute_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_abstractExtensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_abstractExtensionGetterForGeneration::readProperty_mResultType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_abstractExtensionGetterForGeneration::readProperty_mAbstractExtensionGetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionGetterForGeneration) ;
    return p->mProperty_mAbstractExtensionGetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionGetterForGeneration::cPtr_abstractExtensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionGetterName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                                      const GALGAS_formalInputParameterListForGeneration & in_mAbstractExtensionGetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionGetterName (in_mAbstractExtensionGetterName),
mProperty_mResultType (in_mResultType),
mProperty_mAbstractExtensionGetterFormalParameterList (in_mAbstractExtensionGetterFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

void cPtr_abstractExtensionGetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionGetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionGetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionGetterName, mProperty_mResultType, mProperty_mAbstractExtensionGetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionGetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ("abstractExtensionGetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration result ;
  const GALGAS_abstractExtensionGetterForGeneration * p = (const GALGAS_abstractExtensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionGetterForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionGetterForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak::GALGAS_abstractExtensionGetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak & GALGAS_abstractExtensionGetterForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionGetterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak::GALGAS_abstractExtensionGetterForGeneration_2D_weak (const GALGAS_abstractExtensionGetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak GALGAS_abstractExtensionGetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration GALGAS_abstractExtensionGetterForGeneration_2D_weak::bang_abstractExtensionGetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionGetterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterForGeneration) ;
      result = GALGAS_abstractExtensionGetterForGeneration ((cPtr_abstractExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionGetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2D_weak ("abstractExtensionGetterForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionGetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionGetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionGetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionGetterForGeneration_2D_weak GALGAS_abstractExtensionGetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionGetterForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionGetterForGeneration_2D_weak * p = (const GALGAS_abstractExtensionGetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionGetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionGetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionMethodAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_abstractExtensionMethodAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionMethodAST * p = (const cPtr_abstractExtensionMethodAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodName.objectCompare (p->mProperty_mAbstractExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionMethodFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionMethodAST::objectCompare (const GALGAS_abstractExtensionMethodAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionMethodAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST::GALGAS_abstractExtensionMethodAST (const cPtr_abstractExtensionMethodAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListAST & inAttribute_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionMethodName.isValid () && inAttribute_mAbstractExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionMethodName, inAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodAST::setter_setMTypeName (GALGAS_lstring inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mTypeName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodName (GALGAS_lstring inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mAbstractExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodAST::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListAST inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    p->mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionMethodAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_abstractExtensionMethodAST::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionMethodAST * p = (cPtr_abstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodAST) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodAST::cPtr_abstractExtensionMethodAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionMethodName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionMethodFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mAbstractExtensionMethodName (in_mAbstractExtensionMethodName),
mProperty_mAbstractExtensionMethodFormalParameterList (in_mAbstractExtensionMethodFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

void cPtr_abstractExtensionMethodAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionMethodAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionMethodAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionMethodAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodAST ("abstractExtensionMethodAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST result ;
  const GALGAS_abstractExtensionMethodAST * p = (const GALGAS_abstractExtensionMethodAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionMethodAST_2D_weak::objectCompare (const GALGAS_abstractExtensionMethodAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak::GALGAS_abstractExtensionMethodAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak & GALGAS_abstractExtensionMethodAST_2D_weak::operator = (const GALGAS_abstractExtensionMethodAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak::GALGAS_abstractExtensionMethodAST_2D_weak (const GALGAS_abstractExtensionMethodAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak GALGAS_abstractExtensionMethodAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST GALGAS_abstractExtensionMethodAST_2D_weak::bang_abstractExtensionMethodAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionMethodAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodAST) ;
      result = GALGAS_abstractExtensionMethodAST ((cPtr_abstractExtensionMethodAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionMethodAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2D_weak ("abstractExtensionMethodAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodAST_2D_weak GALGAS_abstractExtensionMethodAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodAST_2D_weak result ;
  const GALGAS_abstractExtensionMethodAST_2D_weak * p = (const GALGAS_abstractExtensionMethodAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionMethodForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_abstractExtensionMethodForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionMethodForGeneration * p = (const cPtr_abstractExtensionMethodForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodName.objectCompare (p->mProperty_mAbstractExtensionMethodName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionMethodFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionMethodFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionMethodForGeneration::objectCompare (const GALGAS_abstractExtensionMethodForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionMethodForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration::GALGAS_abstractExtensionMethodForGeneration (const cPtr_abstractExtensionMethodForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionMethodForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionMethodName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionMethodFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionMethodName.isValid () && inAttribute_mAbstractExtensionMethodFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionMethodForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionMethodName, inAttribute_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodForGeneration::setter_setMReceiverType (GALGAS_unifiedTypeMap_2D_entry inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mReceiverType = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodName (GALGAS_string inValue
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mAbstractExtensionMethodName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractExtensionMethodForGeneration::setter_setMAbstractExtensionMethodFormalParameterList (GALGAS_formalParameterListForGeneration inValue
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    p->mProperty_mAbstractExtensionMethodFormalParameterList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_abstractExtensionMethodForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionMethodForGeneration::readProperty_mAbstractExtensionMethodFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionMethodForGeneration) ;
    return p->mProperty_mAbstractExtensionMethodFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionMethodForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionMethodForGeneration::cPtr_abstractExtensionMethodForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionMethodName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionMethodFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionMethodName (in_mAbstractExtensionMethodName),
mProperty_mAbstractExtensionMethodFormalParameterList (in_mAbstractExtensionMethodFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionMethodForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

void cPtr_abstractExtensionMethodForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionMethodForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionMethodForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionMethodForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionMethodName, mProperty_mAbstractExtensionMethodFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionMethodForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ("abstractExtensionMethodForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration result ;
  const GALGAS_abstractExtensionMethodForGeneration * p = (const GALGAS_abstractExtensionMethodForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionMethodForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionMethodForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak & GALGAS_abstractExtensionMethodForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionMethodForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak::GALGAS_abstractExtensionMethodForGeneration_2D_weak (const GALGAS_abstractExtensionMethodForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak GALGAS_abstractExtensionMethodForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration GALGAS_abstractExtensionMethodForGeneration_2D_weak::bang_abstractExtensionMethodForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionMethodForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodForGeneration) ;
      result = GALGAS_abstractExtensionMethodForGeneration ((cPtr_abstractExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionMethodForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2D_weak ("abstractExtensionMethodForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionMethodForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionMethodForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionMethodForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionMethodForGeneration_2D_weak GALGAS_abstractExtensionMethodForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionMethodForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionMethodForGeneration_2D_weak * p = (const GALGAS_abstractExtensionMethodForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionMethodForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionMethodForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionSetterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_abstractExtensionSetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionSetterAST * p = (const cPtr_abstractExtensionSetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterName.objectCompare (p->mProperty_mAbstractExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionSetterAST::objectCompare (const GALGAS_abstractExtensionSetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_lstring::constructor_default (HERE),
                                                             GALGAS_formalParameterListAST::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST::GALGAS_abstractExtensionSetterAST (const cPtr_abstractExtensionSetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                                      const GALGAS_lstring & inAttribute_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListAST & inAttribute_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mAbstractExtensionSetterName.isValid () && inAttribute_mAbstractExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mAbstractExtensionSetterName, inAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionSetterAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_abstractExtensionSetterAST::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListAST () ;
  }else{
    cPtr_abstractExtensionSetterAST * p = (cPtr_abstractExtensionSetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterAST) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterAST::cPtr_abstractExtensionSetterAST (const GALGAS_bool & in_mIsPredefined,
                                                                  const GALGAS_lstring & in_mTypeName,
                                                                  const GALGAS_lstring & in_mAbstractExtensionSetterName,
                                                                  const GALGAS_formalParameterListAST & in_mAbstractExtensionSetterFormalParameterList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mAbstractExtensionSetterName (in_mAbstractExtensionSetterName),
mProperty_mAbstractExtensionSetterFormalParameterList (in_mAbstractExtensionSetterFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

void cPtr_abstractExtensionSetterAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@abstractExtensionSetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterAST ("abstractExtensionSetterAST",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST result ;
  const GALGAS_abstractExtensionSetterAST * p = (const GALGAS_abstractExtensionSetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionSetterAST_2D_weak::objectCompare (const GALGAS_abstractExtensionSetterAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak::GALGAS_abstractExtensionSetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak & GALGAS_abstractExtensionSetterAST_2D_weak::operator = (const GALGAS_abstractExtensionSetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak::GALGAS_abstractExtensionSetterAST_2D_weak (const GALGAS_abstractExtensionSetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak GALGAS_abstractExtensionSetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST GALGAS_abstractExtensionSetterAST_2D_weak::bang_abstractExtensionSetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionSetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterAST) ;
      result = GALGAS_abstractExtensionSetterAST ((cPtr_abstractExtensionSetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ("abstractExtensionSetterAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterAST_2D_weak GALGAS_abstractExtensionSetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterAST_2D_weak result ;
  const GALGAS_abstractExtensionSetterAST_2D_weak * p = (const GALGAS_abstractExtensionSetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractExtensionSetterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_abstractExtensionSetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_abstractExtensionSetterForGeneration * p = (const cPtr_abstractExtensionSetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterName.objectCompare (p->mProperty_mAbstractExtensionSetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAbstractExtensionSetterFormalParameterList.objectCompare (p->mProperty_mAbstractExtensionSetterFormalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_abstractExtensionSetterForGeneration::objectCompare (const GALGAS_abstractExtensionSetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_abstractExtensionSetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                                       GALGAS_string::constructor_default (HERE),
                                                                       GALGAS_formalParameterListForGeneration::constructor_emptyList (HERE)
                                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration::GALGAS_abstractExtensionSetterForGeneration (const cPtr_abstractExtensionSetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractExtensionSetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                                          const GALGAS_string & inAttribute_mAbstractExtensionSetterName,
                                                                                                          const GALGAS_formalParameterListForGeneration & inAttribute_mAbstractExtensionSetterFormalParameterList
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mAbstractExtensionSetterName.isValid () && inAttribute_mAbstractExtensionSetterFormalParameterList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_abstractExtensionSetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mAbstractExtensionSetterName, inAttribute_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_abstractExtensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_abstractExtensionSetterForGeneration::readProperty_mAbstractExtensionSetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalParameterListForGeneration () ;
  }else{
    cPtr_abstractExtensionSetterForGeneration * p = (cPtr_abstractExtensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractExtensionSetterForGeneration) ;
    return p->mProperty_mAbstractExtensionSetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractExtensionSetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractExtensionSetterForGeneration::cPtr_abstractExtensionSetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                                      const GALGAS_string & in_mAbstractExtensionSetterName,
                                                                                      const GALGAS_formalParameterListForGeneration & in_mAbstractExtensionSetterFormalParameterList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mAbstractExtensionSetterName (in_mAbstractExtensionSetterName),
mProperty_mAbstractExtensionSetterFormalParameterList (in_mAbstractExtensionSetterFormalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_abstractExtensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

void cPtr_abstractExtensionSetterForGeneration::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "[@abstractExtensionSetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAbstractExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_abstractExtensionSetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_abstractExtensionSetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mAbstractExtensionSetterName, mProperty_mAbstractExtensionSetterFormalParameterList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ("abstractExtensionSetterForGeneration",
                                                             & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration result ;
  const GALGAS_abstractExtensionSetterForGeneration * p = (const GALGAS_abstractExtensionSetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractExtensionSetterForGeneration_2D_weak::objectCompare (const GALGAS_abstractExtensionSetterForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak & GALGAS_abstractExtensionSetterForGeneration_2D_weak::operator = (const GALGAS_abstractExtensionSetterForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak::GALGAS_abstractExtensionSetterForGeneration_2D_weak (const GALGAS_abstractExtensionSetterForGeneration & inSource) :
GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak GALGAS_abstractExtensionSetterForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration GALGAS_abstractExtensionSetterForGeneration_2D_weak::bang_abstractExtensionSetterForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractExtensionSetterForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionSetterForGeneration) ;
      result = GALGAS_abstractExtensionSetterForGeneration ((cPtr_abstractExtensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractExtensionSetterForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ("abstractExtensionSetterForGeneration-weak",
                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractExtensionSetterForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionSetterForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractExtensionSetterForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractExtensionSetterForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractExtensionSetterForGeneration_2D_weak GALGAS_abstractExtensionSetterForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_abstractExtensionSetterForGeneration_2D_weak result ;
  const GALGAS_abstractExtensionSetterForGeneration_2D_weak * p = (const GALGAS_abstractExtensionSetterForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractExtensionSetterForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractExtensionSetterForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @extensionGetterAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionGetterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterAST * p = (const cPtr_extensionGetterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mIsPredefined.objectCompare (p->mProperty_mIsPredefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypeName.objectCompare (p->mProperty_mTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterName.objectCompare (p->mProperty_mExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterFormalInputParameterList.objectCompare (p->mProperty_mExtensionGetterFormalInputParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterReturnedTypeName.objectCompare (p->mProperty_mExtensionGetterReturnedTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterReturnedVariableName.objectCompare (p->mProperty_mExtensionGetterReturnedVariableName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterInstructionList.objectCompare (p->mProperty_mExtensionGetterInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfReaderLocation.objectCompare (p->mProperty_mEndOfReaderLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extensionGetterAST::objectCompare (const GALGAS_extensionGetterAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (void) :
GALGAS_semanticDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterAST::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_formalInputParameterListAST::constructor_emptyList (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_lstring::constructor_default (HERE),
                                                     GALGAS_semanticInstructionListAST::constructor_emptyList (HERE),
                                                     GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST::GALGAS_extensionGetterAST (const cPtr_extensionGetterAST * inSourcePtr) :
GALGAS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::constructor_new (const GALGAS_bool & inAttribute_mIsPredefined,
                                                                      const GALGAS_lstring & inAttribute_mTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterName,
                                                                      const GALGAS_formalInputParameterListAST & inAttribute_mExtensionGetterFormalInputParameterList,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedTypeName,
                                                                      const GALGAS_lstring & inAttribute_mExtensionGetterReturnedVariableName,
                                                                      const GALGAS_semanticInstructionListAST & inAttribute_mExtensionGetterInstructionList,
                                                                      const GALGAS_location & inAttribute_mEndOfReaderLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  if (inAttribute_mIsPredefined.isValid () && inAttribute_mTypeName.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mExtensionGetterFormalInputParameterList.isValid () && inAttribute_mExtensionGetterReturnedTypeName.isValid () && inAttribute_mExtensionGetterReturnedVariableName.isValid () && inAttribute_mExtensionGetterInstructionList.isValid () && inAttribute_mEndOfReaderLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterAST (inAttribute_mIsPredefined, inAttribute_mTypeName, inAttribute_mExtensionGetterName, inAttribute_mExtensionGetterFormalInputParameterList, inAttribute_mExtensionGetterReturnedTypeName, inAttribute_mExtensionGetterReturnedVariableName, inAttribute_mExtensionGetterInstructionList, inAttribute_mEndOfReaderLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListAST GALGAS_extensionGetterAST::readProperty_mExtensionGetterFormalInputParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterFormalInputParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterReturnedTypeName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_extensionGetterAST::readProperty_mExtensionGetterReturnedVariableName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterReturnedVariableName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_extensionGetterAST::readProperty_mExtensionGetterInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mExtensionGetterInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_extensionGetterAST::readProperty_mEndOfReaderLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_extensionGetterAST * p = (cPtr_extensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterAST) ;
    return p->mProperty_mEndOfReaderLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionGetterAST::cPtr_extensionGetterAST (const GALGAS_bool & in_mIsPredefined,
                                                  const GALGAS_lstring & in_mTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterName,
                                                  const GALGAS_formalInputParameterListAST & in_mExtensionGetterFormalInputParameterList,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedTypeName,
                                                  const GALGAS_lstring & in_mExtensionGetterReturnedVariableName,
                                                  const GALGAS_semanticInstructionListAST & in_mExtensionGetterInstructionList,
                                                  const GALGAS_location & in_mEndOfReaderLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_mIsPredefined COMMA_THERE),
mProperty_mTypeName (in_mTypeName),
mProperty_mExtensionGetterName (in_mExtensionGetterName),
mProperty_mExtensionGetterFormalInputParameterList (in_mExtensionGetterFormalInputParameterList),
mProperty_mExtensionGetterReturnedTypeName (in_mExtensionGetterReturnedTypeName),
mProperty_mExtensionGetterReturnedVariableName (in_mExtensionGetterReturnedVariableName),
mProperty_mExtensionGetterInstructionList (in_mExtensionGetterInstructionList),
mProperty_mEndOfReaderLocation (in_mEndOfReaderLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

void cPtr_extensionGetterAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@extensionGetterAST:" ;
  mProperty_mIsPredefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionGetterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterAST (mProperty_mIsPredefined, mProperty_mTypeName, mProperty_mExtensionGetterName, mProperty_mExtensionGetterFormalInputParameterList, mProperty_mExtensionGetterReturnedTypeName, mProperty_mExtensionGetterReturnedVariableName, mProperty_mExtensionGetterInstructionList, mProperty_mEndOfReaderLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterAST ("extensionGetterAST",
                                           & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST result ;
  const GALGAS_extensionGetterAST * p = (const GALGAS_extensionGetterAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_extensionGetterAST_2D_weak::objectCompare (const GALGAS_extensionGetterAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_class * myPtr = (cPtr_weakReference_class *) mObjectPtr ;
    const size_t myObjectPtr = size_t (myPtr->strongObject ()) ;
    cPtr_weakReference_class * operandPtr = (cPtr_weakReference_class *) inOperand.mObjectPtr ;
    const size_t operandObjectPtr = size_t (operandPtr->strongObject ()) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak::GALGAS_extensionGetterAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak & GALGAS_extensionGetterAST_2D_weak::operator = (const GALGAS_extensionGetterAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak::GALGAS_extensionGetterAST_2D_weak (const GALGAS_extensionGetterAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak GALGAS_extensionGetterAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_extensionGetterAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST GALGAS_extensionGetterAST_2D_weak::bang_extensionGetterAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionGetterAST) ;
      result = GALGAS_extensionGetterAST ((cPtr_extensionGetterAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ("extensionGetterAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterAST_2D_weak GALGAS_extensionGetterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterAST_2D_weak result ;
  const GALGAS_extensionGetterAST_2D_weak * p = (const GALGAS_extensionGetterAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @extensionGetterForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_extensionGetterForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_extensionGetterForGeneration * p = (const cPtr_extensionGetterForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mHasHeader.objectCompare (p->mProperty_mHasHeader) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementationCppFileName.objectCompare (p->mProperty_mImplementationCppFileName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mReceiverType.objectCompare (p->mProperty_mReceiverType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterName.objectCompare (p->mProperty_mExtensionGetterName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplementedAsFunction.objectCompare (p->mProperty_mImplementedAsFunction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultType.objectCompare (p->mProperty_mResultType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mResultVarCppName.objectCompare (p->mProperty_mResultVarCppName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExtensionGetterFormalParameterList.objectCompare (p->mProperty_mExtensionGetterFormalParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTypedAttributeList.objectCompare (p->mProperty_mTypedAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSemanticInstructionListForGeneration.objectCompare (p->mProperty_mSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_extensionGetterForGeneration::objectCompare (const GALGAS_extensionGetterForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (void) :
GALGAS_semanticDeclarationWithHeaderForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_extensionGetterForGeneration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE),
                                                               GALGAS_unifiedTypeMap_2D_entry::constructor_null (HERE),
                                                               GALGAS_string::constructor_default (HERE),
                                                               GALGAS_formalInputParameterListForGeneration::constructor_emptyList (HERE),
                                                               GALGAS_typedPropertyList::constructor_emptyList (HERE),
                                                               GALGAS_semanticInstructionListForGeneration::constructor_emptyList (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration::GALGAS_extensionGetterForGeneration (const cPtr_extensionGetterForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionGetterForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::constructor_new (const GALGAS_bool & inAttribute_mHasHeader,
                                                                                          const GALGAS_string & inAttribute_mImplementationCppFileName,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mReceiverType,
                                                                                          const GALGAS_string & inAttribute_mExtensionGetterName,
                                                                                          const GALGAS_bool & inAttribute_mImplementedAsFunction,
                                                                                          const GALGAS_unifiedTypeMap_2D_entry & inAttribute_mResultType,
                                                                                          const GALGAS_string & inAttribute_mResultVarCppName,
                                                                                          const GALGAS_formalInputParameterListForGeneration & inAttribute_mExtensionGetterFormalParameterList,
                                                                                          const GALGAS_typedPropertyList & inAttribute_mTypedAttributeList,
                                                                                          const GALGAS_semanticInstructionListForGeneration & inAttribute_mSemanticInstructionListForGeneration
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration result ;
  if (inAttribute_mHasHeader.isValid () && inAttribute_mImplementationCppFileName.isValid () && inAttribute_mReceiverType.isValid () && inAttribute_mExtensionGetterName.isValid () && inAttribute_mImplementedAsFunction.isValid () && inAttribute_mResultType.isValid () && inAttribute_mResultVarCppName.isValid () && inAttribute_mExtensionGetterFormalParameterList.isValid () && inAttribute_mTypedAttributeList.isValid () && inAttribute_mSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_extensionGetterForGeneration (inAttribute_mHasHeader, inAttribute_mImplementationCppFileName, inAttribute_mReceiverType, inAttribute_mExtensionGetterName, inAttribute_mImplementedAsFunction, inAttribute_mResultType, inAttribute_mResultVarCppName, inAttribute_mExtensionGetterFormalParameterList, inAttribute_mTypedAttributeList, inAttribute_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_extensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionGetterForGeneration::readProperty_mExtensionGetterName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mExtensionGetterName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_extensionGetterForGeneration::readProperty_mImplementedAsFunction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mImplementedAsFunction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_extensionGetterForGeneration::readProperty_mResultType (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_unifiedTypeMap_2D_entry () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_extensionGetterForGeneration::readProperty_mResultVarCppName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mResultVarCppName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_extensionGetterForGeneration::readProperty_mExtensionGetterFormalParameterList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mExtensionGetterFormalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typedPropertyList GALGAS_extensionGetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typedPropertyList () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_extensionGetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionGetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @extensionGetterForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_extensionGetterForGeneration::cPtr_extensionGetterForGeneration (const GALGAS_bool & in_mHasHeader,
                                                                      const GALGAS_string & in_mImplementationCppFileName,
                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mReceiverType,
                                                                      const GALGAS_string & in_mExtensionGetterName,
                                                                      const GALGAS_bool & in_mImplementedAsFunction,
                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mResultType,
                                                                      const GALGAS_string & in_mResultVarCppName,
                                                                      const GALGAS_formalInputParameterListForGeneration & in_mExtensionGetterFormalParameterList,
                                                                      const GALGAS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GALGAS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_mHasHeader, in_mImplementationCppFileName COMMA_THERE),
mProperty_mReceiverType (in_mReceiverType),
mProperty_mExtensionGetterName (in_mExtensionGetterName),
mProperty_mImplementedAsFunction (in_mImplementedAsFunction),
mProperty_mResultType (in_mResultType),
mProperty_mResultVarCppName (in_mResultVarCppName),
mProperty_mExtensionGetterFormalParameterList (in_mExtensionGetterFormalParameterList),
mProperty_mTypedAttributeList (in_mTypedAttributeList),
mProperty_mSemanticInstructionListForGeneration (in_mSemanticInstructionListForGeneration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_extensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

void cPtr_extensionGetterForGeneration::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@extensionGetterForGeneration:" ;
  mProperty_mHasHeader.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementationCppFileName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_extensionGetterForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_extensionGetterForGeneration (mProperty_mHasHeader, mProperty_mImplementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionGetterName, mProperty_mImplementedAsFunction, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@extensionGetterForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterForGeneration ("extensionGetterForGeneration",
                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_extensionGetterForGeneration GALGAS_extensionGetterForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterForGeneration result ;
  const GALGAS_extensionGetterForGeneration * p = (const GALGAS_extensionGetterForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_extensionGetterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

