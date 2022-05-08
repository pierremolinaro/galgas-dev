#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputExpressionList enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const GALGAS_actualOutputExpressionList inObject,
                                             GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_actualOutputExpressionList temp_0 = inObject ;
  cEnumerator_actualOutputExpressionList enumerator_2313 (temp_0, kENUMERATION_UP) ;
  while (enumerator_2313.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_2313.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 61)) ;
    enumerator_2313.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
// @trueExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_trueExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_trueExpressionAST * p = (const cPtr_trueExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_trueExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_trueExpressionAST::objectCompare (const GALGAS_trueExpressionAST & inOperand) const {
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

GALGAS_trueExpressionAST::GALGAS_trueExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_trueExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST::GALGAS_trueExpressionAST (const cPtr_trueExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_trueExpressionAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_trueExpressionAST::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_trueExpressionAST * p = (cPtr_trueExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_trueExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_trueExpressionAST::cPtr_trueExpressionAST (const GALGAS_location & in_mLocation
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_trueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

void cPtr_trueExpressionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@trueExpressionAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_trueExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_trueExpressionAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionAST ("trueExpressionAST",
                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST GALGAS_trueExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionAST result ;
  const GALGAS_trueExpressionAST * p = (const GALGAS_trueExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_trueExpressionAST_2D_weak::objectCompare (const GALGAS_trueExpressionAST_2D_weak & inOperand) const {
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

GALGAS_trueExpressionAST_2D_weak::GALGAS_trueExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST_2D_weak & GALGAS_trueExpressionAST_2D_weak::operator = (const GALGAS_trueExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST_2D_weak::GALGAS_trueExpressionAST_2D_weak (const GALGAS_trueExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST_2D_weak GALGAS_trueExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_trueExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST GALGAS_trueExpressionAST_2D_weak::bang_trueExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_trueExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpressionAST) ;
      result = GALGAS_trueExpressionAST ((cPtr_trueExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@trueExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_trueExpressionAST_2D_weak ("trueExpressionAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_trueExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_trueExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_trueExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_trueExpressionAST_2D_weak GALGAS_trueExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_trueExpressionAST_2D_weak result ;
  const GALGAS_trueExpressionAST_2D_weak * p = (const GALGAS_trueExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_trueExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("trueExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @falseExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_falseExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_falseExpressionAST * p = (const cPtr_falseExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_falseExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_falseExpressionAST::objectCompare (const GALGAS_falseExpressionAST & inOperand) const {
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

GALGAS_falseExpressionAST::GALGAS_falseExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_falseExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST::GALGAS_falseExpressionAST (const cPtr_falseExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionAST result ;
  if (inAttribute_mLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_falseExpressionAST (inAttribute_mLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_falseExpressionAST::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_falseExpressionAST * p = (cPtr_falseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_falseExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_falseExpressionAST::cPtr_falseExpressionAST (const GALGAS_location & in_mLocation
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLocation (in_mLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_falseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

void cPtr_falseExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@falseExpressionAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_falseExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_falseExpressionAST (mProperty_mLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpressionAST ("falseExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST GALGAS_falseExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionAST result ;
  const GALGAS_falseExpressionAST * p = (const GALGAS_falseExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_falseExpressionAST_2D_weak::objectCompare (const GALGAS_falseExpressionAST_2D_weak & inOperand) const {
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

GALGAS_falseExpressionAST_2D_weak::GALGAS_falseExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST_2D_weak & GALGAS_falseExpressionAST_2D_weak::operator = (const GALGAS_falseExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST_2D_weak::GALGAS_falseExpressionAST_2D_weak (const GALGAS_falseExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST_2D_weak GALGAS_falseExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_falseExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST GALGAS_falseExpressionAST_2D_weak::bang_falseExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_falseExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpressionAST) ;
      result = GALGAS_falseExpressionAST ((cPtr_falseExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@falseExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_falseExpressionAST_2D_weak ("falseExpressionAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_falseExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_falseExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_falseExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_falseExpressionAST_2D_weak GALGAS_falseExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_falseExpressionAST_2D_weak result ;
  const GALGAS_falseExpressionAST_2D_weak * p = (const GALGAS_falseExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_falseExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("falseExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @literalStringExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_literalStringExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_literalStringExpressionAST * p = (const cPtr_literalStringExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocation.objectCompare (p->mProperty_mLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mStringSequence.objectCompare (p->mProperty_mStringSequence) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_literalStringExpressionAST::objectCompare (const GALGAS_literalStringExpressionAST & inOperand) const {
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

GALGAS_literalStringExpressionAST::GALGAS_literalStringExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_literalStringExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                             GALGAS_stringlist::constructor_emptyList (HERE)
                                                             COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST::GALGAS_literalStringExpressionAST (const cPtr_literalStringExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::constructor_new (const GALGAS_location & inAttribute_mLocation,
                                                                                      const GALGAS_stringlist & inAttribute_mStringSequence
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST result ;
  if (inAttribute_mLocation.isValid () && inAttribute_mStringSequence.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_literalStringExpressionAST (inAttribute_mLocation, inAttribute_mStringSequence COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_literalStringExpressionAST::readProperty_mLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_literalStringExpressionAST::readProperty_mStringSequence (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringlist () ;
  }else{
    cPtr_literalStringExpressionAST * p = (cPtr_literalStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionAST) ;
    return p->mProperty_mStringSequence ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionAST::cPtr_literalStringExpressionAST (const GALGAS_location & in_mLocation,
                                                                  const GALGAS_stringlist & in_mStringSequence
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mLocation (in_mLocation),
mProperty_mStringSequence (in_mStringSequence) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_literalStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

void cPtr_literalStringExpressionAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@literalStringExpressionAST:" ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mStringSequence.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_literalStringExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_literalStringExpressionAST (mProperty_mLocation, mProperty_mStringSequence COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@literalStringExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringExpressionAST ("literalStringExpressionAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST result ;
  const GALGAS_literalStringExpressionAST * p = (const GALGAS_literalStringExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_literalStringExpressionAST_2D_weak::objectCompare (const GALGAS_literalStringExpressionAST_2D_weak & inOperand) const {
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

GALGAS_literalStringExpressionAST_2D_weak::GALGAS_literalStringExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST_2D_weak & GALGAS_literalStringExpressionAST_2D_weak::operator = (const GALGAS_literalStringExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST_2D_weak::GALGAS_literalStringExpressionAST_2D_weak (const GALGAS_literalStringExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST_2D_weak GALGAS_literalStringExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST GALGAS_literalStringExpressionAST_2D_weak::bang_literalStringExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_literalStringExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalStringExpressionAST) ;
      result = GALGAS_literalStringExpressionAST ((cPtr_literalStringExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@literalStringExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_literalStringExpressionAST_2D_weak ("literalStringExpressionAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_literalStringExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_literalStringExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_literalStringExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_literalStringExpressionAST_2D_weak GALGAS_literalStringExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_literalStringExpressionAST_2D_weak result ;
  const GALGAS_literalStringExpressionAST_2D_weak * p = (const GALGAS_literalStringExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_literalStringExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison::GALGAS_comparison (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_lowerThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_lowerThan ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_greaterThan (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_greaterThan ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_sameInstance (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_sameInstance ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::constructor_differentInstances (UNUSED_LOCATION_ARGS) {
  GALGAS_comparison result ;
  result.mEnum = kEnum_differentInstances ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_equal () const {
  const bool ok = mEnum == kEnum_equal ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_notEqual () const {
  const bool ok = mEnum == kEnum_notEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerOrEqual () const {
  const bool ok = mEnum == kEnum_lowerOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_lowerThan () const {
  const bool ok = mEnum == kEnum_lowerThan ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterOrEqual () const {
  const bool ok = mEnum == kEnum_greaterOrEqual ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_greaterThan () const {
  const bool ok = mEnum == kEnum_greaterThan ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_sameInstance () const {
  const bool ok = mEnum == kEnum_sameInstance ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_comparison::optional_differentInstances () const {
  const bool ok = mEnum == kEnum_differentInstances ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_comparison [9] = {
  "(not built)",
  "equal",
  "notEqual",
  "lowerOrEqual",
  "lowerThan",
  "greaterOrEqual",
  "greaterThan",
  "sameInstance",
  "differentInstances"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerThan == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterThan == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isSameInstance (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sameInstance == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_comparison::getter_isDifferentInstances (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_differentInstances == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparison::description (C_String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString << "<enum @comparison: " << gEnumNameArrayFor_comparison [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparison::objectCompare (const GALGAS_comparison & inOperand) const {
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
//@comparison type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparison ("comparison",
                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparison::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparison (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparison::extractObject (const GALGAS_object & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_comparison result ;
  const GALGAS_comparison * p = (const GALGAS_comparison *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparison *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparison", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @comparisonExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_comparisonExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_comparisonExpressionAST * p = (const cPtr_comparisonExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComparison.objectCompare (p->mProperty_mComparison) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_comparisonExpressionAST::objectCompare (const GALGAS_comparisonExpressionAST & inOperand) const {
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

GALGAS_comparisonExpressionAST::GALGAS_comparisonExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST::GALGAS_comparisonExpressionAST (const cPtr_comparisonExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST GALGAS_comparisonExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_comparison & inAttribute_mComparison,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mComparison.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_comparisonExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mComparison, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMComparison (GALGAS_comparison inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mComparison = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_comparisonExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_comparisonExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_comparisonExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparison GALGAS_comparisonExpressionAST::readProperty_mComparison (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_comparison () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mComparison ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_comparisonExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionAST::cPtr_comparisonExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                            const GALGAS_comparison & in_mComparison,
                                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mComparison (in_mComparison),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_comparisonExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

void cPtr_comparisonExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@comparisonExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_comparisonExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonExpressionAST ("comparisonExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST GALGAS_comparisonExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionAST result ;
  const GALGAS_comparisonExpressionAST * p = (const GALGAS_comparisonExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_comparisonExpressionAST_2D_weak::objectCompare (const GALGAS_comparisonExpressionAST_2D_weak & inOperand) const {
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

GALGAS_comparisonExpressionAST_2D_weak::GALGAS_comparisonExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST_2D_weak & GALGAS_comparisonExpressionAST_2D_weak::operator = (const GALGAS_comparisonExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST_2D_weak::GALGAS_comparisonExpressionAST_2D_weak (const GALGAS_comparisonExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST_2D_weak GALGAS_comparisonExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_comparisonExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST GALGAS_comparisonExpressionAST_2D_weak::bang_comparisonExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_comparisonExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonExpressionAST) ;
      result = GALGAS_comparisonExpressionAST ((cPtr_comparisonExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@comparisonExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonExpressionAST_2D_weak ("comparisonExpressionAST-weak",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_comparisonExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_comparisonExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_comparisonExpressionAST_2D_weak GALGAS_comparisonExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_comparisonExpressionAST_2D_weak result ;
  const GALGAS_comparisonExpressionAST_2D_weak * p = (const GALGAS_comparisonExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_comparisonExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @rightShiftExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_rightShiftExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_rightShiftExpressionAST * p = (const cPtr_rightShiftExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_rightShiftExpressionAST::objectCompare (const GALGAS_rightShiftExpressionAST & inOperand) const {
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

GALGAS_rightShiftExpressionAST::GALGAS_rightShiftExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST::GALGAS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rightShiftExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST GALGAS_rightShiftExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_rightShiftExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_rightShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_rightShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_rightShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @rightShiftExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_rightShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

void cPtr_rightShiftExpressionAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@rightShiftExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_rightShiftExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_rightShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@rightShiftExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rightShiftExpressionAST ("rightShiftExpressionAST",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rightShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rightShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rightShiftExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST GALGAS_rightShiftExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST result ;
  const GALGAS_rightShiftExpressionAST * p = (const GALGAS_rightShiftExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rightShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_rightShiftExpressionAST_2D_weak::objectCompare (const GALGAS_rightShiftExpressionAST_2D_weak & inOperand) const {
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

GALGAS_rightShiftExpressionAST_2D_weak::GALGAS_rightShiftExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST_2D_weak & GALGAS_rightShiftExpressionAST_2D_weak::operator = (const GALGAS_rightShiftExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST_2D_weak::GALGAS_rightShiftExpressionAST_2D_weak (const GALGAS_rightShiftExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST_2D_weak GALGAS_rightShiftExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST GALGAS_rightShiftExpressionAST_2D_weak::bang_rightShiftExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_rightShiftExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_rightShiftExpressionAST) ;
      result = GALGAS_rightShiftExpressionAST ((cPtr_rightShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@rightShiftExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rightShiftExpressionAST_2D_weak ("rightShiftExpressionAST-weak",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rightShiftExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rightShiftExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rightShiftExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_rightShiftExpressionAST_2D_weak GALGAS_rightShiftExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_rightShiftExpressionAST_2D_weak result ;
  const GALGAS_rightShiftExpressionAST_2D_weak * p = (const GALGAS_rightShiftExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_rightShiftExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rightShiftExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @leftShiftExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_leftShiftExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_leftShiftExpressionAST * p = (const cPtr_leftShiftExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_leftShiftExpressionAST::objectCompare (const GALGAS_leftShiftExpressionAST & inOperand) const {
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

GALGAS_leftShiftExpressionAST::GALGAS_leftShiftExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST::GALGAS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST GALGAS_leftShiftExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                              const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                              const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_leftShiftExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_leftShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_leftShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_leftShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                          const GALGAS_semanticExpressionAST & in_mRightExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_leftShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

void cPtr_leftShiftExpressionAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@leftShiftExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_leftShiftExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_leftShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@leftShiftExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftExpressionAST ("leftShiftExpressionAST",
                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_leftShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_leftShiftExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST GALGAS_leftShiftExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST result ;
  const GALGAS_leftShiftExpressionAST * p = (const GALGAS_leftShiftExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_leftShiftExpressionAST_2D_weak::objectCompare (const GALGAS_leftShiftExpressionAST_2D_weak & inOperand) const {
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

GALGAS_leftShiftExpressionAST_2D_weak::GALGAS_leftShiftExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST_2D_weak & GALGAS_leftShiftExpressionAST_2D_weak::operator = (const GALGAS_leftShiftExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST_2D_weak::GALGAS_leftShiftExpressionAST_2D_weak (const GALGAS_leftShiftExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST_2D_weak GALGAS_leftShiftExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST GALGAS_leftShiftExpressionAST_2D_weak::bang_leftShiftExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_leftShiftExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_leftShiftExpressionAST) ;
      result = GALGAS_leftShiftExpressionAST ((cPtr_leftShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@leftShiftExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_leftShiftExpressionAST_2D_weak ("leftShiftExpressionAST-weak",
                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_leftShiftExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_leftShiftExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_leftShiftExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_leftShiftExpressionAST_2D_weak GALGAS_leftShiftExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_leftShiftExpressionAST_2D_weak result ;
  const GALGAS_leftShiftExpressionAST_2D_weak * p = (const GALGAS_leftShiftExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_leftShiftExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("leftShiftExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @addExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_addExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionAST * p = (const cPtr_addExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_addExpressionAST::objectCompare (const GALGAS_addExpressionAST & inOperand) const {
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

GALGAS_addExpressionAST::GALGAS_addExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST::GALGAS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST GALGAS_addExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_addExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

void cPtr_addExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@addExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@addExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionAST ("addExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST GALGAS_addExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionAST result ;
  const GALGAS_addExpressionAST * p = (const GALGAS_addExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_addExpressionAST_2D_weak::objectCompare (const GALGAS_addExpressionAST_2D_weak & inOperand) const {
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

GALGAS_addExpressionAST_2D_weak::GALGAS_addExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST_2D_weak & GALGAS_addExpressionAST_2D_weak::operator = (const GALGAS_addExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST_2D_weak::GALGAS_addExpressionAST_2D_weak (const GALGAS_addExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST_2D_weak GALGAS_addExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_addExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST GALGAS_addExpressionAST_2D_weak::bang_addExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_addExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionAST) ;
      result = GALGAS_addExpressionAST ((cPtr_addExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@addExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionAST_2D_weak ("addExpressionAST-weak",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionAST_2D_weak GALGAS_addExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionAST_2D_weak result ;
  const GALGAS_addExpressionAST_2D_weak * p = (const GALGAS_addExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @addExpressionNoOverflowAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_addExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_addExpressionNoOverflowAST * p = (const cPtr_addExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_addExpressionNoOverflowAST::objectCompare (const GALGAS_addExpressionNoOverflowAST & inOperand) const {
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

GALGAS_addExpressionNoOverflowAST::GALGAS_addExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST::GALGAS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionNoOverflowAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST GALGAS_addExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_addExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_addExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_addExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_addExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

void cPtr_addExpressionNoOverflowAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@addExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_addExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_addExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@addExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ("addExpressionNoOverflowAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST GALGAS_addExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST result ;
  const GALGAS_addExpressionNoOverflowAST * p = (const GALGAS_addExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_addExpressionNoOverflowAST_2D_weak::objectCompare (const GALGAS_addExpressionNoOverflowAST_2D_weak & inOperand) const {
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

GALGAS_addExpressionNoOverflowAST_2D_weak::GALGAS_addExpressionNoOverflowAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST_2D_weak & GALGAS_addExpressionNoOverflowAST_2D_weak::operator = (const GALGAS_addExpressionNoOverflowAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST_2D_weak::GALGAS_addExpressionNoOverflowAST_2D_weak (const GALGAS_addExpressionNoOverflowAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST_2D_weak GALGAS_addExpressionNoOverflowAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST GALGAS_addExpressionNoOverflowAST_2D_weak::bang_addExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_addExpressionNoOverflowAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionNoOverflowAST) ;
      result = GALGAS_addExpressionNoOverflowAST ((cPtr_addExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@addExpressionNoOverflowAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2D_weak ("addExpressionNoOverflowAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_addExpressionNoOverflowAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_addExpressionNoOverflowAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_addExpressionNoOverflowAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_addExpressionNoOverflowAST_2D_weak GALGAS_addExpressionNoOverflowAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_addExpressionNoOverflowAST_2D_weak result ;
  const GALGAS_addExpressionNoOverflowAST_2D_weak * p = (const GALGAS_addExpressionNoOverflowAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_addExpressionNoOverflowAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("addExpressionNoOverflowAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @subExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_subExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionAST * p = (const cPtr_subExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_subExpressionAST::objectCompare (const GALGAS_subExpressionAST & inOperand) const {
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

GALGAS_subExpressionAST::GALGAS_subExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST::GALGAS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST GALGAS_subExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_subExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

void cPtr_subExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@subExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@subExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionAST ("subExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST GALGAS_subExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionAST result ;
  const GALGAS_subExpressionAST * p = (const GALGAS_subExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_subExpressionAST_2D_weak::objectCompare (const GALGAS_subExpressionAST_2D_weak & inOperand) const {
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

GALGAS_subExpressionAST_2D_weak::GALGAS_subExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST_2D_weak & GALGAS_subExpressionAST_2D_weak::operator = (const GALGAS_subExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST_2D_weak::GALGAS_subExpressionAST_2D_weak (const GALGAS_subExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST_2D_weak GALGAS_subExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_subExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST GALGAS_subExpressionAST_2D_weak::bang_subExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_subExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionAST) ;
      result = GALGAS_subExpressionAST ((cPtr_subExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@subExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionAST_2D_weak ("subExpressionAST-weak",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionAST_2D_weak GALGAS_subExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionAST_2D_weak result ;
  const GALGAS_subExpressionAST_2D_weak * p = (const GALGAS_subExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @subExpressionNoOverflowAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_subExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_subExpressionNoOverflowAST * p = (const cPtr_subExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_subExpressionNoOverflowAST::objectCompare (const GALGAS_subExpressionNoOverflowAST & inOperand) const {
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

GALGAS_subExpressionNoOverflowAST::GALGAS_subExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST::GALGAS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST GALGAS_subExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                      const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_subExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_subExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_subExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_subExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

void cPtr_subExpressionNoOverflowAST::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@subExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_subExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@subExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ("subExpressionNoOverflowAST",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST GALGAS_subExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST result ;
  const GALGAS_subExpressionNoOverflowAST * p = (const GALGAS_subExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_subExpressionNoOverflowAST_2D_weak::objectCompare (const GALGAS_subExpressionNoOverflowAST_2D_weak & inOperand) const {
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

GALGAS_subExpressionNoOverflowAST_2D_weak::GALGAS_subExpressionNoOverflowAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST_2D_weak & GALGAS_subExpressionNoOverflowAST_2D_weak::operator = (const GALGAS_subExpressionNoOverflowAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST_2D_weak::GALGAS_subExpressionNoOverflowAST_2D_weak (const GALGAS_subExpressionNoOverflowAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST_2D_weak GALGAS_subExpressionNoOverflowAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST GALGAS_subExpressionNoOverflowAST_2D_weak::bang_subExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_subExpressionNoOverflowAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionNoOverflowAST) ;
      result = GALGAS_subExpressionNoOverflowAST ((cPtr_subExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@subExpressionNoOverflowAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2D_weak ("subExpressionNoOverflowAST-weak",
                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_subExpressionNoOverflowAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_subExpressionNoOverflowAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_subExpressionNoOverflowAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_subExpressionNoOverflowAST_2D_weak GALGAS_subExpressionNoOverflowAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_subExpressionNoOverflowAST_2D_weak result ;
  const GALGAS_subExpressionNoOverflowAST_2D_weak * p = (const GALGAS_subExpressionNoOverflowAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_subExpressionNoOverflowAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subExpressionNoOverflowAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator::GALGAS_binaryOperator (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_rightShift (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_rightShift ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_leftShift (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_leftShift ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_add (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_add ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_addNoOverflow (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_addNoOverflow ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_sub (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_sub ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_subNoOverflow (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_subNoOverflow ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_operator_5F_and (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_operator_5F_and ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_operator_5F_or (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_operator_5F_or ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_operator_5F_xor (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_operator_5F_xor ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_multiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_multiply_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_multiply_5F_operation (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_multiply_5F_operation ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_divide_5F_operation (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_divide_5F_operation ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_divide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_divide_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::constructor_modulo_5F_operation (UNUSED_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  result.mEnum = kEnum_modulo_5F_operation ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_rightShift () const {
  const bool ok = mEnum == kEnum_rightShift ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_leftShift () const {
  const bool ok = mEnum == kEnum_leftShift ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_add () const {
  const bool ok = mEnum == kEnum_add ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_addNoOverflow () const {
  const bool ok = mEnum == kEnum_addNoOverflow ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_sub () const {
  const bool ok = mEnum == kEnum_sub ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_subNoOverflow () const {
  const bool ok = mEnum == kEnum_subNoOverflow ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_operator_5F_and () const {
  const bool ok = mEnum == kEnum_operator_5F_and ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_operator_5F_or () const {
  const bool ok = mEnum == kEnum_operator_5F_or ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_operator_5F_xor () const {
  const bool ok = mEnum == kEnum_operator_5F_xor ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_multiply_5F_operation_5F_no_5F_ovf () const {
  const bool ok = mEnum == kEnum_multiply_5F_operation_5F_no_5F_ovf ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_multiply_5F_operation () const {
  const bool ok = mEnum == kEnum_multiply_5F_operation ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_divide_5F_operation () const {
  const bool ok = mEnum == kEnum_divide_5F_operation ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_divide_5F_operation_5F_no_5F_ovf () const {
  const bool ok = mEnum == kEnum_divide_5F_operation_5F_no_5F_ovf ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_binaryOperator::optional_modulo_5F_operation () const {
  const bool ok = mEnum == kEnum_modulo_5F_operation ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_binaryOperator [15] = {
  "(not built)",
  "rightShift",
  "leftShift",
  "add",
  "addNoOverflow",
  "sub",
  "subNoOverflow",
  "operator_and",
  "operator_or",
  "operator_xor",
  "multiply_operation_no_ovf",
  "multiply_operation",
  "divide_operation",
  "divide_operation_no_ovf",
  "modulo_operation"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rightShift == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_leftShift == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isAdd (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_add == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isAddNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_addNoOverflow == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isSub (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sub == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isSubNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_subNoOverflow == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isOperator_5F_and (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_operator_5F_and == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isOperator_5F_or (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_operator_5F_or == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isOperator_5F_xor (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_operator_5F_xor == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isMultiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_multiply_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isMultiply_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_multiply_5F_operation == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isDivide_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divide_5F_operation == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isDivide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_divide_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_binaryOperator::getter_isModulo_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_modulo_5F_operation == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_binaryOperator::description (C_String & ioString,
                                         const int32_t /* inIndentation */) const {
  ioString << "<enum @binaryOperator: " << gEnumNameArrayFor_binaryOperator [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_binaryOperator::objectCompare (const GALGAS_binaryOperator & inOperand) const {
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
//@binaryOperator type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_binaryOperator ("binaryOperator",
                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_binaryOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperator ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_binaryOperator::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_binaryOperator (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_binaryOperator GALGAS_binaryOperator::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_binaryOperator result ;
  const GALGAS_binaryOperator * p = (const GALGAS_binaryOperator *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_binaryOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binaryOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @multiplicationExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_multiplicationExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multiplicationExpressionAST * p = (const cPtr_multiplicationExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_multiplicationExpressionAST::objectCompare (const GALGAS_multiplicationExpressionAST & inOperand) const {
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

GALGAS_multiplicationExpressionAST::GALGAS_multiplicationExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST::GALGAS_multiplicationExpressionAST (const cPtr_multiplicationExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST GALGAS_multiplicationExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                        const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multiplicationExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_multiplicationExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionAST * p = (cPtr_multiplicationExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionAST::cPtr_multiplicationExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                    const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                    const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_multiplicationExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

void cPtr_multiplicationExpressionAST::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@multiplicationExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_multiplicationExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multiplicationExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@multiplicationExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionAST ("multiplicationExpressionAST",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multiplicationExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST GALGAS_multiplicationExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionAST result ;
  const GALGAS_multiplicationExpressionAST * p = (const GALGAS_multiplicationExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_multiplicationExpressionAST_2D_weak::objectCompare (const GALGAS_multiplicationExpressionAST_2D_weak & inOperand) const {
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

GALGAS_multiplicationExpressionAST_2D_weak::GALGAS_multiplicationExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST_2D_weak & GALGAS_multiplicationExpressionAST_2D_weak::operator = (const GALGAS_multiplicationExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST_2D_weak::GALGAS_multiplicationExpressionAST_2D_weak (const GALGAS_multiplicationExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST_2D_weak GALGAS_multiplicationExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_multiplicationExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST GALGAS_multiplicationExpressionAST_2D_weak::bang_multiplicationExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_multiplicationExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_multiplicationExpressionAST) ;
      result = GALGAS_multiplicationExpressionAST ((cPtr_multiplicationExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@multiplicationExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionAST_2D_weak ("multiplicationExpressionAST-weak",
                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multiplicationExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionAST_2D_weak GALGAS_multiplicationExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionAST_2D_weak result ;
  const GALGAS_multiplicationExpressionAST_2D_weak * p = (const GALGAS_multiplicationExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @multiplicationExpressionNoOverflowAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_multiplicationExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_multiplicationExpressionNoOverflowAST * p = (const cPtr_multiplicationExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_multiplicationExpressionNoOverflowAST::objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST & inOperand) const {
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

GALGAS_multiplicationExpressionNoOverflowAST::GALGAS_multiplicationExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST::GALGAS_multiplicationExpressionNoOverflowAST (const cPtr_multiplicationExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_multiplicationExpressionNoOverflowAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST GALGAS_multiplicationExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                                            const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_multiplicationExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multiplicationExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_multiplicationExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_multiplicationExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_multiplicationExpressionNoOverflowAST * p = (cPtr_multiplicationExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_multiplicationExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @multiplicationExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_multiplicationExpressionNoOverflowAST::cPtr_multiplicationExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_multiplicationExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

void cPtr_multiplicationExpressionNoOverflowAST::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@multiplicationExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_multiplicationExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_multiplicationExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@multiplicationExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ("multiplicationExpressionNoOverflowAST",
                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multiplicationExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST GALGAS_multiplicationExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowAST result ;
  const GALGAS_multiplicationExpressionNoOverflowAST * p = (const GALGAS_multiplicationExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::objectCompare (const GALGAS_multiplicationExpressionNoOverflowAST_2D_weak & inOperand) const {
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

GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::GALGAS_multiplicationExpressionNoOverflowAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST_2D_weak & GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::operator = (const GALGAS_multiplicationExpressionNoOverflowAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::GALGAS_multiplicationExpressionNoOverflowAST_2D_weak (const GALGAS_multiplicationExpressionNoOverflowAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST_2D_weak GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::bang_multiplicationExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_multiplicationExpressionNoOverflowAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_multiplicationExpressionNoOverflowAST) ;
      result = GALGAS_multiplicationExpressionNoOverflowAST ((cPtr_multiplicationExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@multiplicationExpressionNoOverflowAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2D_weak ("multiplicationExpressionNoOverflowAST-weak",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multiplicationExpressionNoOverflowAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multiplicationExpressionNoOverflowAST_2D_weak GALGAS_multiplicationExpressionNoOverflowAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multiplicationExpressionNoOverflowAST_2D_weak result ;
  const GALGAS_multiplicationExpressionNoOverflowAST_2D_weak * p = (const GALGAS_multiplicationExpressionNoOverflowAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multiplicationExpressionNoOverflowAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multiplicationExpressionNoOverflowAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @divisionExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_divisionExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divisionExpressionAST * p = (const cPtr_divisionExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_divisionExpressionAST::objectCompare (const GALGAS_divisionExpressionAST & inOperand) const {
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

GALGAS_divisionExpressionAST::GALGAS_divisionExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST::GALGAS_divisionExpressionAST (const cPtr_divisionExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST GALGAS_divisionExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divisionExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_divisionExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionAST * p = (cPtr_divisionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_divisionExpressionAST::cPtr_divisionExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_divisionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

void cPtr_divisionExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@divisionExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_divisionExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divisionExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@divisionExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionAST ("divisionExpressionAST",
                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divisionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divisionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST GALGAS_divisionExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionAST result ;
  const GALGAS_divisionExpressionAST * p = (const GALGAS_divisionExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_divisionExpressionAST_2D_weak::objectCompare (const GALGAS_divisionExpressionAST_2D_weak & inOperand) const {
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

GALGAS_divisionExpressionAST_2D_weak::GALGAS_divisionExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST_2D_weak & GALGAS_divisionExpressionAST_2D_weak::operator = (const GALGAS_divisionExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST_2D_weak::GALGAS_divisionExpressionAST_2D_weak (const GALGAS_divisionExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST_2D_weak GALGAS_divisionExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_divisionExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST GALGAS_divisionExpressionAST_2D_weak::bang_divisionExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_divisionExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divisionExpressionAST) ;
      result = GALGAS_divisionExpressionAST ((cPtr_divisionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@divisionExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionAST_2D_weak ("divisionExpressionAST-weak",
                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divisionExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divisionExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionAST_2D_weak GALGAS_divisionExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionAST_2D_weak result ;
  const GALGAS_divisionExpressionAST_2D_weak * p = (const GALGAS_divisionExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @divisionExpressionNoOverflowAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_divisionExpressionNoOverflowAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_divisionExpressionNoOverflowAST * p = (const cPtr_divisionExpressionNoOverflowAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_divisionExpressionNoOverflowAST::objectCompare (const GALGAS_divisionExpressionNoOverflowAST & inOperand) const {
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

GALGAS_divisionExpressionNoOverflowAST::GALGAS_divisionExpressionNoOverflowAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST::GALGAS_divisionExpressionNoOverflowAST (const cPtr_divisionExpressionNoOverflowAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_divisionExpressionNoOverflowAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST GALGAS_divisionExpressionNoOverflowAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_divisionExpressionNoOverflowAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionNoOverflowAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionNoOverflowAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_divisionExpressionNoOverflowAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_divisionExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_divisionExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_divisionExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @divisionExpressionNoOverflowAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_divisionExpressionNoOverflowAST::cPtr_divisionExpressionNoOverflowAST (const GALGAS_location & in_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_divisionExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

void cPtr_divisionExpressionNoOverflowAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@divisionExpressionNoOverflowAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_divisionExpressionNoOverflowAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_divisionExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@divisionExpressionNoOverflowAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ("divisionExpressionNoOverflowAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divisionExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divisionExpressionNoOverflowAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionNoOverflowAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST GALGAS_divisionExpressionNoOverflowAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowAST result ;
  const GALGAS_divisionExpressionNoOverflowAST * p = (const GALGAS_divisionExpressionNoOverflowAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionNoOverflowAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionNoOverflowAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_divisionExpressionNoOverflowAST_2D_weak::objectCompare (const GALGAS_divisionExpressionNoOverflowAST_2D_weak & inOperand) const {
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

GALGAS_divisionExpressionNoOverflowAST_2D_weak::GALGAS_divisionExpressionNoOverflowAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST_2D_weak & GALGAS_divisionExpressionNoOverflowAST_2D_weak::operator = (const GALGAS_divisionExpressionNoOverflowAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST_2D_weak::GALGAS_divisionExpressionNoOverflowAST_2D_weak (const GALGAS_divisionExpressionNoOverflowAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST_2D_weak GALGAS_divisionExpressionNoOverflowAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST GALGAS_divisionExpressionNoOverflowAST_2D_weak::bang_divisionExpressionNoOverflowAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_divisionExpressionNoOverflowAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divisionExpressionNoOverflowAST) ;
      result = GALGAS_divisionExpressionNoOverflowAST ((cPtr_divisionExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@divisionExpressionNoOverflowAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2D_weak ("divisionExpressionNoOverflowAST-weak",
                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_divisionExpressionNoOverflowAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_divisionExpressionNoOverflowAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_divisionExpressionNoOverflowAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_divisionExpressionNoOverflowAST_2D_weak GALGAS_divisionExpressionNoOverflowAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_divisionExpressionNoOverflowAST_2D_weak result ;
  const GALGAS_divisionExpressionNoOverflowAST_2D_weak * p = (const GALGAS_divisionExpressionNoOverflowAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_divisionExpressionNoOverflowAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("divisionExpressionNoOverflowAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @moduloExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_moduloExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_moduloExpressionAST * p = (const cPtr_moduloExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_moduloExpressionAST::objectCompare (const GALGAS_moduloExpressionAST & inOperand) const {
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

GALGAS_moduloExpressionAST::GALGAS_moduloExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST::GALGAS_moduloExpressionAST (const cPtr_moduloExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_moduloExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST GALGAS_moduloExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_moduloExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_moduloExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_moduloExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_moduloExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_moduloExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_moduloExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_moduloExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_moduloExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @moduloExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_moduloExpressionAST::cPtr_moduloExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                    const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                    const GALGAS_semanticExpressionAST & in_mRightExpression
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_moduloExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

void cPtr_moduloExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@moduloExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_moduloExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_moduloExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@moduloExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduloExpressionAST ("moduloExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_moduloExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_moduloExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduloExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST GALGAS_moduloExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_moduloExpressionAST result ;
  const GALGAS_moduloExpressionAST * p = (const GALGAS_moduloExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduloExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduloExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_moduloExpressionAST_2D_weak::objectCompare (const GALGAS_moduloExpressionAST_2D_weak & inOperand) const {
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

GALGAS_moduloExpressionAST_2D_weak::GALGAS_moduloExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST_2D_weak & GALGAS_moduloExpressionAST_2D_weak::operator = (const GALGAS_moduloExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST_2D_weak::GALGAS_moduloExpressionAST_2D_weak (const GALGAS_moduloExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST_2D_weak GALGAS_moduloExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_moduloExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST GALGAS_moduloExpressionAST_2D_weak::bang_moduloExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_moduloExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_moduloExpressionAST) ;
      result = GALGAS_moduloExpressionAST ((cPtr_moduloExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@moduloExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_moduloExpressionAST_2D_weak ("moduloExpressionAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_moduloExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_moduloExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_moduloExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_moduloExpressionAST_2D_weak GALGAS_moduloExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_moduloExpressionAST_2D_weak result ;
  const GALGAS_moduloExpressionAST_2D_weak * p = (const GALGAS_moduloExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_moduloExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("moduloExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@collectionValueElementList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_collectionValueElementList : public cCollectionElement {
  public: GALGAS_collectionValueElementList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_collectionValueElementList (const GALGAS_abstractCollectionValueElement & in_mElement
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_collectionValueElementList (const GALGAS_collectionValueElementList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_collectionValueElementList::cCollectionElement_collectionValueElementList (const GALGAS_abstractCollectionValueElement & in_mElement
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_collectionValueElementList::cCollectionElement_collectionValueElementList (const GALGAS_collectionValueElementList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_collectionValueElementList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_collectionValueElementList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_collectionValueElementList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_collectionValueElementList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_collectionValueElementList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_collectionValueElementList * operand = (cCollectionElement_collectionValueElementList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_collectionValueElementList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList::GALGAS_collectionValueElementList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList::GALGAS_collectionValueElementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_collectionValueElementList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::constructor_listWithValue (const GALGAS_abstractCollectionValueElement & inOperand0
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_collectionValueElementList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_abstractCollectionValueElement & in_mElement
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementList * p = NULL ;
  macroMyNew (p, cCollectionElement_collectionValueElementList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::addAssign_operation (const GALGAS_abstractCollectionValueElement & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_collectionValueElementList::setter_append (GALGAS_collectionValueElementList_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementList (inElement COMMA_THERE)) ;
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

void GALGAS_collectionValueElementList::setter_insertAtIndex (const GALGAS_abstractCollectionValueElement inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_collectionValueElementList::setter_removeAtIndex (GALGAS_abstractCollectionValueElement & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_collectionValueElementList::setter_popFirst (GALGAS_abstractCollectionValueElement & outOperand0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_popLast (GALGAS_abstractCollectionValueElement & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::method_first (GALGAS_abstractCollectionValueElement & outOperand0,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::method_last (GALGAS_abstractCollectionValueElement & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::add_operation (const GALGAS_collectionValueElementList & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementList result = GALGAS_collectionValueElementList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::plusAssign_operation (const GALGAS_collectionValueElementList inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementList::setter_setMElementAtIndex (GALGAS_abstractCollectionValueElement inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement GALGAS_collectionValueElementList::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementList * p = (cCollectionElement_collectionValueElementList *) attributes.ptr () ;
  GALGAS_abstractCollectionValueElement result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_collectionValueElementList::cEnumerator_collectionValueElementList (const GALGAS_collectionValueElementList & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList_2D_element cEnumerator_collectionValueElementList::current (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementList * p = (const cCollectionElement_collectionValueElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement cEnumerator_collectionValueElementList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementList * p = (const cCollectionElement_collectionValueElementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementList) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@collectionValueElementList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementList ("collectionValueElementList",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueElementList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementList GALGAS_collectionValueElementList::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementList result ;
  const GALGAS_collectionValueElementList * p = (const GALGAS_collectionValueElementList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractCollectionValueElement reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractCollectionValueElement::objectCompare (const GALGAS_abstractCollectionValueElement & inOperand) const {
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

GALGAS_abstractCollectionValueElement::GALGAS_abstractCollectionValueElement (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement::GALGAS_abstractCollectionValueElement (const cPtr_abstractCollectionValueElement * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCollectionValueElement) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractCollectionValueElement class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractCollectionValueElement::cPtr_abstractCollectionValueElement (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractCollectionValueElement type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElement ("abstractCollectionValueElement",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElement ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractCollectionValueElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElement (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement GALGAS_abstractCollectionValueElement::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElement result ;
  const GALGAS_abstractCollectionValueElement * p = (const GALGAS_abstractCollectionValueElement *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractCollectionValueElement_2D_weak::objectCompare (const GALGAS_abstractCollectionValueElement_2D_weak & inOperand) const {
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

GALGAS_abstractCollectionValueElement_2D_weak::GALGAS_abstractCollectionValueElement_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement_2D_weak & GALGAS_abstractCollectionValueElement_2D_weak::operator = (const GALGAS_abstractCollectionValueElement & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement_2D_weak::GALGAS_abstractCollectionValueElement_2D_weak (const GALGAS_abstractCollectionValueElement & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement_2D_weak GALGAS_abstractCollectionValueElement_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElement_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement GALGAS_abstractCollectionValueElement_2D_weak::bang_abstractCollectionValueElement_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractCollectionValueElement result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractCollectionValueElement) ;
      result = GALGAS_abstractCollectionValueElement ((cPtr_abstractCollectionValueElement *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractCollectionValueElement-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElement_2D_weak ("abstractCollectionValueElement-weak",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElement_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElement_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractCollectionValueElement_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElement_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElement_2D_weak GALGAS_abstractCollectionValueElement_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElement_2D_weak result ;
  const GALGAS_abstractCollectionValueElement_2D_weak * p = (const GALGAS_abstractCollectionValueElement_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElement_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElement-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @expressionCollectionValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_expressionCollectionValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionCollectionValue * p = (const cPtr_expressionCollectionValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_expressionCollectionValue::objectCompare (const GALGAS_expressionCollectionValue & inOperand) const {
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

GALGAS_expressionCollectionValue::GALGAS_expressionCollectionValue (void) :
GALGAS_abstractCollectionValueElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue::GALGAS_expressionCollectionValue (const cPtr_expressionCollectionValue * inSourcePtr) :
GALGAS_abstractCollectionValueElement (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue GALGAS_expressionCollectionValue::constructor_new (const GALGAS_semanticExpressionAST & inAttribute_mExpression,
                                                                                    const GALGAS_location & inAttribute_mExpressionLocation
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValue result ;
  if (inAttribute_mExpression.isValid () && inAttribute_mExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionCollectionValue (inAttribute_mExpression, inAttribute_mExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionCollectionValue::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_expressionCollectionValue * p = (cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionCollectionValue::setter_setMExpressionLocation (GALGAS_location inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_expressionCollectionValue * p = (cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    p->mProperty_mExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_expressionCollectionValue::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_expressionCollectionValue * p = (cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_expressionCollectionValue::readProperty_mExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_expressionCollectionValue * p = (cPtr_expressionCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionValue) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionCollectionValue::cPtr_expressionCollectionValue (const GALGAS_semanticExpressionAST & in_mExpression,
                                                                const GALGAS_location & in_mExpressionLocation
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElement (THERE),
mProperty_mExpression (in_mExpression),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_expressionCollectionValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValue ;
}

void cPtr_expressionCollectionValue::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@expressionCollectionValue:" ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionCollectionValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionCollectionValue (mProperty_mExpression, mProperty_mExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionCollectionValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionValue ("expressionCollectionValue",
                                                  & kTypeDescriptor_GALGAS_abstractCollectionValueElement) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionCollectionValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionCollectionValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue GALGAS_expressionCollectionValue::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValue result ;
  const GALGAS_expressionCollectionValue * p = (const GALGAS_expressionCollectionValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionCollectionValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_expressionCollectionValue_2D_weak::objectCompare (const GALGAS_expressionCollectionValue_2D_weak & inOperand) const {
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

GALGAS_expressionCollectionValue_2D_weak::GALGAS_expressionCollectionValue_2D_weak (void) :
GALGAS_abstractCollectionValueElement_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue_2D_weak & GALGAS_expressionCollectionValue_2D_weak::operator = (const GALGAS_expressionCollectionValue & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue_2D_weak::GALGAS_expressionCollectionValue_2D_weak (const GALGAS_expressionCollectionValue & inSource) :
GALGAS_abstractCollectionValueElement_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue_2D_weak GALGAS_expressionCollectionValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_expressionCollectionValue_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue GALGAS_expressionCollectionValue_2D_weak::bang_expressionCollectionValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_expressionCollectionValue result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionCollectionValue) ;
      result = GALGAS_expressionCollectionValue ((cPtr_expressionCollectionValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@expressionCollectionValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionCollectionValue_2D_weak ("expressionCollectionValue-weak",
                                                          & kTypeDescriptor_GALGAS_abstractCollectionValueElement_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionCollectionValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionCollectionValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionCollectionValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionCollectionValue_2D_weak GALGAS_expressionCollectionValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_expressionCollectionValue_2D_weak result ;
  const GALGAS_expressionCollectionValue_2D_weak * p = (const GALGAS_expressionCollectionValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionCollectionValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @expressionListCollectionValue reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_expressionListCollectionValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionListCollectionValue * p = (const cPtr_expressionListCollectionValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfExpressionLocation.objectCompare (p->mProperty_mEndOfExpressionLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_expressionListCollectionValue::objectCompare (const GALGAS_expressionListCollectionValue & inOperand) const {
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

GALGAS_expressionListCollectionValue::GALGAS_expressionListCollectionValue (void) :
GALGAS_abstractCollectionValueElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionListCollectionValue::constructor_new (GALGAS_actualOutputExpressionList::constructor_emptyList (HERE),
                                                                GALGAS_location::constructor_nowhere (HERE)
                                                                COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue::GALGAS_expressionListCollectionValue (const cPtr_expressionListCollectionValue * inSourcePtr) :
GALGAS_abstractCollectionValueElement (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionListCollectionValue) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::constructor_new (const GALGAS_actualOutputExpressionList & inAttribute_mExpressionList,
                                                                                            const GALGAS_location & inAttribute_mEndOfExpressionLocation
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue result ;
  if (inAttribute_mExpressionList.isValid () && inAttribute_mEndOfExpressionLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionListCollectionValue (inAttribute_mExpressionList, inAttribute_mEndOfExpressionLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionListCollectionValue::setter_setMExpressionList (GALGAS_actualOutputExpressionList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_expressionListCollectionValue * p = (cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionListCollectionValue::setter_setMEndOfExpressionLocation (GALGAS_location inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_expressionListCollectionValue * p = (cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    p->mProperty_mEndOfExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actualOutputExpressionList GALGAS_expressionListCollectionValue::readProperty_mExpressionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actualOutputExpressionList () ;
  }else{
    cPtr_expressionListCollectionValue * p = (cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    return p->mProperty_mExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_expressionListCollectionValue::readProperty_mEndOfExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_expressionListCollectionValue * p = (cPtr_expressionListCollectionValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionValue) ;
    return p->mProperty_mEndOfExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionListCollectionValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionListCollectionValue::cPtr_expressionListCollectionValue (const GALGAS_actualOutputExpressionList & in_mExpressionList,
                                                                        const GALGAS_location & in_mEndOfExpressionLocation
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElement (THERE),
mProperty_mExpressionList (in_mExpressionList),
mProperty_mEndOfExpressionLocation (in_mEndOfExpressionLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_expressionListCollectionValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionValue ;
}

void cPtr_expressionListCollectionValue::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "[@expressionListCollectionValue:" ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionListCollectionValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionListCollectionValue (mProperty_mExpressionList, mProperty_mEndOfExpressionLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionListCollectionValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionValue ("expressionListCollectionValue",
                                                      & kTypeDescriptor_GALGAS_abstractCollectionValueElement) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionListCollectionValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionListCollectionValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue result ;
  const GALGAS_expressionListCollectionValue * p = (const GALGAS_expressionListCollectionValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_expressionListCollectionValue_2D_weak::objectCompare (const GALGAS_expressionListCollectionValue_2D_weak & inOperand) const {
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

GALGAS_expressionListCollectionValue_2D_weak::GALGAS_expressionListCollectionValue_2D_weak (void) :
GALGAS_abstractCollectionValueElement_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue_2D_weak & GALGAS_expressionListCollectionValue_2D_weak::operator = (const GALGAS_expressionListCollectionValue & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue_2D_weak::GALGAS_expressionListCollectionValue_2D_weak (const GALGAS_expressionListCollectionValue & inSource) :
GALGAS_abstractCollectionValueElement_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue_2D_weak GALGAS_expressionListCollectionValue_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue GALGAS_expressionListCollectionValue_2D_weak::bang_expressionListCollectionValue_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_expressionListCollectionValue result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionListCollectionValue) ;
      result = GALGAS_expressionListCollectionValue ((cPtr_expressionListCollectionValue *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@expressionListCollectionValue-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionValue_2D_weak ("expressionListCollectionValue-weak",
                                                              & kTypeDescriptor_GALGAS_abstractCollectionValueElement_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionListCollectionValue_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionValue_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionListCollectionValue_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionValue_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionValue_2D_weak GALGAS_expressionListCollectionValue_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionValue_2D_weak result ;
  const GALGAS_expressionListCollectionValue_2D_weak * p = (const GALGAS_expressionListCollectionValue_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionValue_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionValue-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext> gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_enterInSemanticContext (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext inMethod) {
  gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractCollectionValueElement_enterInSemanticContext (void) {
  gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractCollectionValueElement_enterInSemanticContext (NULL,
                                                                                  freeExtensionMethod_abstractCollectionValueElement_enterInSemanticContext) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                 GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElement) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElement_enterInSemanticContext f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElement_enterInSemanticContext.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElement analyze'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElement_analyze> gExtensionMethodTable_abstractCollectionValueElement_analyze ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyze (const int32_t inClassIndex,
                                   extensionMethodSignature_abstractCollectionValueElement_analyze inMethod) {
  gExtensionMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractCollectionValueElement_analyze (void) {
  gExtensionMethodTable_abstractCollectionValueElement_analyze.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractCollectionValueElement_analyze (NULL,
                                                                   freeExtensionMethod_abstractCollectionValueElement_analyze) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                  const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constin_inAnalysisContext,
                                  const GALGAS_unifiedTypeMap_2D_entry constin_inElementType,
                                  GALGAS_localVarManager & io_ioVariableMap,
                                  GALGAS_collectionValueElementListForGeneration & io_ioCollectionValueElementListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElement) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElement_analyze f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElement_analyze.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElement_analyze (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElement_analyze.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElement_analyze (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElement_analyze.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, constin_inElementType, io_ioVariableMap, io_ioCollectionValueElementListForGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@collectionValueElementListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_collectionValueElementListForGeneration : public cCollectionElement {
  public: GALGAS_collectionValueElementListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_collectionValueElementListForGeneration::cCollectionElement_collectionValueElementListForGeneration (const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_collectionValueElementListForGeneration::cCollectionElement_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_collectionValueElementListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_collectionValueElementListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_collectionValueElementListForGeneration (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_collectionValueElementListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_collectionValueElementListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_collectionValueElementListForGeneration * operand = (cCollectionElement_collectionValueElementListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_collectionValueElementListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration::GALGAS_collectionValueElementListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_collectionValueElementListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::constructor_listWithValue (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_collectionValueElementListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractCollectionValueElementForGeneration & in_mElement
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::addAssign_operation (const GALGAS_abstractCollectionValueElementForGeneration & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_collectionValueElementListForGeneration::setter_append (GALGAS_collectionValueElementListForGeneration_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_collectionValueElementListForGeneration::setter_insertAtIndex (const GALGAS_abstractCollectionValueElementForGeneration inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_collectionValueElementListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_collectionValueElementListForGeneration::setter_removeAtIndex (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_collectionValueElementListForGeneration::setter_popFirst (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_popLast (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::method_first (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::method_last (GALGAS_abstractCollectionValueElementForGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::add_operation (const GALGAS_collectionValueElementListForGeneration & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_collectionValueElementListForGeneration result = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::plusAssign_operation (const GALGAS_collectionValueElementListForGeneration inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_collectionValueElementListForGeneration::setter_setMElementAtIndex (GALGAS_abstractCollectionValueElementForGeneration inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration GALGAS_collectionValueElementListForGeneration::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_collectionValueElementListForGeneration * p = (cCollectionElement_collectionValueElementListForGeneration *) attributes.ptr () ;
  GALGAS_abstractCollectionValueElementForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_collectionValueElementListForGeneration::cEnumerator_collectionValueElementListForGeneration (const GALGAS_collectionValueElementListForGeneration & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration_2D_element cEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration cEnumerator_collectionValueElementListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_collectionValueElementListForGeneration * p = (const cCollectionElement_collectionValueElementListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_collectionValueElementListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@collectionValueElementListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ("collectionValueElementListForGeneration",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_collectionValueElementListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_collectionValueElementListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_collectionValueElementListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_collectionValueElementListForGeneration GALGAS_collectionValueElementListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_collectionValueElementListForGeneration result ;
  const GALGAS_collectionValueElementListForGeneration * p = (const GALGAS_collectionValueElementListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_collectionValueElementListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueElementListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractCollectionValueElementForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractCollectionValueElementForGeneration::objectCompare (const GALGAS_abstractCollectionValueElementForGeneration & inOperand) const {
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

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration::GALGAS_abstractCollectionValueElementForGeneration (const cPtr_abstractCollectionValueElementForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractCollectionValueElementForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractCollectionValueElementForGeneration::setter_setMExpressionLocation (GALGAS_location inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractCollectionValueElementForGeneration * p = (cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCollectionValueElementForGeneration) ;
    p->mProperty_mExpressionLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_abstractCollectionValueElementForGeneration::readProperty_mExpressionLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_abstractCollectionValueElementForGeneration * p = (cPtr_abstractCollectionValueElementForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractCollectionValueElementForGeneration) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractCollectionValueElementForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractCollectionValueElementForGeneration::cPtr_abstractCollectionValueElementForGeneration (const GALGAS_location & in_mExpressionLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mExpressionLocation (in_mExpressionLocation) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractCollectionValueElementForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ("abstractCollectionValueElementForGeneration",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractCollectionValueElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElementForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration GALGAS_abstractCollectionValueElementForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElementForGeneration result ;
  const GALGAS_abstractCollectionValueElementForGeneration * p = (const GALGAS_abstractCollectionValueElementForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractCollectionValueElementForGeneration_2D_weak::objectCompare (const GALGAS_abstractCollectionValueElementForGeneration_2D_weak & inOperand) const {
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

GALGAS_abstractCollectionValueElementForGeneration_2D_weak::GALGAS_abstractCollectionValueElementForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration_2D_weak & GALGAS_abstractCollectionValueElementForGeneration_2D_weak::operator = (const GALGAS_abstractCollectionValueElementForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration_2D_weak::GALGAS_abstractCollectionValueElementForGeneration_2D_weak (const GALGAS_abstractCollectionValueElementForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration_2D_weak GALGAS_abstractCollectionValueElementForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElementForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration GALGAS_abstractCollectionValueElementForGeneration_2D_weak::bang_abstractCollectionValueElementForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractCollectionValueElementForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractCollectionValueElementForGeneration) ;
      result = GALGAS_abstractCollectionValueElementForGeneration ((cPtr_abstractCollectionValueElementForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractCollectionValueElementForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration_2D_weak ("abstractCollectionValueElementForGeneration-weak",
                                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractCollectionValueElementForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractCollectionValueElementForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractCollectionValueElementForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractCollectionValueElementForGeneration_2D_weak GALGAS_abstractCollectionValueElementForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractCollectionValueElementForGeneration_2D_weak result ;
  const GALGAS_abstractCollectionValueElementForGeneration_2D_weak * p = (const GALGAS_abstractCollectionValueElementForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractCollectionValueElementForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractCollectionValueElementForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractCollectionValueElementForGeneration generateCollectionElementCode'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode> gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_generateCollectionElementCode (const int32_t inClassIndex,
                                                         extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode inMethod) {
  gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (void) {
  gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode (NULL,
                                                                                                      freeExtensionMethod_abstractCollectionValueElementForGeneration_generateCollectionElementCode) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                        const GALGAS_unifiedTypeMap_2D_entry constin_inTargetType,
                                                        GALGAS_string & io_ioGeneratedCode,
                                                        GALGAS_stringset & io_ioInclusionSet,
                                                        GALGAS_uint & io_ioTemporaryVariableIndex,
                                                        GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                                        const GALGAS_string constin_inCppTargetVar,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractCollectionValueElementForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractCollectionValueElementForGeneration_generateCollectionElementCode f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
      f = gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.count ()) {
          f = gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractCollectionValueElementForGeneration_generateCollectionElementCode.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inTargetType, io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inCppTargetVar, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
// @expressionListCollectionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_expressionListCollectionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_expressionListCollectionForGeneration * p = (const cPtr_expressionListCollectionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mExpressionLocation.objectCompare (p->mProperty_mExpressionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpressionList.objectCompare (p->mProperty_mExpressionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_expressionListCollectionForGeneration::objectCompare (const GALGAS_expressionListCollectionForGeneration & inOperand) const {
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

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (void) :
GALGAS_abstractCollectionValueElementForGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_expressionListCollectionForGeneration::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                                        GALGAS_semanticExpressionListForGeneration::constructor_emptyList (HERE)
                                                                        COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration::GALGAS_expressionListCollectionForGeneration (const cPtr_expressionListCollectionForGeneration * inSourcePtr) :
GALGAS_abstractCollectionValueElementForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionListCollectionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::constructor_new (const GALGAS_location & inAttribute_mExpressionLocation,
                                                                                                            const GALGAS_semanticExpressionListForGeneration & inAttribute_mExpressionList
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  if (inAttribute_mExpressionLocation.isValid () && inAttribute_mExpressionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_expressionListCollectionForGeneration (inAttribute_mExpressionLocation, inAttribute_mExpressionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_expressionListCollectionForGeneration::setter_setMExpressionList (GALGAS_semanticExpressionListForGeneration inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_expressionListCollectionForGeneration * p = (cPtr_expressionListCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
    p->mProperty_mExpressionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_expressionListCollectionForGeneration::readProperty_mExpressionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_expressionListCollectionForGeneration * p = (cPtr_expressionListCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionListCollectionForGeneration) ;
    return p->mProperty_mExpressionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @expressionListCollectionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_expressionListCollectionForGeneration::cPtr_expressionListCollectionForGeneration (const GALGAS_location & in_mExpressionLocation,
                                                                                        const GALGAS_semanticExpressionListForGeneration & in_mExpressionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractCollectionValueElementForGeneration (in_mExpressionLocation COMMA_THERE),
mProperty_mExpressionList (in_mExpressionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_expressionListCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

void cPtr_expressionListCollectionForGeneration::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "[@expressionListCollectionForGeneration:" ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_expressionListCollectionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_expressionListCollectionForGeneration (mProperty_mExpressionLocation, mProperty_mExpressionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@expressionListCollectionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ("expressionListCollectionForGeneration",
                                                              & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionListCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionListCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration result ;
  const GALGAS_expressionListCollectionForGeneration * p = (const GALGAS_expressionListCollectionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_expressionListCollectionForGeneration_2D_weak::objectCompare (const GALGAS_expressionListCollectionForGeneration_2D_weak & inOperand) const {
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

GALGAS_expressionListCollectionForGeneration_2D_weak::GALGAS_expressionListCollectionForGeneration_2D_weak (void) :
GALGAS_abstractCollectionValueElementForGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration_2D_weak & GALGAS_expressionListCollectionForGeneration_2D_weak::operator = (const GALGAS_expressionListCollectionForGeneration & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration_2D_weak::GALGAS_expressionListCollectionForGeneration_2D_weak (const GALGAS_expressionListCollectionForGeneration & inSource) :
GALGAS_abstractCollectionValueElementForGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration_2D_weak GALGAS_expressionListCollectionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration GALGAS_expressionListCollectionForGeneration_2D_weak::bang_expressionListCollectionForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_expressionListCollectionForGeneration result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_expressionListCollectionForGeneration) ;
      result = GALGAS_expressionListCollectionForGeneration ((cPtr_expressionListCollectionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@expressionListCollectionForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_expressionListCollectionForGeneration_2D_weak ("expressionListCollectionForGeneration-weak",
                                                                      & kTypeDescriptor_GALGAS_abstractCollectionValueElementForGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_expressionListCollectionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionListCollectionForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_expressionListCollectionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_expressionListCollectionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_expressionListCollectionForGeneration_2D_weak GALGAS_expressionListCollectionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_expressionListCollectionForGeneration_2D_weak result ;
  const GALGAS_expressionListCollectionForGeneration_2D_weak * p = (const GALGAS_expressionListCollectionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_expressionListCollectionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionListCollectionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @selfInExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selfInExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selfInExpressionAST * p = (const cPtr_selfInExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selfInExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelfLocation.objectCompare (p->mProperty_mSelfLocation) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selfInExpressionAST::objectCompare (const GALGAS_selfInExpressionAST & inOperand) const {
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

GALGAS_selfInExpressionAST::GALGAS_selfInExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_selfInExpressionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST::GALGAS_selfInExpressionAST (const cPtr_selfInExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfInExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::constructor_new (const GALGAS_location & inAttribute_mSelfLocation
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST result ;
  if (inAttribute_mSelfLocation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selfInExpressionAST (inAttribute_mSelfLocation COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_selfInExpressionAST::readProperty_mSelfLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_selfInExpressionAST * p = (cPtr_selfInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionAST) ;
    return p->mProperty_mSelfLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @selfInExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_selfInExpressionAST::cPtr_selfInExpressionAST (const GALGAS_location & in_mSelfLocation
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mSelfLocation (in_mSelfLocation) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

void cPtr_selfInExpressionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@selfInExpressionAST:" ;
  mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfInExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selfInExpressionAST (mProperty_mSelfLocation COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@selfInExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfInExpressionAST ("selfInExpressionAST",
                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfInExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST result ;
  const GALGAS_selfInExpressionAST * p = (const GALGAS_selfInExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selfInExpressionAST_2D_weak::objectCompare (const GALGAS_selfInExpressionAST_2D_weak & inOperand) const {
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

GALGAS_selfInExpressionAST_2D_weak::GALGAS_selfInExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST_2D_weak & GALGAS_selfInExpressionAST_2D_weak::operator = (const GALGAS_selfInExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST_2D_weak::GALGAS_selfInExpressionAST_2D_weak (const GALGAS_selfInExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST_2D_weak GALGAS_selfInExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selfInExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST GALGAS_selfInExpressionAST_2D_weak::bang_selfInExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfInExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfInExpressionAST) ;
      result = GALGAS_selfInExpressionAST ((cPtr_selfInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@selfInExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfInExpressionAST_2D_weak ("selfInExpressionAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfInExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfInExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfInExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfInExpressionAST_2D_weak GALGAS_selfInExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfInExpressionAST_2D_weak result ;
  const GALGAS_selfInExpressionAST_2D_weak * p = (const GALGAS_selfInExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfInExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfInExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @notExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_notExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_notExpressionAST * p = (const cPtr_notExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_notExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_notExpressionAST::objectCompare (const GALGAS_notExpressionAST & inOperand) const {
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

GALGAS_notExpressionAST::GALGAS_notExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST::GALGAS_notExpressionAST (const cPtr_notExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST GALGAS_notExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_notExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_notExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_notExpressionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_notExpressionAST * p = (cPtr_notExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_notExpressionAST::cPtr_notExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_notExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

void cPtr_notExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@notExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_notExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_notExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@notExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notExpressionAST ("notExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST GALGAS_notExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionAST result ;
  const GALGAS_notExpressionAST * p = (const GALGAS_notExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_notExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_notExpressionAST_2D_weak::objectCompare (const GALGAS_notExpressionAST_2D_weak & inOperand) const {
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

GALGAS_notExpressionAST_2D_weak::GALGAS_notExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST_2D_weak & GALGAS_notExpressionAST_2D_weak::operator = (const GALGAS_notExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST_2D_weak::GALGAS_notExpressionAST_2D_weak (const GALGAS_notExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST_2D_weak GALGAS_notExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_notExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST GALGAS_notExpressionAST_2D_weak::bang_notExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_notExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_notExpressionAST) ;
      result = GALGAS_notExpressionAST ((cPtr_notExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@notExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_notExpressionAST_2D_weak ("notExpressionAST-weak",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_notExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_notExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_notExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_notExpressionAST_2D_weak GALGAS_notExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_notExpressionAST_2D_weak result ;
  const GALGAS_notExpressionAST_2D_weak * p = (const GALGAS_notExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_notExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @tildeExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_tildeExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_tildeExpressionAST * p = (const cPtr_tildeExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_tildeExpressionAST::objectCompare (const GALGAS_tildeExpressionAST & inOperand) const {
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

GALGAS_tildeExpressionAST::GALGAS_tildeExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST::GALGAS_tildeExpressionAST (const cPtr_tildeExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST GALGAS_tildeExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                      const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_tildeExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_tildeExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_tildeExpressionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_tildeExpressionAST::cPtr_tildeExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                  const GALGAS_semanticExpressionAST & in_mExpression
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tildeExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

void cPtr_tildeExpressionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@tildeExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tildeExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_tildeExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@tildeExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tildeExpressionAST ("tildeExpressionAST",
                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tildeExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tildeExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tildeExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST GALGAS_tildeExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionAST result ;
  const GALGAS_tildeExpressionAST * p = (const GALGAS_tildeExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tildeExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_tildeExpressionAST_2D_weak::objectCompare (const GALGAS_tildeExpressionAST_2D_weak & inOperand) const {
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

GALGAS_tildeExpressionAST_2D_weak::GALGAS_tildeExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST_2D_weak & GALGAS_tildeExpressionAST_2D_weak::operator = (const GALGAS_tildeExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST_2D_weak::GALGAS_tildeExpressionAST_2D_weak (const GALGAS_tildeExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST_2D_weak GALGAS_tildeExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_tildeExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST GALGAS_tildeExpressionAST_2D_weak::bang_tildeExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_tildeExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tildeExpressionAST) ;
      result = GALGAS_tildeExpressionAST ((cPtr_tildeExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@tildeExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tildeExpressionAST_2D_weak ("tildeExpressionAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tildeExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tildeExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tildeExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tildeExpressionAST_2D_weak GALGAS_tildeExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_tildeExpressionAST_2D_weak result ;
  const GALGAS_tildeExpressionAST_2D_weak * p = (const GALGAS_tildeExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tildeExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @bangExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_bangExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_bangExpressionAST * p = (const cPtr_bangExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_bangExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_bangExpressionAST::objectCompare (const GALGAS_bangExpressionAST & inOperand) const {
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

GALGAS_bangExpressionAST::GALGAS_bangExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST::GALGAS_bangExpressionAST (const cPtr_bangExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bangExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST GALGAS_bangExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                    const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bangExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_bangExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bangExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_bangExpressionAST::setter_setMExpression (GALGAS_semanticExpressionAST inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    p->mProperty_mExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_bangExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_bangExpressionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @bangExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_bangExpressionAST::cPtr_bangExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                const GALGAS_semanticExpressionAST & in_mExpression
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_bangExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST ;
}

void cPtr_bangExpressionAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@bangExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_bangExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_bangExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@bangExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bangExpressionAST ("bangExpressionAST",
                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bangExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bangExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bangExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST GALGAS_bangExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bangExpressionAST result ;
  const GALGAS_bangExpressionAST * p = (const GALGAS_bangExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bangExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bangExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_bangExpressionAST_2D_weak::objectCompare (const GALGAS_bangExpressionAST_2D_weak & inOperand) const {
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

GALGAS_bangExpressionAST_2D_weak::GALGAS_bangExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST_2D_weak & GALGAS_bangExpressionAST_2D_weak::operator = (const GALGAS_bangExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST_2D_weak::GALGAS_bangExpressionAST_2D_weak (const GALGAS_bangExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST_2D_weak GALGAS_bangExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_bangExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST GALGAS_bangExpressionAST_2D_weak::bang_bangExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_bangExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bangExpressionAST) ;
      result = GALGAS_bangExpressionAST ((cPtr_bangExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@bangExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bangExpressionAST_2D_weak ("bangExpressionAST-weak",
                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_bangExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_bangExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bangExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bangExpressionAST_2D_weak GALGAS_bangExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bangExpressionAST_2D_weak result ;
  const GALGAS_bangExpressionAST_2D_weak * p = (const GALGAS_bangExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bangExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bangExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @unaryWrappingMinusExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_unaryWrappingMinusExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_unaryWrappingMinusExpressionAST * p = (const cPtr_unaryWrappingMinusExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_unaryWrappingMinusExpressionAST::objectCompare (const GALGAS_unaryWrappingMinusExpressionAST & inOperand) const {
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

GALGAS_unaryWrappingMinusExpressionAST::GALGAS_unaryWrappingMinusExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST::GALGAS_unaryWrappingMinusExpressionAST (const cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST GALGAS_unaryWrappingMinusExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                                const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryWrappingMinusExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_unaryWrappingMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_unaryWrappingMinusExpressionAST::readProperty_mExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & in_mExpression
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryWrappingMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

void cPtr_unaryWrappingMinusExpressionAST::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@unaryWrappingMinusExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryWrappingMinusExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@unaryWrappingMinusExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ("unaryWrappingMinusExpressionAST",
                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryWrappingMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryWrappingMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryWrappingMinusExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST GALGAS_unaryWrappingMinusExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionAST result ;
  const GALGAS_unaryWrappingMinusExpressionAST * p = (const GALGAS_unaryWrappingMinusExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryWrappingMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_unaryWrappingMinusExpressionAST_2D_weak::objectCompare (const GALGAS_unaryWrappingMinusExpressionAST_2D_weak & inOperand) const {
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

GALGAS_unaryWrappingMinusExpressionAST_2D_weak::GALGAS_unaryWrappingMinusExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST_2D_weak & GALGAS_unaryWrappingMinusExpressionAST_2D_weak::operator = (const GALGAS_unaryWrappingMinusExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST_2D_weak::GALGAS_unaryWrappingMinusExpressionAST_2D_weak (const GALGAS_unaryWrappingMinusExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST_2D_weak GALGAS_unaryWrappingMinusExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST GALGAS_unaryWrappingMinusExpressionAST_2D_weak::bang_unaryWrappingMinusExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unaryWrappingMinusExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryWrappingMinusExpressionAST) ;
      result = GALGAS_unaryWrappingMinusExpressionAST ((cPtr_unaryWrappingMinusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@unaryWrappingMinusExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2D_weak ("unaryWrappingMinusExpressionAST-weak",
                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryWrappingMinusExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryWrappingMinusExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryWrappingMinusExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unaryWrappingMinusExpressionAST_2D_weak GALGAS_unaryWrappingMinusExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unaryWrappingMinusExpressionAST_2D_weak result ;
  const GALGAS_unaryWrappingMinusExpressionAST_2D_weak * p = (const GALGAS_unaryWrappingMinusExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unaryWrappingMinusExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @orExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orExpressionAST * p = (const cPtr_orExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orExpressionAST::objectCompare (const GALGAS_orExpressionAST & inOperand) const {
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

GALGAS_orExpressionAST::GALGAS_orExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST::GALGAS_orExpressionAST (const cPtr_orExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST GALGAS_orExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_orExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orExpressionAST::cPtr_orExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                            const GALGAS_semanticExpressionAST & in_mRightExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

void cPtr_orExpressionAST::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@orExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpressionAST ("orExpressionAST",
                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST GALGAS_orExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionAST result ;
  const GALGAS_orExpressionAST * p = (const GALGAS_orExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_orExpressionAST_2D_weak::objectCompare (const GALGAS_orExpressionAST_2D_weak & inOperand) const {
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

GALGAS_orExpressionAST_2D_weak::GALGAS_orExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST_2D_weak & GALGAS_orExpressionAST_2D_weak::operator = (const GALGAS_orExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST_2D_weak::GALGAS_orExpressionAST_2D_weak (const GALGAS_orExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST_2D_weak GALGAS_orExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_orExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST GALGAS_orExpressionAST_2D_weak::bang_orExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orExpressionAST) ;
      result = GALGAS_orExpressionAST ((cPtr_orExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@orExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orExpressionAST_2D_weak ("orExpressionAST-weak",
                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orExpressionAST_2D_weak GALGAS_orExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_orExpressionAST_2D_weak result ;
  const GALGAS_orExpressionAST_2D_weak * p = (const GALGAS_orExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @orShortExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_orShortExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_orShortExpressionAST * p = (const cPtr_orShortExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_orShortExpressionAST::objectCompare (const GALGAS_orShortExpressionAST & inOperand) const {
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

GALGAS_orShortExpressionAST::GALGAS_orShortExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST::GALGAS_orShortExpressionAST (const cPtr_orShortExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST GALGAS_orShortExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orShortExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_orShortExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orShortExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_orShortExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @orShortExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_orShortExpressionAST::cPtr_orShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                      const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                      const GALGAS_semanticExpressionAST & in_mRightExpression
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_orShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

void cPtr_orShortExpressionAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@orShortExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_orShortExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@orShortExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orShortExpressionAST ("orShortExpressionAST",
                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST GALGAS_orShortExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionAST result ;
  const GALGAS_orShortExpressionAST * p = (const GALGAS_orShortExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_orShortExpressionAST_2D_weak::objectCompare (const GALGAS_orShortExpressionAST_2D_weak & inOperand) const {
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

GALGAS_orShortExpressionAST_2D_weak::GALGAS_orShortExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST_2D_weak & GALGAS_orShortExpressionAST_2D_weak::operator = (const GALGAS_orShortExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST_2D_weak::GALGAS_orShortExpressionAST_2D_weak (const GALGAS_orShortExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST_2D_weak GALGAS_orShortExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_orShortExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST GALGAS_orShortExpressionAST_2D_weak::bang_orShortExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_orShortExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orShortExpressionAST) ;
      result = GALGAS_orShortExpressionAST ((cPtr_orShortExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@orShortExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orShortExpressionAST_2D_weak ("orShortExpressionAST-weak",
                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_orShortExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_orShortExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orShortExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_orShortExpressionAST_2D_weak GALGAS_orShortExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_orShortExpressionAST_2D_weak result ;
  const GALGAS_orShortExpressionAST_2D_weak * p = (const GALGAS_orShortExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_orShortExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @xorExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_xorExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_xorExpressionAST * p = (const cPtr_xorExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_xorExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_xorExpressionAST::objectCompare (const GALGAS_xorExpressionAST & inOperand) const {
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

GALGAS_xorExpressionAST::GALGAS_xorExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST::GALGAS_xorExpressionAST (const cPtr_xorExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST GALGAS_xorExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_xorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_xorExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_xorExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @xorExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_xorExpressionAST::cPtr_xorExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_xorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

void cPtr_xorExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@xorExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_xorExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@xorExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpressionAST ("xorExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST GALGAS_xorExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionAST result ;
  const GALGAS_xorExpressionAST * p = (const GALGAS_xorExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_xorExpressionAST_2D_weak::objectCompare (const GALGAS_xorExpressionAST_2D_weak & inOperand) const {
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

GALGAS_xorExpressionAST_2D_weak::GALGAS_xorExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST_2D_weak & GALGAS_xorExpressionAST_2D_weak::operator = (const GALGAS_xorExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST_2D_weak::GALGAS_xorExpressionAST_2D_weak (const GALGAS_xorExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST_2D_weak GALGAS_xorExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_xorExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST GALGAS_xorExpressionAST_2D_weak::bang_xorExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_xorExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorExpressionAST) ;
      result = GALGAS_xorExpressionAST ((cPtr_xorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@xorExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorExpressionAST_2D_weak ("xorExpressionAST-weak",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_xorExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_xorExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_xorExpressionAST_2D_weak GALGAS_xorExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_xorExpressionAST_2D_weak result ;
  const GALGAS_xorExpressionAST_2D_weak * p = (const GALGAS_xorExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_xorExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("xorExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @closedSliceExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_closedSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_closedSliceExpressionAST * p = (const cPtr_closedSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_closedSliceExpressionAST::objectCompare (const GALGAS_closedSliceExpressionAST & inOperand) const {
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

GALGAS_closedSliceExpressionAST::GALGAS_closedSliceExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST::GALGAS_closedSliceExpressionAST (const cPtr_closedSliceExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST GALGAS_closedSliceExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_closedSliceExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_closedSliceExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_closedSliceExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_closedSliceExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @closedSliceExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionAST::cPtr_closedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_closedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

void cPtr_closedSliceExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@closedSliceExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_closedSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_closedSliceExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@closedSliceExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_closedSliceExpressionAST ("closedSliceExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_closedSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST GALGAS_closedSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST result ;
  const GALGAS_closedSliceExpressionAST * p = (const GALGAS_closedSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_closedSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_closedSliceExpressionAST_2D_weak::objectCompare (const GALGAS_closedSliceExpressionAST_2D_weak & inOperand) const {
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

GALGAS_closedSliceExpressionAST_2D_weak::GALGAS_closedSliceExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST_2D_weak & GALGAS_closedSliceExpressionAST_2D_weak::operator = (const GALGAS_closedSliceExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST_2D_weak::GALGAS_closedSliceExpressionAST_2D_weak (const GALGAS_closedSliceExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST_2D_weak GALGAS_closedSliceExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST GALGAS_closedSliceExpressionAST_2D_weak::bang_closedSliceExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_closedSliceExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_closedSliceExpressionAST) ;
      result = GALGAS_closedSliceExpressionAST ((cPtr_closedSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@closedSliceExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_closedSliceExpressionAST_2D_weak ("closedSliceExpressionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_closedSliceExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_closedSliceExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_closedSliceExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_closedSliceExpressionAST_2D_weak GALGAS_closedSliceExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_closedSliceExpressionAST_2D_weak result ;
  const GALGAS_closedSliceExpressionAST_2D_weak * p = (const GALGAS_closedSliceExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_closedSliceExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @openedSliceExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_openedSliceExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_openedSliceExpressionAST * p = (const cPtr_openedSliceExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_openedSliceExpressionAST::objectCompare (const GALGAS_openedSliceExpressionAST & inOperand) const {
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

GALGAS_openedSliceExpressionAST::GALGAS_openedSliceExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST::GALGAS_openedSliceExpressionAST (const cPtr_openedSliceExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_openedSliceExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_openedSliceExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_openedSliceExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_openedSliceExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @openedSliceExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionAST::cPtr_openedSliceExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_openedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

void cPtr_openedSliceExpressionAST::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@openedSliceExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_openedSliceExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_openedSliceExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@openedSliceExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedSliceExpressionAST ("openedSliceExpressionAST",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedSliceExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST result ;
  const GALGAS_openedSliceExpressionAST * p = (const GALGAS_openedSliceExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_openedSliceExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_openedSliceExpressionAST_2D_weak::objectCompare (const GALGAS_openedSliceExpressionAST_2D_weak & inOperand) const {
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

GALGAS_openedSliceExpressionAST_2D_weak::GALGAS_openedSliceExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak & GALGAS_openedSliceExpressionAST_2D_weak::operator = (const GALGAS_openedSliceExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak::GALGAS_openedSliceExpressionAST_2D_weak (const GALGAS_openedSliceExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak GALGAS_openedSliceExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST GALGAS_openedSliceExpressionAST_2D_weak::bang_openedSliceExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_openedSliceExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_openedSliceExpressionAST) ;
      result = GALGAS_openedSliceExpressionAST ((cPtr_openedSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@openedSliceExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_openedSliceExpressionAST_2D_weak ("openedSliceExpressionAST-weak",
                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedSliceExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedSliceExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedSliceExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_openedSliceExpressionAST_2D_weak GALGAS_openedSliceExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_openedSliceExpressionAST_2D_weak result ;
  const GALGAS_openedSliceExpressionAST_2D_weak * p = (const GALGAS_openedSliceExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_openedSliceExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @andShortExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andShortExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andShortExpressionAST * p = (const cPtr_andShortExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andShortExpressionAST::objectCompare (const GALGAS_andShortExpressionAST & inOperand) const {
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

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST::GALGAS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andShortExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andShortExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_andShortExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andShortExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                                        const GALGAS_semanticExpressionAST & in_mRightExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

void cPtr_andShortExpressionAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@andShortExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andShortExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andShortExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andShortExpressionAST ("andShortExpressionAST",
                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST result ;
  const GALGAS_andShortExpressionAST * p = (const GALGAS_andShortExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andShortExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_andShortExpressionAST_2D_weak::objectCompare (const GALGAS_andShortExpressionAST_2D_weak & inOperand) const {
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

GALGAS_andShortExpressionAST_2D_weak::GALGAS_andShortExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak & GALGAS_andShortExpressionAST_2D_weak::operator = (const GALGAS_andShortExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak::GALGAS_andShortExpressionAST_2D_weak (const GALGAS_andShortExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak GALGAS_andShortExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_andShortExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST GALGAS_andShortExpressionAST_2D_weak::bang_andShortExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andShortExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andShortExpressionAST) ;
      result = GALGAS_andShortExpressionAST ((cPtr_andShortExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@andShortExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andShortExpressionAST_2D_weak ("andShortExpressionAST-weak",
                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andShortExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andShortExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andShortExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andShortExpressionAST_2D_weak GALGAS_andShortExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_andShortExpressionAST_2D_weak result ;
  const GALGAS_andShortExpressionAST_2D_weak * p = (const GALGAS_andShortExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andShortExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @andExpressionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_andExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_andExpressionAST * p = (const cPtr_andExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_andExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLeftExpression.objectCompare (p->mProperty_mLeftExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRightExpression.objectCompare (p->mProperty_mRightExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_andExpressionAST::objectCompare (const GALGAS_andExpressionAST & inOperand) const {
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

GALGAS_andExpressionAST::GALGAS_andExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST::GALGAS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpressionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST::constructor_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mLeftExpression,
                                                                  const GALGAS_semanticExpressionAST & inAttribute_mRightExpression
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mLeftExpression.isValid () && inAttribute_mRightExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andExpressionAST (inAttribute_mOperatorLocation, inAttribute_mLeftExpression, inAttribute_mRightExpression COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpressionAST::setter_setMOperatorLocation (GALGAS_location inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    p->mProperty_mOperatorLocation = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpressionAST::setter_setMLeftExpression (GALGAS_semanticExpressionAST inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    p->mProperty_mLeftExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_andExpressionAST::setter_setMRightExpression (GALGAS_semanticExpressionAST inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    p->mProperty_mRightExpression = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_andExpressionAST::readProperty_mOperatorLocation (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::readProperty_mLeftExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_andExpressionAST::readProperty_mRightExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @andExpressionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_andExpressionAST::cPtr_andExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                              const GALGAS_semanticExpressionAST & in_mLeftExpression,
                                              const GALGAS_semanticExpressionAST & in_mRightExpression
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mLeftExpression (in_mLeftExpression),
mProperty_mRightExpression (in_mRightExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_andExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

void cPtr_andExpressionAST::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@andExpressionAST:" ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_andExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@andExpressionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpressionAST ("andExpressionAST",
                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpressionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST result ;
  const GALGAS_andExpressionAST * p = (const GALGAS_andExpressionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_andExpressionAST_2D_weak::objectCompare (const GALGAS_andExpressionAST_2D_weak & inOperand) const {
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

GALGAS_andExpressionAST_2D_weak::GALGAS_andExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak & GALGAS_andExpressionAST_2D_weak::operator = (const GALGAS_andExpressionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak::GALGAS_andExpressionAST_2D_weak (const GALGAS_andExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak GALGAS_andExpressionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_andExpressionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST GALGAS_andExpressionAST_2D_weak::bang_andExpressionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_andExpressionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andExpressionAST) ;
      result = GALGAS_andExpressionAST ((cPtr_andExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@andExpressionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andExpressionAST_2D_weak ("andExpressionAST-weak",
                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_andExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_andExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_andExpressionAST_2D_weak GALGAS_andExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_andExpressionAST_2D_weak result ;
  const GALGAS_andExpressionAST_2D_weak * p = (const GALGAS_andExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_andExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_selfAvailability_available::cEnumAssociatedValues_selfAvailability_available (const GALGAS_unifiedTypeMap_2D_entry & inAssociatedValue0,
                                                                                                    const GALGAS_bool & inAssociatedValue1,
                                                                                                    const GALGAS_bool & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_selfAvailability_available::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_selfAvailability_available::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_selfAvailability_available * ptr = dynamic_cast<const cEnumAssociatedValues_selfAvailability_available *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfAvailability::GALGAS_selfAvailability (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfAvailability GALGAS_selfAvailability::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_selfAvailability result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfAvailability GALGAS_selfAvailability::constructor_available (const GALGAS_unifiedTypeMap_2D_entry & inAssociatedValue0,
                                                                        const GALGAS_bool & inAssociatedValue1,
                                                                        const GALGAS_bool & inAssociatedValue2
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfAvailability result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_available ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_selfAvailability_available (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability::method_available (GALGAS_unifiedTypeMap_2D_entry & outAssociatedValue0,
                                                GALGAS_bool & outAssociatedValue1,
                                                GALGAS_bool & outAssociatedValue2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_available) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @selfAvailability available invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_selfAvailability_available * ptr = (const cEnumAssociatedValues_selfAvailability_available *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_selfAvailability::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_selfAvailability::optional_available (GALGAS_unifiedTypeMap_2D_entry & outAssociatedValue0,
                                                  GALGAS_bool & outAssociatedValue1,
                                                  GALGAS_bool & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_available ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_selfAvailability_available *) unsafePointer () ;
    // const cEnumAssociatedValues_selfAvailability_available * ptr = (const cEnumAssociatedValues_selfAvailability_available *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfAvailability [3] = {
  "(not built)",
  "none",
  "available"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_selfAvailability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_selfAvailability::getter_isAvailable (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_available == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_selfAvailability::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<enum @selfAvailability: " << gEnumNameArrayFor_selfAvailability [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selfAvailability::objectCompare (const GALGAS_selfAvailability & inOperand) const {
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
//@selfAvailability type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selfAvailability ("selfAvailability",
                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfAvailability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfAvailability::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfAvailability (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selfAvailability GALGAS_selfAvailability::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfAvailability result ;
  const GALGAS_selfAvailability * p = (const GALGAS_selfAvailability *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selfAvailability *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression> gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_analyzeSemanticExpression (const int32_t inClassIndex,
                                                     extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression inMethod) {
  gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_semanticExpressionAST_analyzeSemanticExpression (void) {
  gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_semanticExpressionAST_analyzeSemanticExpression (NULL,
                                                                            freeExtensionMethod_semanticExpressionAST_analyzeSemanticExpression) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                    const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                    GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GALGAS_unifiedTypeMap_2D_entry constin_inType,
                                                    const GALGAS_analysisContext constin_inAnalysisContext,
                                                    GALGAS_localVarManager & io_ioVariableMap,
                                                    GALGAS_semanticExpressionForGeneration & out_outExpression,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_semanticExpressionAST_analyzeSemanticExpression f = NULL ;
    if (classIndex < gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
      f = gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.count ()) {
          f = gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_semanticExpressionAST_analyzeSemanticExpression.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inType, constin_inAnalysisContext, io_ioVariableMap, out_outExpression, inCompiler COMMA_THERE) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@castInstructionBranchListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListAST : public cCollectionElement {
  public: GALGAS_castInstructionBranchListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                           const GALGAS_lstring & in_mConstantVarName,
                                                           const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                           const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                           const GALGAS_location & in_mEndOfInstructions
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_lstring & in_mTypeName,
                                                                                                  const GALGAS_lstring & in_mConstantVarName,
                                                                                                  const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                                  const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                  const GALGAS_location & in_mEndOfInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mConstantVarName, in_mInstructionList, in_mTypeComparisonKind, in_mEndOfInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mConstantVarName, inElement.mProperty_mInstructionList, inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mEndOfInstructions) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListAST (mObject.mProperty_mTypeName, mObject.mProperty_mConstantVarName, mObject.mProperty_mInstructionList, mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mEndOfInstructions COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeName" ":" ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mConstantVarName" ":" ;
  mObject.mProperty_mConstantVarName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEndOfInstructions" ":" ;
  mObject.mProperty_mEndOfInstructions.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_castInstructionBranchListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListAST * operand = (cCollectionElement_castInstructionBranchListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST::GALGAS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_semanticInstructionListAST & inOperand2,
                                                                                                    const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                                                                    const GALGAS_location & inOperand4
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_castInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mTypeName,
                                                                     const GALGAS_lstring & in_mConstantVarName,
                                                                     const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                     const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GALGAS_location & in_mEndOfInstructions
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListAST (in_mTypeName,
                                                                  in_mConstantVarName,
                                                                  in_mInstructionList,
                                                                  in_mTypeComparisonKind,
                                                                  in_mEndOfInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_semanticInstructionListAST & inOperand2,
                                                               const GALGAS_dynamicTypeComparisonKind & inOperand3,
                                                               const GALGAS_location & inOperand4
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_castInstructionBranchListAST::setter_append (GALGAS_castInstructionBranchListAST_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inElement COMMA_THERE)) ;
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

void GALGAS_castInstructionBranchListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_semanticInstructionListAST inOperand2,
                                                                const GALGAS_dynamicTypeComparisonKind inOperand3,
                                                                const GALGAS_location inOperand4,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
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

void GALGAS_castInstructionBranchListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_semanticInstructionListAST & outOperand2,
                                                                GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                                GALGAS_location & outOperand4,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
        outOperand0 = p->mObject.mProperty_mTypeName ;
        outOperand1 = p->mObject.mProperty_mConstantVarName ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
        outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
        outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
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

void GALGAS_castInstructionBranchListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_semanticInstructionListAST & outOperand2,
                                                           GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                           GALGAS_location & outOperand4,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_semanticInstructionListAST & outOperand2,
                                                          GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                          GALGAS_location & outOperand4,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_semanticInstructionListAST & outOperand2,
                                                        GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                        GALGAS_location & outOperand4,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_semanticInstructionListAST & outOperand2,
                                                       GALGAS_dynamicTypeComparisonKind & outOperand3,
                                                       GALGAS_location & outOperand4,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::add_operation (const GALGAS_castInstructionBranchListAST & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListAST result = GALGAS_castInstructionBranchListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::plusAssign_operation (const GALGAS_castInstructionBranchListAST inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMConstantVarNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantVarName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_castInstructionBranchListAST::getter_mConstantVarNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mConstantVarName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_castInstructionBranchListAST::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMTypeComparisonKindAtIndex (GALGAS_dynamicTypeComparisonKind inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListAST::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListAST::setter_setMEndOfInstructionsAtIndex (GALGAS_location inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructions = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_castInstructionBranchListAST::getter_mEndOfInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfInstructions ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_castInstructionBranchListAST::cEnumerator_castInstructionBranchListAST (const GALGAS_castInstructionBranchListAST & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST_2D_element cEnumerator_castInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_castInstructionBranchListAST::current_mConstantVarName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mConstantVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_castInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListAST::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_castInstructionBranchListAST::current_mEndOfInstructions (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfInstructions ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@castInstructionBranchListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListAST ("castInstructionBranchListAST",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_castInstructionBranchListAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListAST result ;
  const GALGAS_castInstructionBranchListAST * p = (const GALGAS_castInstructionBranchListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @structuredCastInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_structuredCastInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_structuredCastInstructionAST * p = (const cPtr_structuredCastInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastExpression.objectCompare (p->mProperty_mCastExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCastInstructionBranchList.objectCompare (p->mProperty_mCastInstructionBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfCastInstruction.objectCompare (p->mProperty_mEndOfCastInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_structuredCastInstructionAST::objectCompare (const GALGAS_structuredCastInstructionAST & inOperand) const {
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

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST::GALGAS_structuredCastInstructionAST (const cPtr_structuredCastInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                          const GALGAS_semanticExpressionAST & inAttribute_mCastExpression,
                                                                                          const GALGAS_castInstructionBranchListAST & inAttribute_mCastInstructionBranchList,
                                                                                          const GALGAS_semanticInstructionListAST & inAttribute_mElseInstructionList,
                                                                                          const GALGAS_location & inAttribute_mEndOfCastInstruction
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mCastExpression.isValid () && inAttribute_mCastInstructionBranchList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfCastInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_structuredCastInstructionAST (inAttribute_mInstructionLocation, inAttribute_mCastExpression, inAttribute_mCastInstructionBranchList, inAttribute_mElseInstructionList, inAttribute_mEndOfCastInstruction COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_structuredCastInstructionAST::readProperty_mCastExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mCastExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListAST GALGAS_structuredCastInstructionAST::readProperty_mCastInstructionBranchList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_castInstructionBranchListAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mCastInstructionBranchList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_structuredCastInstructionAST::readProperty_mElseInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_structuredCastInstructionAST::readProperty_mEndOfCastInstruction (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mEndOfCastInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @structuredCastInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_structuredCastInstructionAST::cPtr_structuredCastInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & in_mCastExpression,
                                                                      const GALGAS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                                      const GALGAS_semanticInstructionListAST & in_mElseInstructionList,
                                                                      const GALGAS_location & in_mEndOfCastInstruction
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mCastExpression (in_mCastExpression),
mProperty_mCastInstructionBranchList (in_mCastInstructionBranchList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfCastInstruction (in_mEndOfCastInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structuredCastInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

void cPtr_structuredCastInstructionAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@structuredCastInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCastInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEndOfCastInstruction.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structuredCastInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_structuredCastInstructionAST (mProperty_mInstructionLocation, mProperty_mCastExpression, mProperty_mCastInstructionBranchList, mProperty_mElseInstructionList, mProperty_mEndOfCastInstruction COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@structuredCastInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionAST ("structuredCastInstructionAST",
                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST result ;
  const GALGAS_structuredCastInstructionAST * p = (const GALGAS_structuredCastInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structuredCastInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_structuredCastInstructionAST_2D_weak::objectCompare (const GALGAS_structuredCastInstructionAST_2D_weak & inOperand) const {
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

GALGAS_structuredCastInstructionAST_2D_weak::GALGAS_structuredCastInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak & GALGAS_structuredCastInstructionAST_2D_weak::operator = (const GALGAS_structuredCastInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak::GALGAS_structuredCastInstructionAST_2D_weak (const GALGAS_structuredCastInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak GALGAS_structuredCastInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST GALGAS_structuredCastInstructionAST_2D_weak::bang_structuredCastInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_structuredCastInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structuredCastInstructionAST) ;
      result = GALGAS_structuredCastInstructionAST ((cPtr_structuredCastInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@structuredCastInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structuredCastInstructionAST_2D_weak ("structuredCastInstructionAST-weak",
                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_structuredCastInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_structuredCastInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structuredCastInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_structuredCastInstructionAST_2D_weak GALGAS_structuredCastInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_structuredCastInstructionAST_2D_weak result ;
  const GALGAS_structuredCastInstructionAST_2D_weak * p = (const GALGAS_structuredCastInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structuredCastInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@castInstructionBranchListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListForGeneration : public cCollectionElement {
  public: GALGAS_castInstructionBranchListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                     const GALGAS_string & in_mCastedVarCppName,
                                                                     const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                      const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                                                                      const GALGAS_string & in_mCastedVarCppName,
                                                                                                                      const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeComparisonKind, in_mType, in_mCastedVarCppName, in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mType, inElement.mProperty_mCastedVarCppName, inElement.mProperty_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListForGeneration (mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mType, mObject.mProperty_mCastedVarCppName, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTypeComparisonKind" ":" ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mType" ":" ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCastedVarCppName" ":" ;
  mObject.mProperty_mCastedVarCppName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstructionList" ":" ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_castInstructionBranchListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_castInstructionBranchListForGeneration * operand = (cCollectionElement_castInstructionBranchListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_castInstructionBranchListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration::GALGAS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_castInstructionBranchListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::constructor_listWithValue (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                        const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                               const GALGAS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                               const GALGAS_unifiedTypeMap_2D_entry & in_mType,
                                                                               const GALGAS_string & in_mCastedVarCppName,
                                                                               const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (in_mTypeComparisonKind,
                                                                            in_mType,
                                                                            in_mCastedVarCppName,
                                                                            in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::addAssign_operation (const GALGAS_dynamicTypeComparisonKind & inOperand0,
                                                                         const GALGAS_unifiedTypeMap_2D_entry & inOperand1,
                                                                         const GALGAS_string & inOperand2,
                                                                         const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_castInstructionBranchListForGeneration::setter_append (GALGAS_castInstructionBranchListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_castInstructionBranchListForGeneration::setter_insertAtIndex (const GALGAS_dynamicTypeComparisonKind inOperand0,
                                                                          const GALGAS_unifiedTypeMap_2D_entry inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_castInstructionBranchListForGeneration::setter_removeAtIndex (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                          GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
        outOperand1 = p->mObject.mProperty_mType ;
        outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
        outOperand3 = p->mObject.mProperty_mInstructionList ;
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

void GALGAS_castInstructionBranchListForGeneration::setter_popFirst (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                     GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                     GALGAS_string & outOperand2,
                                                                     GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_popLast (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                    GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                    GALGAS_string & outOperand2,
                                                                    GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::method_first (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                  GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::method_last (GALGAS_dynamicTypeComparisonKind & outOperand0,
                                                                 GALGAS_unifiedTypeMap_2D_entry & outOperand1,
                                                                 GALGAS_string & outOperand2,
                                                                 GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::add_operation (const GALGAS_castInstructionBranchListForGeneration & inOperand,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_castInstructionBranchListForGeneration result = GALGAS_castInstructionBranchListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::plusAssign_operation (const GALGAS_castInstructionBranchListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMTypeComparisonKindAtIndex (GALGAS_dynamicTypeComparisonKind inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind GALGAS_castInstructionBranchListForGeneration::getter_mTypeComparisonKindAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_dynamicTypeComparisonKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMTypeAtIndex (GALGAS_unifiedTypeMap_2D_entry inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry GALGAS_castInstructionBranchListForGeneration::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_unifiedTypeMap_2D_entry result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMCastedVarCppNameAtIndex (GALGAS_string inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCastedVarCppName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_castInstructionBranchListForGeneration::getter_mCastedVarCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mCastedVarCppName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_castInstructionBranchListForGeneration::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListForGeneration inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_castInstructionBranchListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_castInstructionBranchListForGeneration::cEnumerator_castInstructionBranchListForGeneration (const GALGAS_castInstructionBranchListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration_2D_element cEnumerator_castInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_dynamicTypeComparisonKind cEnumerator_castInstructionBranchListForGeneration::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_entry cEnumerator_castInstructionBranchListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_castInstructionBranchListForGeneration::current_mCastedVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mCastedVarCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cEnumerator_castInstructionBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@castInstructionBranchListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ("castInstructionBranchListForGeneration",
                                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_castInstructionBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_castInstructionBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_castInstructionBranchListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_castInstructionBranchListForGeneration GALGAS_castInstructionBranchListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_castInstructionBranchListForGeneration result ;
  const GALGAS_castInstructionBranchListForGeneration * p = (const GALGAS_castInstructionBranchListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_castInstructionBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @dropInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_dropInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_dropInstructionAST * p = (const cPtr_dropInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_dropInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDropList.objectCompare (p->mProperty_mDropList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_dropInstructionAST::objectCompare (const GALGAS_dropInstructionAST & inOperand) const {
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

GALGAS_dropInstructionAST::GALGAS_dropInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_dropInstructionAST::constructor_new (GALGAS_location::constructor_nowhere (HERE),
                                                     GALGAS_lstringlist::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST::GALGAS_dropInstructionAST (const cPtr_dropInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dropInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                      const GALGAS_lstringlist & inAttribute_mDropList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mDropList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_dropInstructionAST (inAttribute_mInstructionLocation, inAttribute_mDropList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_dropInstructionAST::readProperty_mDropList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_dropInstructionAST * p = (cPtr_dropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionAST) ;
    return p->mProperty_mDropList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @dropInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_dropInstructionAST::cPtr_dropInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_lstringlist & in_mDropList
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mDropList (in_mDropList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

void cPtr_dropInstructionAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@dropInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDropList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dropInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_dropInstructionAST (mProperty_mInstructionLocation, mProperty_mDropList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@dropInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dropInstructionAST ("dropInstructionAST",
                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dropInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST GALGAS_dropInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST result ;
  const GALGAS_dropInstructionAST * p = (const GALGAS_dropInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_dropInstructionAST_2D_weak::objectCompare (const GALGAS_dropInstructionAST_2D_weak & inOperand) const {
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

GALGAS_dropInstructionAST_2D_weak::GALGAS_dropInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak & GALGAS_dropInstructionAST_2D_weak::operator = (const GALGAS_dropInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak::GALGAS_dropInstructionAST_2D_weak (const GALGAS_dropInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak GALGAS_dropInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_dropInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST GALGAS_dropInstructionAST_2D_weak::bang_dropInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_dropInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dropInstructionAST) ;
      result = GALGAS_dropInstructionAST ((cPtr_dropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@dropInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_dropInstructionAST_2D_weak ("dropInstructionAST-weak",
                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_dropInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_dropInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_dropInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_dropInstructionAST_2D_weak GALGAS_dropInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_dropInstructionAST_2D_weak result ;
  const GALGAS_dropInstructionAST_2D_weak * p = (const GALGAS_dropInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_dropInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementAST_fixItReplace::cEnumAssociatedValues_fixitElementAST_fixItReplace (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                                        const GALGAS_location & inAssociatedValue1
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementAST_fixItReplace::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_fixitElementAST_fixItReplace::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItReplace * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItReplace *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                                                const GALGAS_location & inAssociatedValue1
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_fixitElementAST_fixItInsertAfter::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                                                                  const GALGAS_location & inAssociatedValue1
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_fixitElementAST_fixItInsertBefore::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == kOperandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST::GALGAS_fixitElementAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItRemove (UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  result.mEnum = kEnum_fixItRemove ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItReplace (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                         const GALGAS_location & inAssociatedValue1
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItReplace ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItReplace (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItInsertAfter (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                             const GALGAS_location & inAssociatedValue1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItInsertAfter ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItInsertAfter (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::constructor_fixItInsertBefore (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                              const GALGAS_location & inAssociatedValue1
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_fixItInsertBefore ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementAST_fixItInsertBefore (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::method_fixItReplace (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                  GALGAS_location & outAssociatedValue1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItReplace) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @fixitElementAST fixItReplace invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::method_fixItInsertAfter (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                      GALGAS_location & outAssociatedValue1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertAfter) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @fixitElementAST fixItInsertAfter invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::method_fixItInsertBefore (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                       GALGAS_location & outAssociatedValue1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertBefore) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @fixitElementAST fixItInsertBefore invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItRemove () const {
  const bool ok = mEnum == kEnum_fixItRemove ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItReplace (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                    GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_fixItReplace ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) unsafePointer () ;
    // const cEnumAssociatedValues_fixitElementAST_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItInsertAfter (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                        GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_fixItInsertAfter ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) unsafePointer () ;
    // const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementAST::optional_fixItInsertBefore (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                         GALGAS_location & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_fixItInsertBefore ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) unsafePointer () ;
    // const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementAST [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertAfter",
  "fixItInsertBefore"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItRemove == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItReplace == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertAfter == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementAST::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertBefore == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementAST::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<enum @fixitElementAST: " << gEnumNameArrayFor_fixitElementAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixitElementAST::objectCompare (const GALGAS_fixitElementAST & inOperand) const {
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
//@fixitElementAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitElementAST ("fixitElementAST",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitElementAST::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementAST result ;
  const GALGAS_fixitElementAST * p = (const GALGAS_fixitElementAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@fixitListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_fixitListAST : public cCollectionElement {
  public: GALGAS_fixitListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_fixitListAST (const GALGAS_fixitElementAST & in_mElement
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fixitListAST (const GALGAS_fixitListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GALGAS_fixitElementAST & in_mElement
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GALGAS_fixitListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_fixitListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fixitListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fixitListAST (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_fixitListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_fixitListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fixitListAST * operand = (cCollectionElement_fixitListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fixitListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST::GALGAS_fixitListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST::GALGAS_fixitListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fixitListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::constructor_listWithValue (const GALGAS_fixitElementAST & inOperand0
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fixitListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                     const GALGAS_fixitElementAST & in_mElement
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_fixitListAST (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::addAssign_operation (const GALGAS_fixitElementAST & inOperand0
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_fixitListAST::setter_append (GALGAS_fixitListAST_2D_element inElement,
                                         C_Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fixitListAST (inElement COMMA_THERE)) ;
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

void GALGAS_fixitListAST::setter_insertAtIndex (const GALGAS_fixitElementAST inOperand0,
                                                const GALGAS_uint inInsertionIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
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

void GALGAS_fixitListAST::setter_removeAtIndex (GALGAS_fixitElementAST & outOperand0,
                                                const GALGAS_uint inRemoveIndex,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_fixitListAST::setter_popFirst (GALGAS_fixitElementAST & outOperand0,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_popLast (GALGAS_fixitElementAST & outOperand0,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::method_first (GALGAS_fixitElementAST & outOperand0,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::method_last (GALGAS_fixitElementAST & outOperand0,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::add_operation (const GALGAS_fixitListAST & inOperand,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListAST result = GALGAS_fixitListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::plusAssign_operation (const GALGAS_fixitListAST inOperand,
                                                C_Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListAST::setter_setMElementAtIndex (GALGAS_fixitElementAST inOperand,
                                                     GALGAS_uint inIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST GALGAS_fixitListAST::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  GALGAS_fixitElementAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_fixitListAST::cEnumerator_fixitListAST (const GALGAS_fixitListAST & inEnumeratedObject,
                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST_2D_element cEnumerator_fixitListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementAST cEnumerator_fixitListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@fixitListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListAST ("fixitListAST",
                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_fixitListAST::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_fixitListAST result ;
  const GALGAS_fixitListAST * p = (const GALGAS_fixitListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @errorInstructionAST reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_errorInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_errorInstructionAST * p = (const cPtr_errorInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_errorInstructionAST) ;
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
    result = mProperty_mBuiltVariableList.objectCompare (p->mProperty_mBuiltVariableList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListAST.objectCompare (p->mProperty_mFixitListAST) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_errorInstructionAST::objectCompare (const GALGAS_errorInstructionAST & inOperand) const {
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

GALGAS_errorInstructionAST::GALGAS_errorInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST::GALGAS_errorInstructionAST (const cPtr_errorInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST GALGAS_errorInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mLocationExpression,
                                                                        const GALGAS_semanticExpressionAST & inAttribute_mMessageExpression,
                                                                        const GALGAS_lstringlist & inAttribute_mBuiltVariableList,
                                                                        const GALGAS_fixitListAST & inAttribute_mFixitListAST
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLocationExpression.isValid () && inAttribute_mMessageExpression.isValid () && inAttribute_mBuiltVariableList.isValid () && inAttribute_mFixitListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_errorInstructionAST (inAttribute_mInstructionLocation, inAttribute_mLocationExpression, inAttribute_mMessageExpression, inAttribute_mBuiltVariableList, inAttribute_mFixitListAST COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_errorInstructionAST::readProperty_mLocationExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_errorInstructionAST::readProperty_mMessageExpression (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_errorInstructionAST::readProperty_mBuiltVariableList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mBuiltVariableList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_errorInstructionAST::readProperty_mFixitListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_fixitListAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_errorInstructionAST::cPtr_errorInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                                    const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                                    const GALGAS_lstringlist & in_mBuiltVariableList,
                                                    const GALGAS_fixitListAST & in_mFixitListAST
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLocationExpression (in_mLocationExpression),
mProperty_mMessageExpression (in_mMessageExpression),
mProperty_mBuiltVariableList (in_mBuiltVariableList),
mProperty_mFixitListAST (in_mFixitListAST) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_errorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

void cPtr_errorInstructionAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@errorInstructionAST:" ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mBuiltVariableList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_errorInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_errorInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mBuiltVariableList, mProperty_mFixitListAST COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@errorInstructionAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionAST ("errorInstructionAST",
                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST GALGAS_errorInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST result ;
  const GALGAS_errorInstructionAST * p = (const GALGAS_errorInstructionAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_errorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_errorInstructionAST_2D_weak::objectCompare (const GALGAS_errorInstructionAST_2D_weak & inOperand) const {
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

GALGAS_errorInstructionAST_2D_weak::GALGAS_errorInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak & GALGAS_errorInstructionAST_2D_weak::operator = (const GALGAS_errorInstructionAST & inSource) {
  cPtr_weakReference_class * proxyPtr = NULL ;
  acStrongPtr_class * p = inSource.embeddedObjectPtr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mObjectPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak::GALGAS_errorInstructionAST_2D_weak (const GALGAS_errorInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak GALGAS_errorInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_errorInstructionAST_2D_weak result ;
  macroMyNew (result.mObjectPtr, cPtr_weakReference_class (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST GALGAS_errorInstructionAST_2D_weak::bang_errorInstructionAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_errorInstructionAST result ;
  if (mObjectPtr != NULL) {
    cPtr_weakReference_class * p = (cPtr_weakReference_class *) mObjectPtr ;
    acStrongPtr_class * strongPtr = p->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionAST) ;
      result = GALGAS_errorInstructionAST ((cPtr_errorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@errorInstructionAST-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_errorInstructionAST_2D_weak ("errorInstructionAST-weak",
                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_errorInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_errorInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_errorInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_errorInstructionAST_2D_weak GALGAS_errorInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_errorInstructionAST_2D_weak result ;
  const GALGAS_errorInstructionAST_2D_weak * p = (const GALGAS_errorInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_errorInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const GALGAS_fixitListAST inObject,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_fixitListAST temp_0 = inObject ;
  cEnumerator_fixitListAST enumerator_6714 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6714.hasCurrentObject ()) {
    switch (enumerator_6714.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementAST::kNotBuilt:
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItRemove:
      {
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItReplace * extractPtr_6881 = (const cEnumAssociatedValues_fixitElementAST_fixItReplace *) (enumerator_6714.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_6819_exp = extractPtr_6881->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_6819_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 196)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore * extractPtr_6998 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertBefore *) (enumerator_6714.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_6936_exp = extractPtr_6998->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_6936_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 198)) ;
      }
      break ;
    case GALGAS_fixitElementAST::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter * extractPtr_7114 = (const cEnumAssociatedValues_fixitElementAST_fixItInsertAfter *) (enumerator_6714.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_7052_exp = extractPtr_7114->mAssociatedValue0 ;
        callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) extractedValue_7052_exp.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 200)) ;
      }
      break ;
    }
    enumerator_6714.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItReplace::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::description (C_String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * ptr = dynamic_cast<const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration::GALGAS_fixitElementForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItRemove (UNUSED_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  result.mEnum = kEnum_fixItRemove ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItReplace (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItReplace ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItReplace (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItInsertBefore (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItInsertBefore ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::constructor_fixItInsertAfter (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fixItInsertAfter ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::method_fixItReplace (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItReplace) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @fixitElementForGeneration fixItReplace invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::method_fixItInsertBefore (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertBefore) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @fixitElementForGeneration fixItInsertBefore invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::method_fixItInsertAfter (GALGAS_semanticExpressionForGeneration & outAssociatedValue0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fixItInsertAfter) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @fixitElementForGeneration fixItInsertAfter invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItRemove () const {
  const bool ok = mEnum == kEnum_fixItRemove ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItReplace (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixItReplace ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) unsafePointer () ;
    // const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItInsertBefore (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixItInsertBefore ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) unsafePointer () ;
    // const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fixitElementForGeneration::optional_fixItInsertAfter (GALGAS_semanticExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fixItInsertAfter ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) unsafePointer () ;
    // const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * ptr = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementForGeneration [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertBefore",
  "fixItInsertAfter"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItRemove == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItReplace == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertBefore == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_fixitElementForGeneration::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fixItInsertAfter == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitElementForGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @fixitElementForGeneration: " << gEnumNameArrayFor_fixitElementForGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fixitElementForGeneration::objectCompare (const GALGAS_fixitElementForGeneration & inOperand) const {
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
//@fixitElementForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitElementForGeneration ("fixitElementForGeneration",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitElementForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitElementForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_fixitElementForGeneration result ;
  const GALGAS_fixitElementForGeneration * p = (const GALGAS_fixitElementForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@fixitListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_fixitListForGeneration : public cCollectionElement {
  public: GALGAS_fixitListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_fixitListForGeneration (const GALGAS_fixitElementForGeneration & in_mElement
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fixitListForGeneration (const GALGAS_fixitListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GALGAS_fixitElementForGeneration & in_mElement
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GALGAS_fixitListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_fixitListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fixitListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_fixitListForGeneration (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_fixitListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_fixitListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_fixitListForGeneration * operand = (cCollectionElement_fixitListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_fixitListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration::GALGAS_fixitListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration::GALGAS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_fixitListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::constructor_listWithValue (const GALGAS_fixitElementForGeneration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fixitListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_fixitListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_fixitElementForGeneration & in_mElement
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_fixitListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::addAssign_operation (const GALGAS_fixitElementForGeneration & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_fixitListForGeneration::setter_append (GALGAS_fixitListForGeneration_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fixitListForGeneration (inElement COMMA_THERE)) ;
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

void GALGAS_fixitListForGeneration::setter_insertAtIndex (const GALGAS_fixitElementForGeneration inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_fixitListForGeneration::setter_removeAtIndex (GALGAS_fixitElementForGeneration & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mElement ;
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

void GALGAS_fixitListForGeneration::setter_popFirst (GALGAS_fixitElementForGeneration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::setter_popLast (GALGAS_fixitElementForGeneration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::method_first (GALGAS_fixitElementForGeneration & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::method_last (GALGAS_fixitElementForGeneration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::add_operation (const GALGAS_fixitListForGeneration & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_fixitListForGeneration result = GALGAS_fixitListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fixitListForGeneration::plusAssign_operation (const GALGAS_fixitListForGeneration inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration GALGAS_fixitListForGeneration::getter_mElementAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  GALGAS_fixitElementForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_fixitListForGeneration::cEnumerator_fixitListForGeneration (const GALGAS_fixitListForGeneration & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration_2D_element cEnumerator_fixitListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitElementForGeneration cEnumerator_fixitListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@fixitListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fixitListForGeneration ("fixitListForGeneration",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fixitListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fixitListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fixitListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fixitListForGeneration GALGAS_fixitListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_fixitListForGeneration result ;
  const GALGAS_fixitListForGeneration * p = (const GALGAS_fixitListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_fixitListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const GALGAS_fixitListForGeneration inObject,
                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                    GALGAS_string & outArgument_outFixItArrayCppName,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFixItArrayCppName.drop () ; // Release 'out' argument
  outArgument_outFixItArrayCppName = GALGAS_string ("fixItArray").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-error.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 382)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 383)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("TC_Array <C_FixItDescription> ").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 384)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 384)) ;
  const GALGAS_fixitListForGeneration temp_0 = inObject ;
  cEnumerator_fixitListForGeneration enumerator_14575 (temp_0, kENUMERATION_UP) ;
  while (enumerator_14575.hasCurrentObject ()) {
    switch (enumerator_14575.current_mElement (HERE).enumValue ()) {
    case GALGAS_fixitElementForGeneration::kNotBuilt:
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItRemove:
      {
        ioArgument_ioGeneratedCode.plusAssign_operation(outArgument_outFixItArrayCppName.add_operation (GALGAS_string (".appendObject (C_FixItDescription (kFixItRemove, \"\")) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 388)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItReplace:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace * extractPtr_15121 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItReplace *) (enumerator_14575.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_14801_exp = extractPtr_15121->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_14989 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_14801_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_14989, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 390)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 397)).add_operation (GALGAS_string (", kFixItReplace, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 397)).add_operation (var_receiverCppVarName_14989, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 397)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 397)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 397)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItInsertBefore:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore * extractPtr_15511 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertBefore *) (enumerator_14575.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_15186_exp = extractPtr_15511->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_15374 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_15186_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_15374, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 399)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 406)).add_operation (GALGAS_string (", kFixItInsertBefore, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 406)).add_operation (var_receiverCppVarName_15374, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 406)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 406)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 406)) ;
      }
      break ;
    case GALGAS_fixitElementForGeneration::kEnum_fixItInsertAfter:
      {
        const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter * extractPtr_15899 = (const cEnumAssociatedValues_fixitElementForGeneration_fixItInsertAfter *) (enumerator_14575.current_mElement (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionForGeneration extractedValue_15575_exp = extractPtr_15899->mAssociatedValue0 ;
        GALGAS_string var_receiverCppVarName_15763 ;
        callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) extractedValue_15575_exp.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_15763, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 408)) ;
        ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 415)).add_operation (GALGAS_string (", kFixItInsertAfter, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 415)).add_operation (var_receiverCppVarName_15763, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 415)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 415)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 415)) ;
      }
      break ;
    }
    enumerator_14575.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@forInstructionEnumeratedObjectElementListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectElementListAST : public cCollectionElement {
  public: GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                           const GALGAS_bool & in_mDeclaredAsUnused,
                                                                           const GALGAS_lstring & in_mOptionalConstantName
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_lstring & in_mOptionalTypeName,
                                                                                                                                  const GALGAS_bool & in_mDeclaredAsUnused,
                                                                                                                                  const GALGAS_lstring & in_mOptionalConstantName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mDeclaredAsUnused, in_mOptionalConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionalTypeName, inElement.mProperty_mDeclaredAsUnused, inElement.mProperty_mOptionalConstantName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectElementListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectElementListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectElementListAST (mObject.mProperty_mOptionalTypeName, mObject.mProperty_mDeclaredAsUnused, mObject.mProperty_mOptionalConstantName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectElementListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalTypeName" ":" ;
  mObject.mProperty_mOptionalTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mDeclaredAsUnused" ":" ;
  mObject.mProperty_mDeclaredAsUnused.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionalConstantName" ":" ;
  mObject.mProperty_mOptionalConstantName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_forInstructionEnumeratedObjectElementListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * operand = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST::GALGAS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_forInstructionEnumeratedObjectElementListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                    const GALGAS_bool & inOperand1,
                                                                                                                                    const GALGAS_lstring & inOperand2
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_lstring & in_mOptionalTypeName,
                                                                                     const GALGAS_bool & in_mDeclaredAsUnused,
                                                                                     const GALGAS_lstring & in_mOptionalConstantName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (in_mOptionalTypeName,
                                                                                  in_mDeclaredAsUnused,
                                                                                  in_mOptionalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                               const GALGAS_bool & inOperand1,
                                                                               const GALGAS_lstring & inOperand2
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_append (GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inElement COMMA_THERE)) ;
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

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                                const GALGAS_bool inOperand1,
                                                                                const GALGAS_lstring inOperand2,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                                GALGAS_bool & outOperand1,
                                                                                GALGAS_lstring & outOperand2,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
        outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
        outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
        outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
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

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                           GALGAS_bool & outOperand1,
                                                                           GALGAS_lstring & outOperand2,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                          GALGAS_bool & outOperand1,
                                                                          GALGAS_lstring & outOperand2,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_first (GALGAS_lstring & outOperand0,
                                                                        GALGAS_bool & outOperand1,
                                                                        GALGAS_lstring & outOperand2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::method_last (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::add_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_forInstructionEnumeratedObjectElementListAST result = GALGAS_forInstructionEnumeratedObjectElementListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::plusAssign_operation (const GALGAS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_setMDeclaredAsUnusedAtIndex (GALGAS_bool inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaredAsUnused = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_forInstructionEnumeratedObjectElementListAST::getter_mDeclaredAsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mDeclaredAsUnused ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalConstantNameAtIndex (GALGAS_lstring inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalConstantName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalConstantNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalConstantName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_forInstructionEnumeratedObjectElementListAST::cEnumerator_forInstructionEnumeratedObjectElementListAST (const GALGAS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST_2D_element cEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mDeclaredAsUnused ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalConstantName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@forInstructionEnumeratedObjectElementListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ("forInstructionEnumeratedObjectElementListAST",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_forInstructionEnumeratedObjectElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_forInstructionEnumeratedObjectElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_forInstructionEnumeratedObjectElementListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_forInstructionEnumeratedObjectElementListAST GALGAS_forInstructionEnumeratedObjectElementListAST::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_forInstructionEnumeratedObjectElementListAST result ;
  const GALGAS_forInstructionEnumeratedObjectElementListAST * p = (const GALGAS_forInstructionEnumeratedObjectElementListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_forInstructionEnumeratedObjectElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

