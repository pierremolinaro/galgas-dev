#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-7.h"

//--------------------------------------------------------------------------------------------------
// @semanticInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_semanticInstructionForGeneration::objectCompare (const GALGAS_semanticInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration::GALGAS_semanticInstructionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration::GALGAS_semanticInstructionForGeneration (const cPtr_semanticInstructionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionForGeneration::cPtr_semanticInstructionForGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration ("semanticInstructionForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionForGeneration result ;
  const GALGAS_semanticInstructionForGeneration * p = (const GALGAS_semanticInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticInstructionForGeneration_2D_weak::objectCompare (const GALGAS_semanticInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration_2D_weak::GALGAS_semanticInstructionForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration_2D_weak & GALGAS_semanticInstructionForGeneration_2D_weak::operator = (const GALGAS_semanticInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration_2D_weak::GALGAS_semanticInstructionForGeneration_2D_weak (const GALGAS_semanticInstructionForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration_2D_weak GALGAS_semanticInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_semanticInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration GALGAS_semanticInstructionForGeneration_2D_weak::bang_semanticInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticInstructionForGeneration) ;
      result = GALGAS_semanticInstructionForGeneration ((cPtr_semanticInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak ("semanticInstructionForGeneration-weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionForGeneration_2D_weak GALGAS_semanticInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionForGeneration_2D_weak result ;
  const GALGAS_semanticInstructionForGeneration_2D_weak * p = (const GALGAS_semanticInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateInstruction (cPtr_semanticInstructionForGeneration * inObject,
                                              GALGAS_stringset & io_ioInclusionSet,
                                              GALGAS_uint & io_ioTemporaryVariableIndex,
                                              GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                              const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                              GALGAS_string & io_ioGeneratedCode,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    inObject->method_generateInstruction (io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, constin_inGenerateSyntaxDirectedTranslationString, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @semanticBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticBlockInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_semanticBlockInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_semanticBlockInstructionForGeneration * p = (const cPtr_semanticBlockInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_semanticBlockInstructionForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_semanticBlockInstructionForGeneration::objectCompare (const GALGAS_semanticBlockInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration::GALGAS_semanticBlockInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration::GALGAS_semanticBlockInstructionForGeneration (const cPtr_semanticBlockInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration GALGAS_semanticBlockInstructionForGeneration::class_func_new (const GALGAS_semanticInstructionListForGeneration & inAttribute_mInstructionList
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_semanticBlockInstructionForGeneration result ;
  if (inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_semanticBlockInstructionForGeneration (inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_semanticBlockInstructionForGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_semanticBlockInstructionForGeneration * p = (cPtr_semanticBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticBlockInstructionForGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticBlockInstructionForGeneration::cPtr_semanticBlockInstructionForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionList (in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_semanticBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

void cPtr_semanticBlockInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@semanticBlockInstructionForGeneration:") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_semanticBlockInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_semanticBlockInstructionForGeneration (mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticBlockInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ("semanticBlockInstructionForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration GALGAS_semanticBlockInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticBlockInstructionForGeneration result ;
  const GALGAS_semanticBlockInstructionForGeneration * p = (const GALGAS_semanticBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticBlockInstructionForGeneration_2D_weak::objectCompare (const GALGAS_semanticBlockInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration_2D_weak::GALGAS_semanticBlockInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration_2D_weak & GALGAS_semanticBlockInstructionForGeneration_2D_weak::operator = (const GALGAS_semanticBlockInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration_2D_weak::GALGAS_semanticBlockInstructionForGeneration_2D_weak (const GALGAS_semanticBlockInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration_2D_weak GALGAS_semanticBlockInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_semanticBlockInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration GALGAS_semanticBlockInstructionForGeneration_2D_weak::bang_semanticBlockInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticBlockInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticBlockInstructionForGeneration) ;
      result = GALGAS_semanticBlockInstructionForGeneration ((cPtr_semanticBlockInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticBlockInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2D_weak ("semanticBlockInstructionForGeneration-weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticBlockInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticBlockInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticBlockInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticBlockInstructionForGeneration_2D_weak GALGAS_semanticBlockInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticBlockInstructionForGeneration_2D_weak result ;
  const GALGAS_semanticBlockInstructionForGeneration_2D_weak * p = (const GALGAS_semanticBlockInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticBlockInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticBlockInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@listOfSemanticInstructionListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_listOfSemanticInstructionListForGeneration : public cCollectionElement {
  public: GALGAS_listOfSemanticInstructionListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_listOfSemanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                         const GALGAS_location & in_mEndOfInstructionList
                                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_listOfSemanticInstructionListForGeneration (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSemanticInstructionListForGeneration::cCollectionElement_listOfSemanticInstructionListForGeneration (const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                              const GALGAS_location & in_mEndOfInstructionList
                                                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSemanticInstructionListForGeneration::cCollectionElement_listOfSemanticInstructionListForGeneration (const GALGAS_listOfSemanticInstructionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_listOfSemanticInstructionListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_listOfSemanticInstructionListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_listOfSemanticInstructionListForGeneration (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_listOfSemanticInstructionListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_listOfSemanticInstructionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_listOfSemanticInstructionListForGeneration * operand = (cCollectionElement_listOfSemanticInstructionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration::GALGAS_listOfSemanticInstructionListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration::GALGAS_listOfSemanticInstructionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::class_func_listWithValue (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                               const GALGAS_location & inOperand1
                                                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_listOfSemanticInstructionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                   const GALGAS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                   const GALGAS_location & in_mEndOfInstructionList
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (in_mInstructionList,
                                                                                in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::addAssign_operation (const GALGAS_semanticInstructionListForGeneration & inOperand0,
                                                                             const GALGAS_location & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::setter_append (const GALGAS_semanticInstructionListForGeneration inOperand0,
                                                                       const GALGAS_location inOperand1,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::setter_insertAtIndex (const GALGAS_semanticInstructionListForGeneration inOperand0,
                                                                              const GALGAS_location inOperand1,
                                                                              const GALGAS_uint inInsertionIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_listOfSemanticInstructionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::setter_removeAtIndex (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                              GALGAS_location & outOperand1,
                                                                              const GALGAS_uint inRemoveIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::setter_popFirst (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                         GALGAS_location & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::setter_popLast (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                        GALGAS_location & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::method_first (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                      GALGAS_location & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::method_last (GALGAS_semanticInstructionListForGeneration & outOperand0,
                                                                     GALGAS_location & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::add_operation (const GALGAS_listOfSemanticInstructionListForGeneration & inOperand,
                                                                                                                    Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSemanticInstructionListForGeneration result = GALGAS_listOfSemanticInstructionListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::plusAssign_operation (const GALGAS_listOfSemanticInstructionListForGeneration inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListForGeneration inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSemanticInstructionListForGeneration::setter_setMEndOfInstructionListAtIndex (GALGAS_location inOperand,
                                                                                                GALGAS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_listOfSemanticInstructionListForGeneration::getter_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSemanticInstructionListForGeneration * p = (cCollectionElement_listOfSemanticInstructionListForGeneration *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_listOfSemanticInstructionListForGeneration::cEnumerator_listOfSemanticInstructionListForGeneration (const GALGAS_listOfSemanticInstructionListForGeneration & inEnumeratedObject,
                                                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration_2D_element cEnumerator_listOfSemanticInstructionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cEnumerator_listOfSemanticInstructionListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_listOfSemanticInstructionListForGeneration::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSemanticInstructionListForGeneration * p = (const cCollectionElement_listOfSemanticInstructionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSemanticInstructionListForGeneration) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @listOfSemanticInstructionListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ("listOfSemanticInstructionListForGeneration",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSemanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSemanticInstructionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSemanticInstructionListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_listOfSemanticInstructionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_listOfSemanticInstructionListForGeneration result ;
  const GALGAS_listOfSemanticInstructionListForGeneration * p = (const GALGAS_listOfSemanticInstructionListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listOfSemanticInstructionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSemanticInstructionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_semanticDeclarationForGeneration::objectCompare (const GALGAS_semanticDeclarationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration::GALGAS_semanticDeclarationForGeneration (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration::GALGAS_semanticDeclarationForGeneration (const cPtr_semanticDeclarationForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticDeclarationForGeneration::cPtr_semanticDeclarationForGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ("semanticDeclarationForGeneration",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration GALGAS_semanticDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationForGeneration result ;
  const GALGAS_semanticDeclarationForGeneration * p = (const GALGAS_semanticDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_semanticDeclarationForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration_2D_weak::GALGAS_semanticDeclarationForGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration_2D_weak & GALGAS_semanticDeclarationForGeneration_2D_weak::operator = (const GALGAS_semanticDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration_2D_weak::GALGAS_semanticDeclarationForGeneration_2D_weak (const GALGAS_semanticDeclarationForGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration_2D_weak GALGAS_semanticDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_semanticDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration GALGAS_semanticDeclarationForGeneration_2D_weak::bang_semanticDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationForGeneration) ;
      result = GALGAS_semanticDeclarationForGeneration ((cPtr_semanticDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak ("semanticDeclarationForGeneration-weak",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration_2D_weak GALGAS_semanticDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationForGeneration_2D_weak result ;
  const GALGAS_semanticDeclarationForGeneration_2D_weak * p = (const GALGAS_semanticDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendPrimitiveTypeDeclaration'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticDeclarationForGeneration::getter_appendPrimitiveTypeDeclaration (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendPrimitiveTypeDeclaration (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendPrimitiveTypePreDeclaration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendPrimitiveTypePreDeclaration (GALGAS_string & /* ioArgument_ioHeader */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendPrimitiveTypePreDeclaration (cPtr_semanticDeclarationForGeneration * inObject,
                                                            GALGAS_string & io_ioHeader,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendPrimitiveTypePreDeclaration  (io_ioHeader, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration implementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_implementationCppFileName (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_hasCppHeaderFile (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isPredefined (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@semanticDeclarationForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GALGAS_headerKind callExtensionGetter_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_headerKind result ;
  if (nullptr != inObject) {
    result = inObject->getter_headerKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticDeclarationListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticDeclarationListForGeneration : public cCollectionElement {
  public: GALGAS_semanticDeclarationListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticDeclarationListForGeneration (const GALGAS_string & in_infoMessage,
                                                                   const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticDeclarationListForGeneration (const GALGAS_semanticDeclarationListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GALGAS_string & in_infoMessage,
                                                                                                                  const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_infoMessage, in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListForGeneration::cCollectionElement_semanticDeclarationListForGeneration (const GALGAS_semanticDeclarationListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_infoMessage, inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticDeclarationListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticDeclarationListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticDeclarationListForGeneration (mObject.mProperty_infoMessage, mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticDeclarationListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("infoMessage" ":") ;
  mObject.mProperty_infoMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_semanticDeclarationListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticDeclarationListForGeneration * operand = (cCollectionElement_semanticDeclarationListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticDeclarationListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration::GALGAS_semanticDeclarationListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration::GALGAS_semanticDeclarationListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration GALGAS_semanticDeclarationListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration GALGAS_semanticDeclarationListForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                   const GALGAS_semanticDeclarationForGeneration & inOperand1
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_semanticDeclarationListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_semanticDeclarationListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_string & in_infoMessage,
                                                                             const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (in_infoMessage,
                                                                          in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                       const GALGAS_semanticDeclarationForGeneration & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::setter_append (const GALGAS_string inOperand0,
                                                                 const GALGAS_semanticDeclarationForGeneration inOperand1,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                        const GALGAS_semanticDeclarationForGeneration inOperand1,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_semanticDeclarationListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                        GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
        outOperand0 = p->mObject.mProperty_infoMessage ;
        outOperand1 = p->mObject.mProperty_mDeclaration ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                   GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                  GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::method_last (GALGAS_string & outOperand0,
                                                               GALGAS_semanticDeclarationForGeneration & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    outOperand0 = p->mObject.mProperty_infoMessage ;
    outOperand1 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration GALGAS_semanticDeclarationListForGeneration::add_operation (const GALGAS_semanticDeclarationListForGeneration & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration GALGAS_semanticDeclarationListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListForGeneration result = GALGAS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration GALGAS_semanticDeclarationListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListForGeneration result = GALGAS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration GALGAS_semanticDeclarationListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListForGeneration result = GALGAS_semanticDeclarationListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::plusAssign_operation (const GALGAS_semanticDeclarationListForGeneration inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::setter_setInfoMessageAtIndex (GALGAS_string inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_infoMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_semanticDeclarationListForGeneration::getter_infoMessageAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_infoMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListForGeneration::setter_setMDeclarationAtIndex (GALGAS_semanticDeclarationForGeneration inOperand,
                                                                                 GALGAS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration GALGAS_semanticDeclarationListForGeneration::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListForGeneration * p = (cCollectionElement_semanticDeclarationListForGeneration *) attributes.ptr () ;
  GALGAS_semanticDeclarationForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_semanticDeclarationListForGeneration::cEnumerator_semanticDeclarationListForGeneration (const GALGAS_semanticDeclarationListForGeneration & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration_2D_element cEnumerator_semanticDeclarationListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_semanticDeclarationListForGeneration::current_infoMessage (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_infoMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration cEnumerator_semanticDeclarationListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListForGeneration * p = (const cCollectionElement_semanticDeclarationListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ("semanticDeclarationListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListForGeneration GALGAS_semanticDeclarationListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListForGeneration result ;
  const GALGAS_semanticDeclarationListForGeneration * p = (const GALGAS_semanticDeclarationListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@signatureForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_signatureForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_signatureForGrammarAnalysis_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_signatureForGrammarAnalysis (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                          const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_signatureForGrammarAnalysis (const GALGAS_signatureForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalArgumentPassingModeForGrammarAnalysis, in_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_signatureForGrammarAnalysis::cCollectionElement_signatureForGrammarAnalysis (const GALGAS_signatureForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, inElement.mProperty_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_signatureForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_signatureForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_signatureForGrammarAnalysis (mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis, mObject.mProperty_mGalgasTypeNameForGrammarAnalysis COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_signatureForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentPassingModeForGrammarAnalysis" ":") ;
  mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGalgasTypeNameForGrammarAnalysis" ":") ;
  mObject.mProperty_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_signatureForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_signatureForGrammarAnalysis * operand = (cCollectionElement_signatureForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_signatureForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis::GALGAS_signatureForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis::GALGAS_signatureForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::class_func_listWithValue (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                                                                 const GALGAS_lstring & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_signatureForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_signatureForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                    const GALGAS_lstring & in_mGalgasTypeNameForGrammarAnalysis
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                 in_mGalgasTypeNameForGrammarAnalysis COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::addAssign_operation (const GALGAS_formalArgumentPassingModeAST & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::setter_append (const GALGAS_formalArgumentPassingModeAST inOperand0,
                                                        const GALGAS_lstring inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::setter_insertAtIndex (const GALGAS_formalArgumentPassingModeAST inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_signatureForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::setter_removeAtIndex (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
        outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
        outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::setter_popFirst (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::setter_popLast (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::method_first (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::method_last (GALGAS_formalArgumentPassingModeAST & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
    outOperand1 = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::add_operation (const GALGAS_signatureForGrammarAnalysis & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result = GALGAS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result = GALGAS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_signatureForGrammarAnalysis result = GALGAS_signatureForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::plusAssign_operation (const GALGAS_signatureForGrammarAnalysis inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::setter_setMFormalArgumentPassingModeForGrammarAnalysisAtIndex (GALGAS_formalArgumentPassingModeAST inOperand,
                                                                                                        GALGAS_uint inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_signatureForGrammarAnalysis::getter_mFormalArgumentPassingModeForGrammarAnalysisAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_formalArgumentPassingModeAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_signatureForGrammarAnalysis::setter_setMGalgasTypeNameForGrammarAnalysisAtIndex (GALGAS_lstring inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_signatureForGrammarAnalysis::getter_mGalgasTypeNameForGrammarAnalysisAtIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_signatureForGrammarAnalysis * p = (cCollectionElement_signatureForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
    result = p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_signatureForGrammarAnalysis::cEnumerator_signatureForGrammarAnalysis (const GALGAS_signatureForGrammarAnalysis & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis_2D_element cEnumerator_signatureForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST cEnumerator_signatureForGrammarAnalysis::current_mFormalArgumentPassingModeForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_signatureForGrammarAnalysis::current_mGalgasTypeNameForGrammarAnalysis (LOCATION_ARGS) const {
  const cCollectionElement_signatureForGrammarAnalysis * p = (const cCollectionElement_signatureForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_signatureForGrammarAnalysis) ;
  return p->mObject.mProperty_mGalgasTypeNameForGrammarAnalysis ;
}




//--------------------------------------------------------------------------------------------------
//
//     @signatureForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ("signatureForGrammarAnalysis",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_signatureForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_signatureForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_signatureForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_signatureForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_signatureForGrammarAnalysis result ;
  const GALGAS_signatureForGrammarAnalysis * p = (const GALGAS_signatureForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_signatureForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("signatureForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                                  const GALGAS_signatureForGrammarAnalysis & in_mFormalParametersList
                                                                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFormalParametersList (in_mFormalParametersList) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (mProperty_lkey, mProperty_mFormalParametersList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalParametersList" ":") ;
  mProperty_mFormalParametersList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * operand = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mFormalParametersList.objectCompare (operand->mProperty_mFormalParametersList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::operator = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inMapToOverride
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                              const GALGAS_signatureForGrammarAnalysis & inArgument0,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalSymbolLabelMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::add_operation (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result = *this ;
  cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mFormalParametersList (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                           GALGAS_signatureForGrammarAnalysis inArgument0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the rule label '%K' has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey = "the rule label '%K' is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                           GALGAS_signatureForGrammarAnalysis & outArgument0,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                                       inCompiler,
                                                                                                                                                       kSearchErrorMessage_nonterminalSymbolLabelMapForGrammarAnalysis_searchKey
                                                                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mFormalParametersList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_mFormalParametersListForKey (const GALGAS_string & inKey,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  GALGAS_signatureForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    result = p->mProperty_mFormalParametersList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_setMFormalParametersListForKey (GALGAS_signatureForGrammarAnalysis inAttributeValue,
                                                                                                GALGAS_string inKey,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    p->mProperty_mFormalParametersList = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                                 const GALGAS_string & inKey
                                                                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * result = (cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mFormalParametersList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_signatureForGrammarAnalysis cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
  return p->mProperty_mFormalParametersList ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                             GALGAS_signatureForGrammarAnalysis & outArgument0) const {
  const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_nonterminalSymbolLabelMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mFormalParametersList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalSymbolLabelMapForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ("nonterminalSymbolLabelMapForGrammarAnalysis",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis * p = (const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalSymbolLabelMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis::cMapElement_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                        const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                        const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mNonTerminalIndex (in_mNonTerminalIndex),
mProperty_mNonterminalSymbolParametersMap (in_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonTerminalSymbolMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (mProperty_lkey, mProperty_mNonTerminalIndex, mProperty_mNonterminalSymbolParametersMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonTerminalSymbolMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalIndex" ":") ;
  mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalSymbolParametersMap" ":") ;
  mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_nonTerminalSymbolMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * operand = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNonTerminalIndex.objectCompare (operand->mProperty_mNonTerminalIndex) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNonterminalSymbolParametersMap.objectCompare (operand->mProperty_mNonterminalSymbolParametersMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis::GALGAS_nonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis::GALGAS_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis & GALGAS_nonTerminalSymbolMapForGrammarAnalysis::operator = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                         const GALGAS_uint & inArgument0,
                                                                         const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inArgument1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::add_operation (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inOperand,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result = *this ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mNonTerminalIndex (HERE), enumerator.current_mNonterminalSymbolParametersMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                      GALGAS_uint inArgument0,
                                                                      GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis inArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey = "the '<%K>' non terminal symbol is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                      GALGAS_uint & outArgument0,
                                                                      GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                             inCompiler,
                                                                                                                                             kSearchErrorMessage_nonTerminalSymbolMapForGrammarAnalysis_searchKey
                                                                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mNonTerminalIndex ;
    outArgument1 = p->mProperty_mNonterminalSymbolParametersMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonTerminalIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::getter_mNonterminalSymbolParametersMapForKey (const GALGAS_string & inKey,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonterminalSymbolParametersMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                       GALGAS_string inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonTerminalIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolMapForGrammarAnalysis::setter_setMNonterminalSymbolParametersMapForKey (GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis inAttributeValue,
                                                                                                     GALGAS_string inKey,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonterminalSymbolParametersMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonTerminalSymbolMapForGrammarAnalysis * GALGAS_nonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                       const GALGAS_string & inKey
                                                                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_nonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::cEnumerator_nonTerminalSymbolMapForGrammarAnalysis (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex, p->mProperty_mNonterminalSymbolParametersMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis cEnumerator_nonTerminalSymbolMapForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonterminalSymbolParametersMap ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonTerminalSymbolMapForGrammarAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                        GALGAS_uint & outArgument0,
                                                                        GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outArgument1) const {
  const cMapElement_nonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_nonTerminalSymbolMapForGrammarAnalysis *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_nonTerminalSymbolMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mNonTerminalIndex ;
    outArgument1 = p->mProperty_mNonterminalSymbolParametersMap ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalSymbolMapForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ("nonTerminalSymbolMapForGrammarAnalysis",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolMapForGrammarAnalysis GALGAS_nonTerminalSymbolMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis result ;
  const GALGAS_nonTerminalSymbolMapForGrammarAnalysis * p = (const GALGAS_nonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@nonTerminalToAddList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_nonTerminalToAddList : public cCollectionElement {
  public: GALGAS_nonTerminalToAddList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_nonTerminalToAddList (const GALGAS_string & in_mSyntaxComponentName,
                                                   const GALGAS_uint & in_mNonTerminalToAddCount
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_nonTerminalToAddList (const GALGAS_nonTerminalToAddList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GALGAS_string & in_mSyntaxComponentName,
                                                                                  const GALGAS_uint & in_mNonTerminalToAddCount
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalToAddList::cCollectionElement_nonTerminalToAddList (const GALGAS_nonTerminalToAddList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_nonTerminalToAddList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_nonTerminalToAddList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_nonTerminalToAddList (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonTerminalToAddCount COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_nonTerminalToAddList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalToAddCount" ":") ;
  mObject.mProperty_mNonTerminalToAddCount.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_nonTerminalToAddList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_nonTerminalToAddList * operand = (cCollectionElement_nonTerminalToAddList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_nonTerminalToAddList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList::GALGAS_nonTerminalToAddList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList::GALGAS_nonTerminalToAddList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalToAddList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                   const GALGAS_uint & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonTerminalToAddList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_nonTerminalToAddList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_string & in_mSyntaxComponentName,
                                                             const GALGAS_uint & in_mNonTerminalToAddCount
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalToAddList (in_mSyntaxComponentName,
                                                          in_mNonTerminalToAddCount COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::addAssign_operation (const GALGAS_string & inOperand0,
                                                       const GALGAS_uint & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::setter_append (const GALGAS_string inOperand0,
                                                 const GALGAS_uint inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                        const GALGAS_uint inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_nonTerminalToAddList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                        GALGAS_uint & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
        outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
        outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::setter_popFirst (GALGAS_string & outOperand0,
                                                   GALGAS_uint & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::setter_popLast (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::method_first (GALGAS_string & outOperand0,
                                                GALGAS_uint & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::method_last (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::add_operation (const GALGAS_nonTerminalToAddList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result = GALGAS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result = GALGAS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalToAddList result = GALGAS_nonTerminalToAddList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::plusAssign_operation (const GALGAS_nonTerminalToAddList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::setter_setMSyntaxComponentNameAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_nonTerminalToAddList::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalToAddList::setter_setMNonTerminalToAddCountAtIndex (GALGAS_uint inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonTerminalToAddCount = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_nonTerminalToAddList::getter_mNonTerminalToAddCountAtIndex (const GALGAS_uint & inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalToAddList * p = (cCollectionElement_nonTerminalToAddList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
    result = p->mObject.mProperty_mNonTerminalToAddCount ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_nonTerminalToAddList::cEnumerator_nonTerminalToAddList (const GALGAS_nonTerminalToAddList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList_2D_element cEnumerator_nonTerminalToAddList::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_nonTerminalToAddList::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_nonTerminalToAddList::current_mNonTerminalToAddCount (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalToAddList * p = (const cCollectionElement_nonTerminalToAddList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalToAddList) ;
  return p->mObject.mProperty_mNonTerminalToAddCount ;
}




//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalToAddList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalToAddList ("nonTerminalToAddList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalToAddList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalToAddList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalToAddList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalToAddList GALGAS_nonTerminalToAddList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalToAddList result ;
  const GALGAS_nonTerminalToAddList * p = (const GALGAS_nonTerminalToAddList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalToAddList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalToAddList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@terminalCheckAssignementList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_terminalCheckAssignementList : public cCollectionElement {
  public: GALGAS_terminalCheckAssignementList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_terminalCheckAssignementList (const GALGAS_string & in_mTypeName,
                                                           const GALGAS_string & in_mTargetVarCppName,
                                                           const GALGAS_string & in_mSourceLexicalAttributeName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_terminalCheckAssignementList (const GALGAS_terminalCheckAssignementList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GALGAS_string & in_mTypeName,
                                                                                                  const GALGAS_string & in_mTargetVarCppName,
                                                                                                  const GALGAS_string & in_mSourceLexicalAttributeName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mTargetVarCppName, in_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_terminalCheckAssignementList::cCollectionElement_terminalCheckAssignementList (const GALGAS_terminalCheckAssignementList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mTargetVarCppName, inElement.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_terminalCheckAssignementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_terminalCheckAssignementList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_terminalCheckAssignementList (mObject.mProperty_mTypeName, mObject.mProperty_mTargetVarCppName, mObject.mProperty_mSourceLexicalAttributeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_terminalCheckAssignementList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetVarCppName" ":") ;
  mObject.mProperty_mTargetVarCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceLexicalAttributeName" ":") ;
  mObject.mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_terminalCheckAssignementList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_terminalCheckAssignementList * operand = (cCollectionElement_terminalCheckAssignementList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_terminalCheckAssignementList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList::GALGAS_terminalCheckAssignementList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList::GALGAS_terminalCheckAssignementList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_terminalCheckAssignementList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                   const GALGAS_string & inOperand1,
                                                                                                   const GALGAS_string & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_terminalCheckAssignementList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_terminalCheckAssignementList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_string & in_mTypeName,
                                                                     const GALGAS_string & in_mTargetVarCppName,
                                                                     const GALGAS_string & in_mSourceLexicalAttributeName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = nullptr ;
  macroMyNew (p, cCollectionElement_terminalCheckAssignementList (in_mTypeName,
                                                                  in_mTargetVarCppName,
                                                                  in_mSourceLexicalAttributeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::addAssign_operation (const GALGAS_string & inOperand0,
                                                               const GALGAS_string & inOperand1,
                                                               const GALGAS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_append (const GALGAS_string inOperand0,
                                                         const GALGAS_string inOperand1,
                                                         const GALGAS_string inOperand2,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                const GALGAS_string inOperand1,
                                                                const GALGAS_string inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_terminalCheckAssignementList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                GALGAS_string & outOperand1,
                                                                GALGAS_string & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
        outOperand0 = p->mObject.mProperty_mTypeName ;
        outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
        outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_popFirst (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_popLast (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::method_first (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::method_last (GALGAS_string & outOperand0,
                                                       GALGAS_string & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mTargetVarCppName ;
    outOperand2 = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::add_operation (const GALGAS_terminalCheckAssignementList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result = GALGAS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result = GALGAS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_terminalCheckAssignementList result = GALGAS_terminalCheckAssignementList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::plusAssign_operation (const GALGAS_terminalCheckAssignementList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_setMTypeNameAtIndex (GALGAS_string inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_terminalCheckAssignementList::getter_mTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_setMTargetVarCppNameAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetVarCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_terminalCheckAssignementList::getter_mTargetVarCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mTargetVarCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalCheckAssignementList::setter_setMSourceLexicalAttributeNameAtIndex (GALGAS_string inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceLexicalAttributeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_terminalCheckAssignementList::getter_mSourceLexicalAttributeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_terminalCheckAssignementList * p = (cCollectionElement_terminalCheckAssignementList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
    result = p->mObject.mProperty_mSourceLexicalAttributeName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_terminalCheckAssignementList::cEnumerator_terminalCheckAssignementList (const GALGAS_terminalCheckAssignementList & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList_2D_element cEnumerator_terminalCheckAssignementList::current (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_terminalCheckAssignementList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_terminalCheckAssignementList::current_mTargetVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mTargetVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_terminalCheckAssignementList::current_mSourceLexicalAttributeName (LOCATION_ARGS) const {
  const cCollectionElement_terminalCheckAssignementList * p = (const cCollectionElement_terminalCheckAssignementList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_terminalCheckAssignementList) ;
  return p->mObject.mProperty_mSourceLexicalAttributeName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckAssignementList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckAssignementList ("terminalCheckAssignementList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalCheckAssignementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignementList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalCheckAssignementList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckAssignementList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckAssignementList GALGAS_terminalCheckAssignementList::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckAssignementList result ;
  const GALGAS_terminalCheckAssignementList * p = (const GALGAS_terminalCheckAssignementList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalCheckAssignementList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckAssignementList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_syntaxInstructionForGeneration::objectCompare (const GALGAS_syntaxInstructionForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration::GALGAS_syntaxInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration::GALGAS_syntaxInstructionForGeneration (const cPtr_syntaxInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syntaxInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_syntaxInstructionForGeneration * p = (cPtr_syntaxInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionForGeneration::cPtr_syntaxInstructionForGeneration (const GALGAS_location & in_mInstructionLocation
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ("syntaxInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration GALGAS_syntaxInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionForGeneration result ;
  const GALGAS_syntaxInstructionForGeneration * p = (const GALGAS_syntaxInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syntaxInstructionForGeneration_2D_weak::objectCompare (const GALGAS_syntaxInstructionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration_2D_weak::GALGAS_syntaxInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration_2D_weak & GALGAS_syntaxInstructionForGeneration_2D_weak::operator = (const GALGAS_syntaxInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration_2D_weak::GALGAS_syntaxInstructionForGeneration_2D_weak (const GALGAS_syntaxInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration_2D_weak GALGAS_syntaxInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syntaxInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration GALGAS_syntaxInstructionForGeneration_2D_weak::bang_syntaxInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionForGeneration) ;
      result = GALGAS_syntaxInstructionForGeneration ((cPtr_syntaxInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak ("syntaxInstructionForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionForGeneration_2D_weak GALGAS_syntaxInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionForGeneration_2D_weak result ;
  const GALGAS_syntaxInstructionForGeneration_2D_weak * p = (const GALGAS_syntaxInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@filewrapperTemplateListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_filewrapperTemplateListForGeneration : public cCollectionElement {
  public: GALGAS_filewrapperTemplateListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                   const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                   const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_filewrapperTemplateListForGeneration (const GALGAS_filewrapperTemplateListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GALGAS_string & in_mFilewrapperTemplateName,
                                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                  const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplateFormalInputParameters, in_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListForGeneration::cCollectionElement_filewrapperTemplateListForGeneration (const GALGAS_filewrapperTemplateListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplateFormalInputParameters, inElement.mProperty_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_filewrapperTemplateListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_filewrapperTemplateListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListForGeneration (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplateFormalInputParameters, mObject.mProperty_mTemplateInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_filewrapperTemplateListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateName" ":") ;
  mObject.mProperty_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateFormalInputParameters" ":") ;
  mObject.mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTemplateInstructionListForGeneration" ":") ;
  mObject.mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_filewrapperTemplateListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_filewrapperTemplateListForGeneration * operand = (cCollectionElement_filewrapperTemplateListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration::GALGAS_filewrapperTemplateListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration::GALGAS_filewrapperTemplateListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                   const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                                                                   const GALGAS_templateInstructionListForGeneration & inOperand2
                                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_string & in_mFilewrapperTemplateName,
                                                                             const GALGAS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                             const GALGAS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (in_mFilewrapperTemplateName,
                                                                          in_mFilewrapperTemplateFormalInputParameters,
                                                                          in_mTemplateInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                       const GALGAS_formalInputParameterListForGeneration & inOperand1,
                                                                       const GALGAS_templateInstructionListForGeneration & inOperand2
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_append (const GALGAS_string inOperand0,
                                                                 const GALGAS_formalInputParameterListForGeneration inOperand1,
                                                                 const GALGAS_templateInstructionListForGeneration inOperand2,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                        const GALGAS_formalInputParameterListForGeneration inOperand1,
                                                                        const GALGAS_templateInstructionListForGeneration inOperand2,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_filewrapperTemplateListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                        GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                        GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
        outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
        outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                                   GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                   GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                                  GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                  GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::method_first (GALGAS_string & outOperand0,
                                                                GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                                GALGAS_templateInstructionListForGeneration & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::method_last (GALGAS_string & outOperand0,
                                                               GALGAS_formalInputParameterListForGeneration & outOperand1,
                                                               GALGAS_templateInstructionListForGeneration & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
    outOperand2 = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::add_operation (const GALGAS_filewrapperTemplateListForGeneration & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result = GALGAS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result = GALGAS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListForGeneration result = GALGAS_filewrapperTemplateListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::plusAssign_operation (const GALGAS_filewrapperTemplateListForGeneration inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateNameAtIndex (GALGAS_string inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GALGAS_formalInputParameterListForGeneration inOperand,
                                                                                                              GALGAS_uint inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration GALGAS_filewrapperTemplateListForGeneration::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GALGAS_formalInputParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListForGeneration::setter_setMTemplateInstructionListForGenerationAtIndex (GALGAS_templateInstructionListForGeneration inOperand,
                                                                                                          GALGAS_uint inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTemplateInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration GALGAS_filewrapperTemplateListForGeneration::getter_mTemplateInstructionListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListForGeneration * p = (cCollectionElement_filewrapperTemplateListForGeneration *) attributes.ptr () ;
  GALGAS_templateInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
    result = p->mObject.mProperty_mTemplateInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_filewrapperTemplateListForGeneration::cEnumerator_filewrapperTemplateListForGeneration (const GALGAS_filewrapperTemplateListForGeneration & inEnumeratedObject,
                                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration_2D_element cEnumerator_filewrapperTemplateListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalInputParameterListForGeneration cEnumerator_filewrapperTemplateListForGeneration::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_templateInstructionListForGeneration cEnumerator_filewrapperTemplateListForGeneration::current_mTemplateInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListForGeneration * p = (const cCollectionElement_filewrapperTemplateListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListForGeneration) ;
  return p->mObject.mProperty_mTemplateInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @filewrapperTemplateListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ("filewrapperTemplateListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListForGeneration GALGAS_filewrapperTemplateListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListForGeneration result ;
  const GALGAS_filewrapperTemplateListForGeneration * p = (const GALGAS_filewrapperTemplateListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperTemplateListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration1'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GALGAS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_31_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                GALGAS_stringset & io_ioInclusionSet,
                                                GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_31_  (io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendDeclaration2'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendDeclaration_32_ (const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outHeader = GALGAS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendDeclaration_32_ (cPtr_semanticDeclarationForGeneration * inObject,
                                                const GALGAS_string constin_inOutputDirectory,
                                                GALGAS_stringset & io_ioInclusionSet,
                                                GALGAS_string & out_outHeader,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  out_outHeader.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendDeclaration_32_  (constin_inOutputDirectory, io_ioInclusionSet, out_outHeader, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticDeclarationForGeneration appendTypeGenericImplementation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticDeclarationForGeneration::getter_appendTypeGenericImplementation (Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outImplementation ; // Returned variable
  result_outImplementation = GALGAS_string::makeEmptyString () ;
//---
  return result_outImplementation ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_appendTypeGenericImplementation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificImplementation'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificImplementation (cPtr_semanticDeclarationForGeneration * inObject,
                                                       const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                       GALGAS_stringset & io_ioInclusionSet,
                                                       GALGAS_string & out_outImplementation,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  out_outImplementation.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificImplementation  (constin_inUnifiedTypeMap, io_ioInclusionSet, out_outImplementation, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationForGeneration appendSpecificFiles'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationForGeneration::method_appendSpecificFiles (const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        GALGAS_stringset & /* ioArgument_ioAllProductFileSet */,
                                                                        GALGAS_stringlist & /* ioArgument_ioCocoaProductFileList */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSpecificFiles (cPtr_semanticDeclarationForGeneration * inObject,
                                              const GALGAS_string constin_inProductDirectory,
                                              GALGAS_stringset & io_ioAllProductFileSet,
                                              GALGAS_stringlist & io_ioCocoaProductFileList,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationForGeneration) ;
    inObject->method_appendSpecificFiles  (constin_inProductDirectory, io_ioAllProductFileSet, io_ioCocoaProductFileList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (cPtr_semanticInstructionAST * inObject,
                                                     const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GALGAS_analysisContext constin_inAnalysisContext,
                                                     GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                     GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     GALGAS_localVarManager & io_ioVariableMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_analyzeSemanticInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionListForGeneration, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localConstantList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localConstantList : public cCollectionElement {
  public: GALGAS_localConstantList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_localConstantList (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                const GALGAS_lstring & in_mName,
                                                const GALGAS_bool & in_mNoWarningIfUnused,
                                                const GALGAS_string & in_mCppName
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localConstantList (const GALGAS_localConstantList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                            const GALGAS_lstring & in_mName,
                                                                            const GALGAS_bool & in_mNoWarningIfUnused,
                                                                            const GALGAS_string & in_mCppName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mNoWarningIfUnused, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localConstantList::cCollectionElement_localConstantList (const GALGAS_localConstantList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mNoWarningIfUnused, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localConstantList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localConstantList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localConstantList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mNoWarningIfUnused, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localConstantList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNoWarningIfUnused" ":") ;
  mObject.mProperty_mNoWarningIfUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_localConstantList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_localConstantList * operand = (cCollectionElement_localConstantList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_localConstantList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList::GALGAS_localConstantList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList::GALGAS_localConstantList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList GALGAS_localConstantList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_localConstantList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList GALGAS_localConstantList::class_func_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                             const GALGAS_lstring & inOperand1,
                                                                             const GALGAS_bool & inOperand2,
                                                                             const GALGAS_string & inOperand3
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_localConstantList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_localConstantList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_localConstantList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_unifiedTypeMapEntry & in_mType,
                                                          const GALGAS_lstring & in_mName,
                                                          const GALGAS_bool & in_mNoWarningIfUnused,
                                                          const GALGAS_string & in_mCppName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localConstantList (in_mType,
                                                       in_mName,
                                                       in_mNoWarningIfUnused,
                                                       in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::addAssign_operation (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                    const GALGAS_lstring & inOperand1,
                                                    const GALGAS_bool & inOperand2,
                                                    const GALGAS_string & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_append (const GALGAS_unifiedTypeMapEntry inOperand0,
                                              const GALGAS_lstring inOperand1,
                                              const GALGAS_bool inOperand2,
                                              const GALGAS_string inOperand3,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_insertAtIndex (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                     const GALGAS_lstring inOperand1,
                                                     const GALGAS_bool inOperand2,
                                                     const GALGAS_string inOperand3,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_localConstantList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_removeAtIndex (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_bool & outOperand2,
                                                     GALGAS_string & outOperand3,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_localConstantList) ;
        outOperand0 = p->mObject.mProperty_mType ;
        outOperand1 = p->mObject.mProperty_mName ;
        outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
        outOperand3 = p->mObject.mProperty_mCppName ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_popFirst (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_bool & outOperand2,
                                                GALGAS_string & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_popLast (GALGAS_unifiedTypeMapEntry & outOperand0,
                                               GALGAS_lstring & outOperand1,
                                               GALGAS_bool & outOperand2,
                                               GALGAS_string & outOperand3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::method_first (GALGAS_unifiedTypeMapEntry & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_bool & outOperand2,
                                             GALGAS_string & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::method_last (GALGAS_unifiedTypeMapEntry & outOperand0,
                                            GALGAS_lstring & outOperand1,
                                            GALGAS_bool & outOperand2,
                                            GALGAS_string & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mNoWarningIfUnused ;
    outOperand3 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList GALGAS_localConstantList::add_operation (const GALGAS_localConstantList & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localConstantList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList GALGAS_localConstantList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantList result = GALGAS_localConstantList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList GALGAS_localConstantList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantList result = GALGAS_localConstantList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList GALGAS_localConstantList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantList result = GALGAS_localConstantList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::plusAssign_operation (const GALGAS_localConstantList inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_setMTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                       GALGAS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_localConstantList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                       GALGAS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localConstantList::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_setMNoWarningIfUnusedAtIndex (GALGAS_bool inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNoWarningIfUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localConstantList::getter_mNoWarningIfUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mNoWarningIfUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localConstantList::setter_setMCppNameAtIndex (GALGAS_string inOperand,
                                                          GALGAS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localConstantList::getter_mCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localConstantList * p = (cCollectionElement_localConstantList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localConstantList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_localConstantList::cEnumerator_localConstantList (const GALGAS_localConstantList & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList_2D_element cEnumerator_localConstantList::current (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_localConstantList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_localConstantList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_localConstantList::current_mNoWarningIfUnused (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mNoWarningIfUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_localConstantList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localConstantList * p = (const cCollectionElement_localConstantList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localConstantList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @localConstantList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantList ("localConstantList",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantList GALGAS_localConstantList::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantList result ;
  const GALGAS_localConstantList * p = (const GALGAS_localConstantList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localConstantList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localInitializedVariableList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localInitializedVariableList : public cCollectionElement {
  public: GALGAS_localInitializedVariableList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_localInitializedVariableList (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                           const GALGAS_lstring & in_mName,
                                                           const GALGAS_string & in_mCppName
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localInitializedVariableList (const GALGAS_localInitializedVariableList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                                                  const GALGAS_lstring & in_mName,
                                                                                                  const GALGAS_string & in_mCppName
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mType, in_mName, in_mCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localInitializedVariableList::cCollectionElement_localInitializedVariableList (const GALGAS_localInitializedVariableList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mType, inElement.mProperty_mName, inElement.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localInitializedVariableList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localInitializedVariableList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localInitializedVariableList (mObject.mProperty_mType, mObject.mProperty_mName, mObject.mProperty_mCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localInitializedVariableList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mName" ":") ;
  mObject.mProperty_mName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mObject.mProperty_mCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_localInitializedVariableList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_localInitializedVariableList * operand = (cCollectionElement_localInitializedVariableList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_localInitializedVariableList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList::GALGAS_localInitializedVariableList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList::GALGAS_localInitializedVariableList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_localInitializedVariableList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::class_func_listWithValue (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                                                                   const GALGAS_lstring & inOperand1,
                                                                                                   const GALGAS_string & inOperand2
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_localInitializedVariableList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_localInitializedVariableList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_unifiedTypeMapEntry & in_mType,
                                                                     const GALGAS_lstring & in_mName,
                                                                     const GALGAS_string & in_mCppName
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = nullptr ;
  macroMyNew (p, cCollectionElement_localInitializedVariableList (in_mType,
                                                                  in_mName,
                                                                  in_mCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::addAssign_operation (const GALGAS_unifiedTypeMapEntry & inOperand0,
                                                               const GALGAS_lstring & inOperand1,
                                                               const GALGAS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_append (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_string inOperand2,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_insertAtIndex (const GALGAS_unifiedTypeMapEntry inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_string inOperand2,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_localInitializedVariableList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_removeAtIndex (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_string & outOperand2,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
        outOperand0 = p->mObject.mProperty_mType ;
        outOperand1 = p->mObject.mProperty_mName ;
        outOperand2 = p->mObject.mProperty_mCppName ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_popFirst (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_string & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_popLast (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::method_first (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_string & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::method_last (GALGAS_unifiedTypeMapEntry & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       GALGAS_string & outOperand2,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    outOperand0 = p->mObject.mProperty_mType ;
    outOperand1 = p->mObject.mProperty_mName ;
    outOperand2 = p->mObject.mProperty_mCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::add_operation (const GALGAS_localInitializedVariableList & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result = GALGAS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result = GALGAS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_localInitializedVariableList result = GALGAS_localInitializedVariableList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::plusAssign_operation (const GALGAS_localInitializedVariableList inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_setMTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_localInitializedVariableList::getter_mTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_setMNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_localInitializedVariableList::getter_mNameAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localInitializedVariableList::setter_setMCppNameAtIndex (GALGAS_string inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localInitializedVariableList::getter_mCppNameAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localInitializedVariableList * p = (cCollectionElement_localInitializedVariableList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
    result = p->mObject.mProperty_mCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_localInitializedVariableList::cEnumerator_localInitializedVariableList (const GALGAS_localInitializedVariableList & inEnumeratedObject,
                                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList_2D_element cEnumerator_localInitializedVariableList::current (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_localInitializedVariableList::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_localInitializedVariableList::current_mName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_localInitializedVariableList::current_mCppName (LOCATION_ARGS) const {
  const cCollectionElement_localInitializedVariableList * p = (const cCollectionElement_localInitializedVariableList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localInitializedVariableList) ;
  return p->mObject.mProperty_mCppName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @localInitializedVariableList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localInitializedVariableList ("localInitializedVariableList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localInitializedVariableList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localInitializedVariableList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localInitializedVariableList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localInitializedVariableList GALGAS_localInitializedVariableList::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localInitializedVariableList result ;
  const GALGAS_localInitializedVariableList * p = (const GALGAS_localInitializedVariableList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localInitializedVariableList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_correspondingEffectiveParameterString (const GALGAS_formalArgumentPassingModeAST & inObject,
                                                                     Compiler *
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_result = GALGAS_string ("!\?") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractGrammarInstructionSyntaxDirectedTranslationResult reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::objectCompare (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractGrammarInstructionSyntaxDirectedTranslationResult class
//--------------------------------------------------------------------------------------------------

cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ("abstractGrammarInstructionSyntaxDirectedTranslationResult",
                                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult::extractObject (const GALGAS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_semanticDeclarationAST * inObject,
                                           GALGAS_lstringlist & io_ioUsefulnessRootEntities,
                                           GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const GALGAS_string constin_inProductDirectory,
                                           const GALGAS_semanticContext constin_inSemanticContext,
                                           GALGAS_unifiedTypeMap & io_ioTypeMap,
                                           const GALGAS_predefinedTypes constin_inPredefinedTypes,
                                           GALGAS_semanticDeclarationListForGeneration & io_ioSemanticDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_semanticAnalysis (io_ioUsefulnessRootEntities, io_ioUsefulEntitiesGraph, constin_inProductDirectory, constin_inSemanticContext, io_ioTypeMap, constin_inPredefinedTypes, io_ioSemanticDeclarationListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap::cMapElement_propertyIndexMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_unifiedTypeMapEntry & in_mPropertyTypeIndex
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mPropertyTypeIndex (in_mPropertyTypeIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_propertyIndexMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_propertyIndexMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_propertyIndexMap (mProperty_lkey, mProperty_mPropertyTypeIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_propertyIndexMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mPropertyTypeIndex" ":") ;
  mProperty_mPropertyTypeIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_propertyIndexMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_propertyIndexMap * operand = (cMapElement_propertyIndexMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPropertyTypeIndex.objectCompare (operand->mProperty_mPropertyTypeIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap::GALGAS_propertyIndexMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap::GALGAS_propertyIndexMap (const GALGAS_propertyIndexMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap & GALGAS_propertyIndexMap::operator = (const GALGAS_propertyIndexMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap GALGAS_propertyIndexMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_propertyIndexMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap GALGAS_propertyIndexMap::class_func_mapWithMapToOverride (const GALGAS_propertyIndexMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyIndexMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap GALGAS_propertyIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_propertyIndexMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_unifiedTypeMapEntry & inArgument0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@propertyIndexMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap GALGAS_propertyIndexMap::add_operation (const GALGAS_propertyIndexMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_propertyIndexMap result = *this ;
  cEnumerator_propertyIndexMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mPropertyTypeIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMapEntry inArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * p = nullptr ;
  macroMyNew (p, cMapElement_propertyIndexMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_propertyIndexMap_searchKey = "the '%K' attribute is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMapEntry & outArgument0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_propertyIndexMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    outArgument0 = p->mProperty_mPropertyTypeIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_propertyIndexMap::getter_mPropertyTypeIndexForKey (const GALGAS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) attributes ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    result = p->mProperty_mPropertyTypeIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyIndexMap::setter_setMPropertyTypeIndexForKey (GALGAS_unifiedTypeMapEntry inAttributeValue,
                                                                  GALGAS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_propertyIndexMap * p = (cMapElement_propertyIndexMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    p->mProperty_mPropertyTypeIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_propertyIndexMap * GALGAS_propertyIndexMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_propertyIndexMap * result = (cMapElement_propertyIndexMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_propertyIndexMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_propertyIndexMap::cEnumerator_propertyIndexMap (const GALGAS_propertyIndexMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap_2D_element cEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return GALGAS_propertyIndexMap_2D_element (p->mProperty_lkey, p->mProperty_mPropertyTypeIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
  return p->mProperty_mPropertyTypeIndex ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyIndexMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_unifiedTypeMapEntry & outArgument0) const {
  const cMapElement_propertyIndexMap * p = (const cMapElement_propertyIndexMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_propertyIndexMap) ;
    outArgument0 = p->mProperty_mPropertyTypeIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyIndexMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyIndexMap ("propertyIndexMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyIndexMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyIndexMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyIndexMap GALGAS_propertyIndexMap::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyIndexMap result ;
  const GALGAS_propertyIndexMap * p = (const GALGAS_propertyIndexMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyIndexMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyIndexMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap::cMapElement_nonterminalLabelMap (const GALGAS_lstring & inKey,
                                                                  const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                  const GALGAS_formalParameterSignature & in_mSignature,
                                                                  const GALGAS_location & in_mEndOfArgumentLocation
                                                                  COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mSignatureForGeneration (in_mSignatureForGeneration),
mProperty_mSignature (in_mSignature),
mProperty_mEndOfArgumentLocation (in_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalLabelMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalLabelMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalLabelMap (mProperty_lkey, mProperty_mSignatureForGeneration, mProperty_mSignature, mProperty_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalLabelMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignatureForGeneration" ":") ;
  mProperty_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_nonterminalLabelMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonterminalLabelMap * operand = (cMapElement_nonterminalLabelMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSignatureForGeneration.objectCompare (operand->mProperty_mSignatureForGeneration) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSignature.objectCompare (operand->mProperty_mSignature) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mEndOfArgumentLocation.objectCompare (operand->mProperty_mEndOfArgumentLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap::GALGAS_nonterminalLabelMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap::GALGAS_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap & GALGAS_nonterminalLabelMap::operator = (const GALGAS_nonterminalLabelMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::class_func_mapWithMapToOverride (const GALGAS_nonterminalLabelMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalLabelMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                      const GALGAS_formalParameterListForGeneration & inArgument0,
                                                      const GALGAS_formalParameterSignature & inArgument1,
                                                      const GALGAS_location & inArgument2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalLabelMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::add_operation (const GALGAS_nonterminalLabelMap & inOperand,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalLabelMap result = *this ;
  cEnumerator_nonterminalLabelMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mSignatureForGeneration (HERE), enumerator.current_mSignature (HERE), enumerator.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap::setter_insertKey (GALGAS_lstring inKey,
                                                   GALGAS_formalParameterListForGeneration inArgument0,
                                                   GALGAS_formalParameterSignature inArgument1,
                                                   GALGAS_location inArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalLabelMap (inKey, inArgument0, inArgument1, inArgument2 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal label has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalLabelMap_searchKey = "the '%K' nonterminal label is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap::method_searchKey (GALGAS_lstring inKey,
                                                   GALGAS_formalParameterListForGeneration & outArgument0,
                                                   GALGAS_formalParameterSignature & outArgument1,
                                                   GALGAS_location & outArgument2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) performSearch (inKey,
                                                                                                       inCompiler,
                                                                                                       kSearchErrorMessage_nonterminalLabelMap_searchKey
                                                                                                       COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    outArgument0 = p->mProperty_mSignatureForGeneration ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mEndOfArgumentLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_nonterminalLabelMap::getter_mSignatureForGenerationForKey (const GALGAS_string & inKey,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GALGAS_formalParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mSignatureForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_nonterminalLabelMap::getter_mSignatureForKey (const GALGAS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GALGAS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_nonterminalLabelMap::getter_mEndOfArgumentLocationForKey (const GALGAS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) attributes ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    result = p->mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap::setter_setMSignatureForGenerationForKey (GALGAS_formalParameterListForGeneration inAttributeValue,
                                                                          GALGAS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mSignatureForGeneration = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap::setter_setMSignatureForKey (GALGAS_formalParameterSignature inAttributeValue,
                                                             GALGAS_string inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mSignature = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalLabelMap::setter_setMEndOfArgumentLocationForKey (GALGAS_location inAttributeValue,
                                                                         GALGAS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalLabelMap * p = (cMapElement_nonterminalLabelMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    p->mProperty_mEndOfArgumentLocation = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalLabelMap * GALGAS_nonterminalLabelMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                 const GALGAS_string & inKey
                                                                                                 COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalLabelMap * result = (cMapElement_nonterminalLabelMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalLabelMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonterminalLabelMap::cEnumerator_nonterminalLabelMap (const GALGAS_nonterminalLabelMap & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap_2D_element cEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return GALGAS_nonterminalLabelMap_2D_element (p->mProperty_lkey, p->mProperty_mSignatureForGeneration, p->mProperty_mSignature, p->mProperty_mEndOfArgumentLocation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration cEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature cEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
  return p->mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalLabelMap::optional_searchKey (const GALGAS_string & inKey,
                                                     GALGAS_formalParameterListForGeneration & outArgument0,
                                                     GALGAS_formalParameterSignature & outArgument1,
                                                     GALGAS_location & outArgument2) const {
  const cMapElement_nonterminalLabelMap * p = (const cMapElement_nonterminalLabelMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_nonterminalLabelMap) ;
    outArgument0 = p->mProperty_mSignatureForGeneration ;
    outArgument1 = p->mProperty_mSignature ;
    outArgument2 = p->mProperty_mEndOfArgumentLocation ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalLabelMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ("nonterminalLabelMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalLabelMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalLabelMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap GALGAS_nonterminalLabelMap::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalLabelMap result ;
  const GALGAS_nonterminalLabelMap * p = (const GALGAS_nonterminalLabelMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalLabelMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalLabelMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap::cMapElement_nonterminalMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_nonterminalLabelMap & in_mLabelMap
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLabelMap (in_mLabelMap) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_nonterminalMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_nonterminalMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_nonterminalMap (mProperty_lkey, mProperty_mLabelMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_nonterminalMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelMap" ":") ;
  mProperty_mLabelMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_nonterminalMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_nonterminalMap * operand = (cMapElement_nonterminalMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLabelMap.objectCompare (operand->mProperty_mLabelMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap::GALGAS_nonterminalMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap::GALGAS_nonterminalMap (const GALGAS_nonterminalMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap & GALGAS_nonterminalMap::operator = (const GALGAS_nonterminalMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap GALGAS_nonterminalMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_nonterminalMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap GALGAS_nonterminalMap::class_func_mapWithMapToOverride (const GALGAS_nonterminalMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap GALGAS_nonterminalMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_nonterminalLabelMap & inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@nonterminalMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap GALGAS_nonterminalMap::add_operation (const GALGAS_nonterminalMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalMap result = *this ;
  cEnumerator_nonterminalMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLabelMap (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap::setter_insertKey (GALGAS_lstring inKey,
                                              GALGAS_nonterminalLabelMap inArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * p = nullptr ;
  macroMyNew (p, cMapElement_nonterminalMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal has been already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_nonterminalMap_searchKey = "the '%K' nonterminal is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap::method_searchKey (GALGAS_lstring inKey,
                                              GALGAS_nonterminalLabelMap & outArgument0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) performSearch (inKey,
                                                                                             inCompiler,
                                                                                             kSearchErrorMessage_nonterminalMap_searchKey
                                                                                             COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    outArgument0 = p->mProperty_mLabelMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap GALGAS_nonterminalMap::getter_mLabelMapForKey (const GALGAS_string & inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) attributes ;
  GALGAS_nonterminalLabelMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    result = p->mProperty_mLabelMap ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalMap::setter_setMLabelMapForKey (GALGAS_nonterminalLabelMap inAttributeValue,
                                                       GALGAS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_nonterminalMap * p = (cMapElement_nonterminalMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    p->mProperty_mLabelMap = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_nonterminalMap * GALGAS_nonterminalMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_nonterminalMap * result = (cMapElement_nonterminalMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_nonterminalMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonterminalMap::cEnumerator_nonterminalMap (const GALGAS_nonterminalMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap_2D_element cEnumerator_nonterminalMap::current (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return GALGAS_nonterminalMap_2D_element (p->mProperty_lkey, p->mProperty_mLabelMap) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonterminalMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalLabelMap cEnumerator_nonterminalMap::current_mLabelMap (LOCATION_ARGS) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_nonterminalMap) ;
  return p->mProperty_mLabelMap ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_nonterminalMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_nonterminalLabelMap & outArgument0) const {
  const cMapElement_nonterminalMap * p = (const cMapElement_nonterminalMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_nonterminalMap) ;
    outArgument0 = p->mProperty_mLabelMap ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalMap ("nonterminalMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap GALGAS_nonterminalMap::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalMap result ;
  const GALGAS_nonterminalMap * p = (const GALGAS_nonterminalMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ruleLabelImplementationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleLabelImplementationList : public cCollectionElement {
  public: GALGAS_ruleLabelImplementationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleLabelImplementationList (const GALGAS_lstring & in_mLabelName,
                                                          const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                          const GALGAS_formalParameterSignature & in_mSignature,
                                                          const GALGAS_location & in_mEndOfArgumentLocation,
                                                          const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleLabelImplementationList (const GALGAS_ruleLabelImplementationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GALGAS_lstring & in_mLabelName,
                                                                                                const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                const GALGAS_formalParameterSignature & in_mSignature,
                                                                                                const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mSignatureForGeneration, in_mSignature, in_mEndOfArgumentLocation, in_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleLabelImplementationList::cCollectionElement_ruleLabelImplementationList (const GALGAS_ruleLabelImplementationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mSignatureForGeneration, inElement.mProperty_mSignature, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleLabelImplementationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleLabelImplementationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleLabelImplementationList (mObject.mProperty_mLabelName, mObject.mProperty_mSignatureForGeneration, mObject.mProperty_mSignature, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mInstructionListForGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleLabelImplementationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelName" ":") ;
  mObject.mProperty_mLabelName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignatureForGeneration" ":") ;
  mObject.mProperty_mSignatureForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSignature" ":") ;
  mObject.mProperty_mSignature.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mObject.mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionListForGeneration" ":") ;
  mObject.mProperty_mInstructionListForGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_ruleLabelImplementationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ruleLabelImplementationList * operand = (cCollectionElement_ruleLabelImplementationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ruleLabelImplementationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList::GALGAS_ruleLabelImplementationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList::GALGAS_ruleLabelImplementationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleLabelImplementationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                 const GALGAS_formalParameterListForGeneration & inOperand1,
                                                                                                 const GALGAS_formalParameterSignature & inOperand2,
                                                                                                 const GALGAS_location & inOperand3,
                                                                                                 const GALGAS_semanticInstructionListForGeneration & inOperand4
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_ruleLabelImplementationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ruleLabelImplementationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mLabelName,
                                                                    const GALGAS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                    const GALGAS_formalParameterSignature & in_mSignature,
                                                                    const GALGAS_location & in_mEndOfArgumentLocation,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructionListForGeneration
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleLabelImplementationList (in_mLabelName,
                                                                 in_mSignatureForGeneration,
                                                                 in_mSignature,
                                                                 in_mEndOfArgumentLocation,
                                                                 in_mInstructionListForGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_formalParameterListForGeneration & inOperand1,
                                                              const GALGAS_formalParameterSignature & inOperand2,
                                                              const GALGAS_location & inOperand3,
                                                              const GALGAS_semanticInstructionListForGeneration & inOperand4
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_formalParameterListForGeneration inOperand1,
                                                        const GALGAS_formalParameterSignature inOperand2,
                                                        const GALGAS_location inOperand3,
                                                        const GALGAS_semanticInstructionListForGeneration inOperand4,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_formalParameterListForGeneration inOperand1,
                                                               const GALGAS_formalParameterSignature inOperand2,
                                                               const GALGAS_location inOperand3,
                                                               const GALGAS_semanticInstructionListForGeneration inOperand4,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ruleLabelImplementationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_formalParameterListForGeneration & outOperand1,
                                                               GALGAS_formalParameterSignature & outOperand2,
                                                               GALGAS_location & outOperand3,
                                                               GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
        outOperand0 = p->mObject.mProperty_mLabelName ;
        outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
        outOperand2 = p->mObject.mProperty_mSignature ;
        outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
        outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_formalParameterListForGeneration & outOperand1,
                                                          GALGAS_formalParameterSignature & outOperand2,
                                                          GALGAS_location & outOperand3,
                                                          GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_formalParameterListForGeneration & outOperand1,
                                                         GALGAS_formalParameterSignature & outOperand2,
                                                         GALGAS_location & outOperand3,
                                                         GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_formalParameterListForGeneration & outOperand1,
                                                       GALGAS_formalParameterSignature & outOperand2,
                                                       GALGAS_location & outOperand3,
                                                       GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_formalParameterListForGeneration & outOperand1,
                                                      GALGAS_formalParameterSignature & outOperand2,
                                                      GALGAS_location & outOperand3,
                                                      GALGAS_semanticInstructionListForGeneration & outOperand4,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mSignatureForGeneration ;
    outOperand2 = p->mObject.mProperty_mSignature ;
    outOperand3 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand4 = p->mObject.mProperty_mInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::add_operation (const GALGAS_ruleLabelImplementationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result = GALGAS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result = GALGAS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_ruleLabelImplementationList result = GALGAS_ruleLabelImplementationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::plusAssign_operation (const GALGAS_ruleLabelImplementationList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_setMLabelNameAtIndex (GALGAS_lstring inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_ruleLabelImplementationList::getter_mLabelNameAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mLabelName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_setMSignatureForGenerationAtIndex (GALGAS_formalParameterListForGeneration inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignatureForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration GALGAS_ruleLabelImplementationList::getter_mSignatureForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_formalParameterListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignatureForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_setMSignatureAtIndex (GALGAS_formalParameterSignature inOperand,
                                                                      GALGAS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSignature = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature GALGAS_ruleLabelImplementationList::getter_mSignatureAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_formalParameterSignature result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mSignature ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_setMEndOfArgumentLocationAtIndex (GALGAS_location inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfArgumentLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ruleLabelImplementationList::getter_mEndOfArgumentLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleLabelImplementationList::setter_setMInstructionListForGenerationAtIndex (GALGAS_semanticInstructionListForGeneration inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionListForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_ruleLabelImplementationList::getter_mInstructionListForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleLabelImplementationList * p = (cCollectionElement_ruleLabelImplementationList *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
    result = p->mObject.mProperty_mInstructionListForGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ruleLabelImplementationList::cEnumerator_ruleLabelImplementationList (const GALGAS_ruleLabelImplementationList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList_2D_element cEnumerator_ruleLabelImplementationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_ruleLabelImplementationList::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListForGeneration cEnumerator_ruleLabelImplementationList::current_mSignatureForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterSignature cEnumerator_ruleLabelImplementationList::current_mSignature (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_ruleLabelImplementationList::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cEnumerator_ruleLabelImplementationList::current_mInstructionListForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_ruleLabelImplementationList * p = (const cCollectionElement_ruleLabelImplementationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleLabelImplementationList) ;
  return p->mObject.mProperty_mInstructionListForGeneration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ruleLabelImplementationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList ("ruleLabelImplementationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ruleLabelImplementationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ruleLabelImplementationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleLabelImplementationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleLabelImplementationList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ruleLabelImplementationList result ;
  const GALGAS_ruleLabelImplementationList * p = (const GALGAS_ruleLabelImplementationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ruleLabelImplementationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleLabelImplementationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ruleDeclarationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ruleDeclarationList : public cCollectionElement {
  public: GALGAS_ruleDeclarationList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ruleDeclarationList (const GALGAS_string & in_mNonterminalName,
                                                  const GALGAS_uint & in_mRuleIndex,
                                                  const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ruleDeclarationList (const GALGAS_ruleDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GALGAS_string & in_mNonterminalName,
                                                                                const GALGAS_uint & in_mRuleIndex,
                                                                                const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mRuleIndex, in_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ruleDeclarationList::cCollectionElement_ruleDeclarationList (const GALGAS_ruleDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mRuleIndex, inElement.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ruleDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ruleDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ruleDeclarationList (mObject.mProperty_mNonterminalName, mObject.mProperty_mRuleIndex, mObject.mProperty_mLabelImplementationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ruleDeclarationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalName" ":") ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleIndex" ":") ;
  mObject.mProperty_mRuleIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelImplementationList" ":") ;
  mObject.mProperty_mLabelImplementationList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_ruleDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ruleDeclarationList * operand = (cCollectionElement_ruleDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ruleDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList::GALGAS_ruleDeclarationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList::GALGAS_ruleDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ruleDeclarationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::class_func_listWithValue (const GALGAS_string & inOperand0,
                                                                                 const GALGAS_uint & inOperand1,
                                                                                 const GALGAS_ruleLabelImplementationList & inOperand2
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_ruleDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ruleDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GALGAS_string & in_mNonterminalName,
                                                            const GALGAS_uint & in_mRuleIndex,
                                                            const GALGAS_ruleLabelImplementationList & in_mLabelImplementationList
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ruleDeclarationList (in_mNonterminalName,
                                                         in_mRuleIndex,
                                                         in_mLabelImplementationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                      const GALGAS_uint & inOperand1,
                                                      const GALGAS_ruleLabelImplementationList & inOperand2
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_append (const GALGAS_string inOperand0,
                                                const GALGAS_uint inOperand1,
                                                const GALGAS_ruleLabelImplementationList inOperand2,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                       const GALGAS_uint inOperand1,
                                                       const GALGAS_ruleLabelImplementationList inOperand2,
                                                       const GALGAS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ruleDeclarationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                       GALGAS_uint & outOperand1,
                                                       GALGAS_ruleLabelImplementationList & outOperand2,
                                                       const GALGAS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
        outOperand0 = p->mObject.mProperty_mNonterminalName ;
        outOperand1 = p->mObject.mProperty_mRuleIndex ;
        outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
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

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_popFirst (GALGAS_string & outOperand0,
                                                  GALGAS_uint & outOperand1,
                                                  GALGAS_ruleLabelImplementationList & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_popLast (GALGAS_string & outOperand0,
                                                 GALGAS_uint & outOperand1,
                                                 GALGAS_ruleLabelImplementationList & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::method_first (GALGAS_string & outOperand0,
                                               GALGAS_uint & outOperand1,
                                               GALGAS_ruleLabelImplementationList & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::method_last (GALGAS_string & outOperand0,
                                              GALGAS_uint & outOperand1,
                                              GALGAS_ruleLabelImplementationList & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mRuleIndex ;
    outOperand2 = p->mObject.mProperty_mLabelImplementationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::add_operation (const GALGAS_ruleDeclarationList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_ruleDeclarationList result = GALGAS_ruleDeclarationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::plusAssign_operation (const GALGAS_ruleDeclarationList inOperand,
                                                       Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_setMNonterminalNameAtIndex (GALGAS_string inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ruleDeclarationList::getter_mNonterminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_setMRuleIndexAtIndex (GALGAS_uint inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_ruleDeclarationList::getter_mRuleIndexAtIndex (const GALGAS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mRuleIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ruleDeclarationList::setter_setMLabelImplementationListAtIndex (GALGAS_ruleLabelImplementationList inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelImplementationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList GALGAS_ruleDeclarationList::getter_mLabelImplementationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ruleDeclarationList * p = (cCollectionElement_ruleDeclarationList *) attributes.ptr () ;
  GALGAS_ruleLabelImplementationList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
    result = p->mObject.mProperty_mLabelImplementationList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ruleDeclarationList::cEnumerator_ruleDeclarationList (const GALGAS_ruleDeclarationList & inEnumeratedObject,
                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList_2D_element cEnumerator_ruleDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_ruleDeclarationList::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_ruleDeclarationList::current_mRuleIndex (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mRuleIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleLabelImplementationList cEnumerator_ruleDeclarationList::current_mLabelImplementationList (LOCATION_ARGS) const {
  const cCollectionElement_ruleDeclarationList * p = (const cCollectionElement_ruleDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ruleDeclarationList) ;
  return p->mObject.mProperty_mLabelImplementationList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ruleDeclarationList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ruleDeclarationList ("ruleDeclarationList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ruleDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ruleDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ruleDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_ruleDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ruleDeclarationList result ;
  const GALGAS_ruleDeclarationList * p = (const GALGAS_ruleDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ruleDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ruleDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationMap.printNonNullClassInstanceProperties ("mNonterminalDeclarationMap") ;
    mProperty_mRuleDeclarationList.printNonNullClassInstanceProperties ("mRuleDeclarationList") ;
    mProperty_mSelectMethodCount.printNonNullClassInstanceProperties ("mSelectMethodCount") ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_syntaxDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_syntaxDeclarationForGeneration * p = (const cPtr_syntaxDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLexiqueName.objectCompare (p->mProperty_mLexiqueName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNonterminalDeclarationMap.objectCompare (p->mProperty_mNonterminalDeclarationMap) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mRuleDeclarationList.objectCompare (p->mProperty_mRuleDeclarationList) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mSelectMethodCount.objectCompare (p->mProperty_mSelectMethodCount) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasIndexing.objectCompare (p->mProperty_mHasIndexing) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mHasTranslateFeature.objectCompare (p->mProperty_mHasTranslateFeature) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_syntaxDeclarationForGeneration::objectCompare (const GALGAS_syntaxDeclarationForGeneration & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration::GALGAS_syntaxDeclarationForGeneration (void) :
GALGAS_semanticDeclarationForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration::GALGAS_syntaxDeclarationForGeneration (const cPtr_syntaxDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxDeclarationForGeneration::class_func_new (const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                             const GALGAS_string & inAttribute_mLexiqueName,
                                                                                             const GALGAS_nonterminalMap & inAttribute_mNonterminalDeclarationMap,
                                                                                             const GALGAS_ruleDeclarationList & inAttribute_mRuleDeclarationList,
                                                                                             const GALGAS_uint & inAttribute_mSelectMethodCount,
                                                                                             const GALGAS_bool & inAttribute_mHasIndexing,
                                                                                             const GALGAS_bool & inAttribute_mHasTranslateFeature
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_syntaxDeclarationForGeneration result ;
  if (inAttribute_mSyntaxComponentName.isValid () && inAttribute_mLexiqueName.isValid () && inAttribute_mNonterminalDeclarationMap.isValid () && inAttribute_mRuleDeclarationList.isValid () && inAttribute_mSelectMethodCount.isValid () && inAttribute_mHasIndexing.isValid () && inAttribute_mHasTranslateFeature.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxDeclarationForGeneration (inAttribute_mSyntaxComponentName, inAttribute_mLexiqueName, inAttribute_mNonterminalDeclarationMap, inAttribute_mRuleDeclarationList, inAttribute_mSelectMethodCount, inAttribute_mHasIndexing, inAttribute_mHasTranslateFeature COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_syntaxDeclarationForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_syntaxDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalMap GALGAS_syntaxDeclarationForGeneration::readProperty_mNonterminalDeclarationMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_nonterminalMap () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mNonterminalDeclarationMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ruleDeclarationList GALGAS_syntaxDeclarationForGeneration::readProperty_mRuleDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ruleDeclarationList () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mRuleDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_syntaxDeclarationForGeneration::readProperty_mSelectMethodCount (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSelectMethodCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_syntaxDeclarationForGeneration::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_syntaxDeclarationForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_string & in_mLexiqueName,
                                                                          const GALGAS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                          const GALGAS_ruleDeclarationList & in_mRuleDeclarationList,
                                                                          const GALGAS_uint & in_mSelectMethodCount,
                                                                          const GALGAS_bool & in_mHasIndexing,
                                                                          const GALGAS_bool & in_mHasTranslateFeature
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (THERE),
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mLexiqueName (in_mLexiqueName),
mProperty_mNonterminalDeclarationMap (in_mNonterminalDeclarationMap),
mProperty_mRuleDeclarationList (in_mRuleDeclarationList),
mProperty_mSelectMethodCount (in_mSelectMethodCount),
mProperty_mHasIndexing (in_mHasIndexing),
mProperty_mHasTranslateFeature (in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

void cPtr_syntaxDeclarationForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxDeclarationForGeneration:") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectMethodCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxDeclarationForGeneration (mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationMap, mProperty_mRuleDeclarationList, mProperty_mSelectMethodCount, mProperty_mHasIndexing, mProperty_mHasTranslateFeature COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syntaxDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ("syntaxDeclarationForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxDeclarationForGeneration result ;
  const GALGAS_syntaxDeclarationForGeneration * p = (const GALGAS_syntaxDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syntaxDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_syntaxDeclarationForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration_2D_weak::GALGAS_syntaxDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticDeclarationForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration_2D_weak & GALGAS_syntaxDeclarationForGeneration_2D_weak::operator = (const GALGAS_syntaxDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration_2D_weak::GALGAS_syntaxDeclarationForGeneration_2D_weak (const GALGAS_syntaxDeclarationForGeneration & inSource) :
GALGAS_semanticDeclarationForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration_2D_weak GALGAS_syntaxDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syntaxDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration GALGAS_syntaxDeclarationForGeneration_2D_weak::bang_syntaxDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxDeclarationForGeneration) ;
      result = GALGAS_syntaxDeclarationForGeneration ((cPtr_syntaxDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2D_weak ("syntaxDeclarationForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxDeclarationForGeneration_2D_weak GALGAS_syntaxDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxDeclarationForGeneration_2D_weak result ;
  const GALGAS_syntaxDeclarationForGeneration_2D_weak * p = (const GALGAS_syntaxDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (cPtr_syntaxInstructionAST * inObject,
                                                   const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                   GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const GALGAS_analysisContext constin_inAnalysisContext,
                                                   GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                   const GALGAS_bool constin_inHasTranslateFeature,
                                                   const GALGAS_terminalMap constin_inTerminalMap,
                                                   const GALGAS_string constin_inLexiqueName,
                                                   const GALGAS_nonterminalMap constin_inNonterminalMap,
                                                   const GALGAS_string constin_inComponentName,
                                                   const GALGAS_stringset constin_inIndexNameSet,
                                                   GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                   GALGAS_localVarManager & io_ioVariableMap,
                                                   GALGAS_uint & io_ioSelectMethodCount,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_analyzeSyntaxInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inTerminalMap, constin_inLexiqueName, constin_inNonterminalMap, constin_inComponentName, constin_inIndexNameSet, io_ioInstructionListForGeneration, io_ioVariableMap, io_ioSelectMethodCount, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (cPtr_abstractInputParameter * inObject,
                                                const GALGAS_analysisContext constin_inAnalysisContext,
                                                GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                const GALGAS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GALGAS_string constin_inLexicalAttributeName,
                                                GALGAS_terminalCheckAssignementList & io_ioTerminalCheckAssignementList,
                                                GALGAS_localVarManager & io_ioVariableMap,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInputParameter) ;
    inObject->method_analyzeInputParameter (constin_inAnalysisContext, io_ioTypeMap, constin_inRequiredLexicalType, constin_inLexicalAttributeName, io_ioTerminalCheckAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GALGAS_analysisContext constin_inAnalysisContext,
                                     GALGAS_unifiedTypeMap & io_ioTypeMap,
                                     const GALGAS_bool constin_inHasTranslateFeature,
                                     GALGAS_localVarManager & io_ioVariableMap,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeSDT (constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GALGAS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GALGAS_string constin_inAccessMethodName,
                                       GALGAS_stringset & io_ioUnusedVariableCppNameSet,
                                       GALGAS_string & io_ioGeneratedCode,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_generateCode (constin_inGenerateSyntaxDirectedTranslationString, constin_inAccessMethodName, io_ioUnusedVariableCppNameSet, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//'@usefulEntitiesGraph' graph
//
//--------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph::GALGAS_usefulEntitiesGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GALGAS_usefulEntitiesGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::setter_addNode (GALGAS_lstring inKey,
                                                 GALGAS_lstring inArgument_0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_lstringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_topologicalSort (GALGAS_lstringlist & outSortedList,
                                                         GALGAS_lstringlist & outSortedKeyList,
                                                         GALGAS_lstringlist & outUnsortedList,
                                                         GALGAS_lstringlist & outUnsortedKeyList,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_depthFirstTopologicalSort (GALGAS_lstringlist & outSortedList,
                                                                   GALGAS_lstringlist & outSortedKeyList,
                                                                   GALGAS_lstringlist & outUnsortedList,
                                                                   GALGAS_lstringlist & outUnsortedKeyList,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_lstringlist (sortedList) ;
  outUnsortedList = GALGAS_lstringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_usefulEntitiesGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_circularities (GALGAS_lstringlist & outInfoList,
                                                       GALGAS_lstringlist & outKeyList
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_nodesWithNoSuccessor (GALGAS_lstringlist & outInfoList,
                                                              GALGAS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_usefulEntitiesGraph::method_nodesWithNoPredecessor (GALGAS_lstringlist & outInfoList,
                                                                GALGAS_lstringlist & outKeyList
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_lstringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                 const GALGAS_stringset & inKeysToExclude,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_usefulEntitiesGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_usefulEntitiesGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_usefulEntitiesGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                           const GALGAS_stringset & inNodesToExclude,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_usefulEntitiesGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @usefulEntitiesGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_usefulEntitiesGraph ("usefulEntitiesGraph",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_usefulEntitiesGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_usefulEntitiesGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_usefulEntitiesGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_usefulEntitiesGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_usefulEntitiesGraph GALGAS_usefulEntitiesGraph::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_usefulEntitiesGraph result ;
  const GALGAS_usefulEntitiesGraph * p = (const GALGAS_usefulEntitiesGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_usefulEntitiesGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("usefulEntitiesGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_uselessEntityLocationMap::cMapElement_uselessEntityLocationMap (const GALGAS_lstring & inKey,
                                                                            const GALGAS_location & in_mLocation
                                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mLocation (in_mLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_uselessEntityLocationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_uselessEntityLocationMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_uselessEntityLocationMap (mProperty_lkey, mProperty_mLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_uselessEntityLocationMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLocation" ":") ;
  mProperty_mLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_uselessEntityLocationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_uselessEntityLocationMap * operand = (cMapElement_uselessEntityLocationMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mLocation.objectCompare (operand->mProperty_mLocation) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap::GALGAS_uselessEntityLocationMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap::GALGAS_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap & GALGAS_uselessEntityLocationMap::operator = (const GALGAS_uselessEntityLocationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::class_func_mapWithMapToOverride (const GALGAS_uselessEntityLocationMap & inMapToOverride
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_uselessEntityLocationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                           const GALGAS_location & inArgument0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * p = nullptr ;
  macroMyNew (p, cMapElement_uselessEntityLocationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@uselessEntityLocationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::add_operation (const GALGAS_uselessEntityLocationMap & inOperand,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_uselessEntityLocationMap result = *this ;
  cEnumerator_uselessEntityLocationMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mLocation (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap::setter_insertKey (GALGAS_lstring inKey,
                                                        GALGAS_location inArgument0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * p = nullptr ;
  macroMyNew (p, cMapElement_uselessEntityLocationMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "--- %K INTERNAL ERROR ---" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_uselessEntityLocationMap::getter_mLocationForKey (const GALGAS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) attributes ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    result = p->mProperty_mLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_uselessEntityLocationMap::setter_setMLocationForKey (GALGAS_location inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_uselessEntityLocationMap * p = (cMapElement_uselessEntityLocationMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    p->mProperty_mLocation = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_uselessEntityLocationMap * GALGAS_uselessEntityLocationMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                           const GALGAS_string & inKey
                                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_uselessEntityLocationMap * result = (cMapElement_uselessEntityLocationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_uselessEntityLocationMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_uselessEntityLocationMap::cEnumerator_uselessEntityLocationMap (const GALGAS_uselessEntityLocationMap & inEnumeratedObject,
                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap_2D_element cEnumerator_uselessEntityLocationMap::current (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return GALGAS_uselessEntityLocationMap_2D_element (p->mProperty_lkey, p->mProperty_mLocation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_uselessEntityLocationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_uselessEntityLocationMap::current_mLocation (LOCATION_ARGS) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
  return p->mProperty_mLocation ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_uselessEntityLocationMap::optional_searchKey (const GALGAS_string & inKey,
                                                          GALGAS_location & outArgument0) const {
  const cMapElement_uselessEntityLocationMap * p = (const cMapElement_uselessEntityLocationMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_uselessEntityLocationMap) ;
    outArgument0 = p->mProperty_mLocation ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @uselessEntityLocationMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap ("uselessEntityLocationMap",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uselessEntityLocationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uselessEntityLocationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uselessEntityLocationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uselessEntityLocationMap GALGAS_uselessEntityLocationMap::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_uselessEntityLocationMap result ;
  const GALGAS_uselessEntityLocationMap * p = (const GALGAS_uselessEntityLocationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_uselessEntityLocationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes::GALGAS_localVariableAttributes (void) :
AC_GALGAS_root (),
mFlags (0),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes::GALGAS_localVariableAttributes (const uint64_t inFlags) :
AC_GALGAS_root (),
mFlags (inFlags),
mIsValid (true) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_none (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (0) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_all (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (uint64_t (0x3F)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_rejectWriteInInitializedAndReadStates (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (uint64_t (1) << 0) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_rejectDeclaredStateAsFinalState (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (uint64_t (1) << 1) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_acceptInitializedStateAsFinalState (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (uint64_t (1) << 2) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_acceptReadStateAsFinalState (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (uint64_t (1) << 3) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_warnsOnAnyAcces (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (uint64_t (1) << 4) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::class_func_suggestDeclareUnusedParameterAsUnused (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVariableAttributes (uint64_t (1) << 5) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVariableAttributes::objectCompare (const GALGAS_localVariableAttributes & inOperand) const {
   ComparisonResult result = ComparisonResult::invalid ;
   if (mIsValid && inOperand.mIsValid) {
     result = ComparisonResult::operandEqual ;
     if (mFlags < inOperand.mFlags) {
       result = ComparisonResult::firstOperandLowerThanSecond ;
     }else if (mFlags > inOperand.mFlags) {
       result = ComparisonResult::firstOperandGreaterThanSecond ;
     }
   }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVariableAttributes::isValid (void) const {
  return mIsValid ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::operator_or (const GALGAS_localVariableAttributes & inOperand
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_localVariableAttributes (mFlags | inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::operator_and (const GALGAS_localVariableAttributes & inOperand
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_localVariableAttributes (mFlags & inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::operator_xor (const GALGAS_localVariableAttributes & inOperand
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_localVariableAttributes (mFlags ^ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::substract_operation (const GALGAS_localVariableAttributes & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localVariableAttributes result ;
  if (mIsValid && inOperand.mIsValid) {
    result = GALGAS_localVariableAttributes (mFlags & ~ inOperand.mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::operator_tilde (UNUSED_LOCATION_ARGS) const {
  GALGAS_localVariableAttributes result ;
  if (mIsValid) {
    result = GALGAS_localVariableAttributes (((uint64_t) 0x3F) ^ mFlags) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVariableAttributes::description (String & ioString,
                                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<boolset @localVariableAttributes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    if ((mFlags & ((uint64_t) 1) << 0) != 0) {
      ioString.appendCString (" rejectWriteInInitializedAndReadStates") ;
    }
    if ((mFlags & ((uint64_t) 1) << 1) != 0) {
      ioString.appendCString (" rejectDeclaredStateAsFinalState") ;
    }
    if ((mFlags & ((uint64_t) 1) << 2) != 0) {
      ioString.appendCString (" acceptInitializedStateAsFinalState") ;
    }
    if ((mFlags & ((uint64_t) 1) << 3) != 0) {
      ioString.appendCString (" acceptReadStateAsFinalState") ;
    }
    if ((mFlags & ((uint64_t) 1) << 4) != 0) {
      ioString.appendCString (" warnsOnAnyAcces") ;
    }
    if ((mFlags & ((uint64_t) 1) << 5) != 0) {
      ioString.appendCString (" suggestDeclareUnusedParameterAsUnused") ;
    }
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_none (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_all (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool (mFlags == uint64_t (0x3F)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_rejectWriteInInitializedAndReadStates (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 0)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_rejectDeclaredStateAsFinalState (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 1)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_acceptInitializedStateAsFinalState (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 2)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_acceptReadStateAsFinalState (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 3)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_warnsOnAnyAcces (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 4)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVariableAttributes::getter_suggestDeclareUnusedParameterAsUnused (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (mIsValid) {
    result = GALGAS_bool ((mFlags & (uint64_t (1) << 5)) != 0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableAttributes generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableAttributes ("localVariableAttributes",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableAttributes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableAttributes ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableAttributes::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableAttributes (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_localVariableAttributes::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localVariableAttributes result ;
  const GALGAS_localVariableAttributes * p = (const GALGAS_localVariableAttributes *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableAttributes *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableAttributes", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_localVarValuation_declared::cEnumAssociatedValues_localVarValuation_declared (const GALGAS_bool inAssociatedValue0
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_localVarValuation_declared::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_localVarValuation_declared::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_localVarValuation_declared * ptr = dynamic_cast<const cEnumAssociatedValues_localVarValuation_declared *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation::GALGAS_localVarValuation (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation GALGAS_localVarValuation::class_func_invalid (UNUSED_LOCATION_ARGS) {
  GALGAS_localVarValuation result ;
  result.mEnum = kEnum_invalid ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation GALGAS_localVarValuation::class_func_declared (const GALGAS_bool & inAssociatedValue0
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_localVarValuation result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_declared ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_localVarValuation_declared (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation GALGAS_localVarValuation::class_func_initialized (UNUSED_LOCATION_ARGS) {
  GALGAS_localVarValuation result ;
  result.mEnum = kEnum_initialized ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation GALGAS_localVarValuation::class_func_read (UNUSED_LOCATION_ARGS) {
  GALGAS_localVarValuation result ;
  result.mEnum = kEnum_read ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation GALGAS_localVarValuation::class_func_mutated (UNUSED_LOCATION_ARGS) {
  GALGAS_localVarValuation result ;
  result.mEnum = kEnum_mutated ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarValuation::method_declared (GALGAS_bool & outAssociatedValue0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_declared) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @localVarValuation declared invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_localVarValuation_declared * ptr = (const cEnumAssociatedValues_localVarValuation_declared *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarValuation::optional_invalid () const {
  const bool ok = mEnum == kEnum_invalid ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarValuation::optional_declared (GALGAS_bool & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_declared ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_localVarValuation_declared *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarValuation::optional_initialized () const {
  const bool ok = mEnum == kEnum_initialized ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarValuation::optional_read () const {
  const bool ok = mEnum == kEnum_read ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_localVarValuation::optional_mutated () const {
  const bool ok = mEnum == kEnum_mutated ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_localVarValuation [6] = {
  "(not built)",
  "invalid",
  "declared",
  "initialized",
  "read",
  "mutated"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVarValuation::getter_isInvalid (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_invalid == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVarValuation::getter_isDeclared (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_declared == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVarValuation::getter_isInitialized (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_initialized == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVarValuation::getter_isRead (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_read == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_localVarValuation::getter_isMutated (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mutated == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarValuation::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<enum @localVarValuation: ") ;
  ioString.appendCString (gEnumNameArrayFor_localVarValuation [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVarValuation::objectCompare (const GALGAS_localVarValuation & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVarValuation generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarValuation ("localVarValuation",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarValuation::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarValuation ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarValuation::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarValuation (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation GALGAS_localVarValuation::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVarValuation result ;
  const GALGAS_localVarValuation * p = (const GALGAS_localVarValuation *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVarValuation *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarValuation", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_scopeLocalVarMap::cMapElement_scopeLocalVarMap (const GALGAS_lstring & inKey,
                                                            const GALGAS_unifiedTypeMapEntry & in_mType,
                                                            const GALGAS_string & in_mCppName,
                                                            const GALGAS_string & in_mNameForCheckingFormalParameterUsing,
                                                            const GALGAS_localVariableAttributes & in_mAttributes,
                                                            const GALGAS_localVarValuation & in_mState
                                                            COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mType (in_mType),
mProperty_mCppName (in_mCppName),
mProperty_mNameForCheckingFormalParameterUsing (in_mNameForCheckingFormalParameterUsing),
mProperty_mAttributes (in_mAttributes),
mProperty_mState (in_mState) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_scopeLocalVarMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_scopeLocalVarMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_scopeLocalVarMap (mProperty_lkey, mProperty_mType, mProperty_mCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mAttributes, mProperty_mState COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_scopeLocalVarMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCppName" ":") ;
  mProperty_mCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNameForCheckingFormalParameterUsing" ":") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAttributes" ":") ;
  mProperty_mAttributes.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mState" ":") ;
  mProperty_mState.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_scopeLocalVarMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_scopeLocalVarMap * operand = (cMapElement_scopeLocalVarMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mType.objectCompare (operand->mProperty_mType) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mCppName.objectCompare (operand->mProperty_mCppName) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mNameForCheckingFormalParameterUsing.objectCompare (operand->mProperty_mNameForCheckingFormalParameterUsing) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mAttributes.objectCompare (operand->mProperty_mAttributes) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mState.objectCompare (operand->mProperty_mState) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap::GALGAS_scopeLocalVarMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap::GALGAS_scopeLocalVarMap (const GALGAS_scopeLocalVarMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap & GALGAS_scopeLocalVarMap::operator = (const GALGAS_scopeLocalVarMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap GALGAS_scopeLocalVarMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap GALGAS_scopeLocalVarMap::class_func_mapWithMapToOverride (const GALGAS_scopeLocalVarMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap GALGAS_scopeLocalVarMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GALGAS_scopeLocalVarMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                   const GALGAS_unifiedTypeMapEntry & inArgument0,
                                                   const GALGAS_string & inArgument1,
                                                   const GALGAS_string & inArgument2,
                                                   const GALGAS_localVariableAttributes & inArgument3,
                                                   const GALGAS_localVarValuation & inArgument4,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  cMapElement_scopeLocalVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_scopeLocalVarMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@scopeLocalVarMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap GALGAS_scopeLocalVarMap::add_operation (const GALGAS_scopeLocalVarMap & inOperand,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_scopeLocalVarMap result = *this ;
  cEnumerator_scopeLocalVarMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mType (HERE), enumerator.current_mCppName (HERE), enumerator.current_mNameForCheckingFormalParameterUsing (HERE), enumerator.current_mAttributes (HERE), enumerator.current_mState (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::setter_insertKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMapEntry inArgument0,
                                                GALGAS_string inArgument1,
                                                GALGAS_string inArgument2,
                                                GALGAS_localVariableAttributes inArgument3,
                                                GALGAS_localVarValuation inArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  cMapElement_scopeLocalVarMap * p = nullptr ;
  macroMyNew (p, cMapElement_scopeLocalVarMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' local variable is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_scopeLocalVarMap_searchKey = "there is no '%K' local variable" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::method_searchKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMapEntry & outArgument0,
                                                GALGAS_string & outArgument1,
                                                GALGAS_string & outArgument2,
                                                GALGAS_localVariableAttributes & outArgument3,
                                                GALGAS_localVarValuation & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) performSearch (inKey,
                                                                                                 inCompiler,
                                                                                                 kSearchErrorMessage_scopeLocalVarMap_searchKey
                                                                                                 COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
    outArgument3 = p->mProperty_mAttributes ;
    outArgument4 = p->mProperty_mState ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::setter_removeKey (GALGAS_lstring inKey,
                                                GALGAS_unifiedTypeMapEntry & outArgument0,
                                                GALGAS_string & outArgument1,
                                                GALGAS_string & outArgument2,
                                                GALGAS_localVariableAttributes & outArgument3,
                                                GALGAS_localVarValuation & outArgument4,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const char * kRemoveErrorMessage = "there is no '%K' local variable" ;
  capCollectionElement attributes ;
  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes.ptr () ;
  if (nullptr == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
    outArgument3 = p->mProperty_mAttributes ;
    outArgument4 = p->mProperty_mState ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_scopeLocalVarMap::getter_mTypeForKey (const GALGAS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_scopeLocalVarMap::getter_mCppNameForKey (const GALGAS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_scopeLocalVarMap::getter_mNameForCheckingFormalParameterUsingForKey (const GALGAS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes GALGAS_scopeLocalVarMap::getter_mAttributesForKey (const GALGAS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GALGAS_localVariableAttributes result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mAttributes ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation GALGAS_scopeLocalVarMap::getter_mStateForKey (const GALGAS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) attributes ;
  GALGAS_localVarValuation result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    result = p->mProperty_mState ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::setter_setMTypeForKey (GALGAS_unifiedTypeMapEntry inAttributeValue,
                                                     GALGAS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mType = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::setter_setMCppNameForKey (GALGAS_string inAttributeValue,
                                                        GALGAS_string inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mCppName = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::setter_setMNameForCheckingFormalParameterUsingForKey (GALGAS_string inAttributeValue,
                                                                                    GALGAS_string inKey,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mNameForCheckingFormalParameterUsing = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::setter_setMAttributesForKey (GALGAS_localVariableAttributes inAttributeValue,
                                                           GALGAS_string inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mAttributes = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_scopeLocalVarMap::setter_setMStateForKey (GALGAS_localVarValuation inAttributeValue,
                                                      GALGAS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_scopeLocalVarMap * p = (cMapElement_scopeLocalVarMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    p->mProperty_mState = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_scopeLocalVarMap * GALGAS_scopeLocalVarMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                           const GALGAS_string & inKey
                                                                                           COMMA_LOCATION_ARGS) {
  cMapElement_scopeLocalVarMap * result = (cMapElement_scopeLocalVarMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_scopeLocalVarMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_scopeLocalVarMap::cEnumerator_scopeLocalVarMap (const GALGAS_scopeLocalVarMap & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap_2D_element cEnumerator_scopeLocalVarMap::current (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return GALGAS_scopeLocalVarMap_2D_element (p->mProperty_lkey, p->mProperty_mType, p->mProperty_mCppName, p->mProperty_mNameForCheckingFormalParameterUsing, p->mProperty_mAttributes, p->mProperty_mState) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_scopeLocalVarMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_scopeLocalVarMap::current_mType (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_scopeLocalVarMap::current_mCppName (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mCppName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_scopeLocalVarMap::current_mNameForCheckingFormalParameterUsing (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableAttributes cEnumerator_scopeLocalVarMap::current_mAttributes (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mAttributes ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarValuation cEnumerator_scopeLocalVarMap::current_mState (LOCATION_ARGS) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
  return p->mProperty_mState ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_scopeLocalVarMap::optional_searchKey (const GALGAS_string & inKey,
                                                  GALGAS_unifiedTypeMapEntry & outArgument0,
                                                  GALGAS_string & outArgument1,
                                                  GALGAS_string & outArgument2,
                                                  GALGAS_localVariableAttributes & outArgument3,
                                                  GALGAS_localVarValuation & outArgument4) const {
  const cMapElement_scopeLocalVarMap * p = (const cMapElement_scopeLocalVarMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_scopeLocalVarMap) ;
    outArgument0 = p->mProperty_mType ;
    outArgument1 = p->mProperty_mCppName ;
    outArgument2 = p->mProperty_mNameForCheckingFormalParameterUsing ;
    outArgument3 = p->mProperty_mAttributes ;
    outArgument4 = p->mProperty_mState ;
  }else{
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @scopeLocalVarMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_scopeLocalVarMap ("scopeLocalVarMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_scopeLocalVarMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_scopeLocalVarMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_scopeLocalVarMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_scopeLocalVarMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap GALGAS_scopeLocalVarMap::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_scopeLocalVarMap result ;
  const GALGAS_scopeLocalVarMap * p = (const GALGAS_scopeLocalVarMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_scopeLocalVarMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("scopeLocalVarMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@localVarMapListForLLVM' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_localVarMapListForLLVM : public cCollectionElement {
  public: GALGAS_localVarMapListForLLVM_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_localVarMapListForLLVM (const GALGAS_scopeLocalVarMap & in_mMap
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_localVarMapListForLLVM (const GALGAS_localVarMapListForLLVM_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_localVarMapListForLLVM::cCollectionElement_localVarMapListForLLVM (const GALGAS_scopeLocalVarMap & in_mMap
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mMap) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_localVarMapListForLLVM::cCollectionElement_localVarMapListForLLVM (const GALGAS_localVarMapListForLLVM_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mMap) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_localVarMapListForLLVM::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_localVarMapListForLLVM::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_localVarMapListForLLVM (mObject.mProperty_mMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_localVarMapListForLLVM::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mMap" ":") ;
  mObject.mProperty_mMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_localVarMapListForLLVM::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_localVarMapListForLLVM * operand = (cCollectionElement_localVarMapListForLLVM *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_localVarMapListForLLVM) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM::GALGAS_localVarMapListForLLVM (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM::GALGAS_localVarMapListForLLVM (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM GALGAS_localVarMapListForLLVM::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_localVarMapListForLLVM (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM GALGAS_localVarMapListForLLVM::class_func_listWithValue (const GALGAS_scopeLocalVarMap & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_localVarMapListForLLVM (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_localVarMapListForLLVM::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_scopeLocalVarMap & in_mMap
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_localVarMapListForLLVM * p = nullptr ;
  macroMyNew (p, cCollectionElement_localVarMapListForLLVM (in_mMap COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::addAssign_operation (const GALGAS_scopeLocalVarMap & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localVarMapListForLLVM (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::setter_append (const GALGAS_scopeLocalVarMap inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_localVarMapListForLLVM (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::setter_insertAtIndex (const GALGAS_scopeLocalVarMap inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_localVarMapListForLLVM (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::setter_removeAtIndex (GALGAS_scopeLocalVarMap & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
        outOperand0 = p->mObject.mProperty_mMap ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::setter_popFirst (GALGAS_scopeLocalVarMap & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::setter_popLast (GALGAS_scopeLocalVarMap & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::method_first (GALGAS_scopeLocalVarMap & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::method_last (GALGAS_scopeLocalVarMap & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    outOperand0 = p->mObject.mProperty_mMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM GALGAS_localVarMapListForLLVM::add_operation (const GALGAS_localVarMapListForLLVM & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_localVarMapListForLLVM result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM GALGAS_localVarMapListForLLVM::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_localVarMapListForLLVM result = GALGAS_localVarMapListForLLVM::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM GALGAS_localVarMapListForLLVM::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_localVarMapListForLLVM result = GALGAS_localVarMapListForLLVM::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM GALGAS_localVarMapListForLLVM::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_localVarMapListForLLVM result = GALGAS_localVarMapListForLLVM::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::plusAssign_operation (const GALGAS_localVarMapListForLLVM inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_localVarMapListForLLVM::setter_setMMapAtIndex (GALGAS_scopeLocalVarMap inOperand,
                                                           GALGAS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mMap = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap GALGAS_localVarMapListForLLVM::getter_mMapAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_localVarMapListForLLVM * p = (cCollectionElement_localVarMapListForLLVM *) attributes.ptr () ;
  GALGAS_scopeLocalVarMap result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
    result = p->mObject.mProperty_mMap ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_localVarMapListForLLVM::cEnumerator_localVarMapListForLLVM (const GALGAS_localVarMapListForLLVM & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM_2D_element cEnumerator_localVarMapListForLLVM::current (LOCATION_ARGS) const {
  const cCollectionElement_localVarMapListForLLVM * p = (const cCollectionElement_localVarMapListForLLVM *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_scopeLocalVarMap cEnumerator_localVarMapListForLLVM::current_mMap (LOCATION_ARGS) const {
  const cCollectionElement_localVarMapListForLLVM * p = (const cCollectionElement_localVarMapListForLLVM *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_localVarMapListForLLVM) ;
  return p->mObject.mProperty_mMap ;
}




//--------------------------------------------------------------------------------------------------
//
//     @localVarMapListForLLVM generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVarMapListForLLVM ("localVarMapListForLLVM",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVarMapListForLLVM::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVarMapListForLLVM ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVarMapListForLLVM::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVarMapListForLLVM (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVarMapListForLLVM GALGAS_localVarMapListForLLVM::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_localVarMapListForLLVM result ;
  const GALGAS_localVarMapListForLLVM * p = (const GALGAS_localVarMapListForLLVM *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVarMapListForLLVM *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVarMapListForLLVM", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch::cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch (const GALGAS_currentVarManager inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * ptr = dynamic_cast<const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_overrideKind_selectOverrideNextBranches::cEnumAssociatedValues_overrideKind_selectOverrideNextBranches (const GALGAS_currentVarManager inAssociatedValue0,
                                                                                                                              const GALGAS_currentVarManager inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_overrideKind_selectOverrideNextBranches::description (String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_overrideKind_selectOverrideNextBranches::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * ptr = dynamic_cast<const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue1.objectCompare (ptr->mAssociatedValue1) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind::GALGAS_overrideKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind GALGAS_overrideKind::class_func_selectOverrideFirstBranch (const GALGAS_currentVarManager & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_overrideKind result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selectOverrideFirstBranch ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind GALGAS_overrideKind::class_func_selectOverrideNextBranches (const GALGAS_currentVarManager & inAssociatedValue0,
                                                                                const GALGAS_currentVarManager & inAssociatedValue1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_overrideKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_selectOverrideNextBranches ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_overrideKind_selectOverrideNextBranches (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind GALGAS_overrideKind::class_func_repeatOverride (UNUSED_LOCATION_ARGS) {
  GALGAS_overrideKind result ;
  result.mEnum = kEnum_repeatOverride ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind::method_selectOverrideFirstBranch (GALGAS_currentVarManager & outAssociatedValue0,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selectOverrideFirstBranch) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @overrideKind selectOverrideFirstBranch invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch * ptr = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind::method_selectOverrideNextBranches (GALGAS_currentVarManager & outAssociatedValue0,
                                                             GALGAS_currentVarManager & outAssociatedValue1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selectOverrideNextBranches) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    String s ;
    s.appendCString ("method @overrideKind selectOverrideNextBranches invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches * ptr = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_overrideKind::optional_selectOverrideFirstBranch (GALGAS_currentVarManager & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_selectOverrideFirstBranch ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_overrideKind_selectOverrideFirstBranch *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_overrideKind::optional_selectOverrideNextBranches (GALGAS_currentVarManager & outAssociatedValue0,
                                                               GALGAS_currentVarManager & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_selectOverrideNextBranches ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_overrideKind_selectOverrideNextBranches *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_overrideKind::optional_repeatOverride () const {
  const bool ok = mEnum == kEnum_repeatOverride ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_overrideKind [4] = {
  "(not built)",
  "selectOverrideFirstBranch",
  "selectOverrideNextBranches",
  "repeatOverride"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overrideKind::getter_isSelectOverrideFirstBranch (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectOverrideFirstBranch == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overrideKind::getter_isSelectOverrideNextBranches (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectOverrideNextBranches == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_overrideKind::getter_isRepeatOverride (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_repeatOverride == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_overrideKind::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @overrideKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_overrideKind [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_overrideKind::objectCompare (const GALGAS_overrideKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @overrideKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_overrideKind ("overrideKind",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_overrideKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_overrideKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_overrideKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind GALGAS_overrideKind::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_overrideKind result ;
  const GALGAS_overrideKind * p = (const GALGAS_overrideKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_overrideKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overrideKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@openedOverrideList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_openedOverrideList : public cCollectionElement {
  public: GALGAS_openedOverrideList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_openedOverrideList (const GALGAS_overrideKind & in_mOverrideKind
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_openedOverrideList (const GALGAS_openedOverrideList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_openedOverrideList::cCollectionElement_openedOverrideList (const GALGAS_overrideKind & in_mOverrideKind
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOverrideKind) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_openedOverrideList::cCollectionElement_openedOverrideList (const GALGAS_openedOverrideList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOverrideKind) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_openedOverrideList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_openedOverrideList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_openedOverrideList (mObject.mProperty_mOverrideKind COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_openedOverrideList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOverrideKind" ":") ;
  mObject.mProperty_mOverrideKind.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_openedOverrideList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_openedOverrideList * operand = (cCollectionElement_openedOverrideList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_openedOverrideList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList::GALGAS_openedOverrideList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList::GALGAS_openedOverrideList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList GALGAS_openedOverrideList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_openedOverrideList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList GALGAS_openedOverrideList::class_func_listWithValue (const GALGAS_overrideKind & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_openedOverrideList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_openedOverrideList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_openedOverrideList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_overrideKind & in_mOverrideKind
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_openedOverrideList * p = nullptr ;
  macroMyNew (p, cCollectionElement_openedOverrideList (in_mOverrideKind COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::addAssign_operation (const GALGAS_overrideKind & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_openedOverrideList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::setter_append (const GALGAS_overrideKind inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_openedOverrideList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::setter_insertAtIndex (const GALGAS_overrideKind inOperand0,
                                                      const GALGAS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_openedOverrideList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::setter_removeAtIndex (GALGAS_overrideKind & outOperand0,
                                                      const GALGAS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
        outOperand0 = p->mObject.mProperty_mOverrideKind ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::setter_popFirst (GALGAS_overrideKind & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::setter_popLast (GALGAS_overrideKind & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::method_first (GALGAS_overrideKind & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::method_last (GALGAS_overrideKind & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    outOperand0 = p->mObject.mProperty_mOverrideKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList GALGAS_openedOverrideList::add_operation (const GALGAS_openedOverrideList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_openedOverrideList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList GALGAS_openedOverrideList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_openedOverrideList result = GALGAS_openedOverrideList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList GALGAS_openedOverrideList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_openedOverrideList result = GALGAS_openedOverrideList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList GALGAS_openedOverrideList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_openedOverrideList result = GALGAS_openedOverrideList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::plusAssign_operation (const GALGAS_openedOverrideList inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_openedOverrideList::setter_setMOverrideKindAtIndex (GALGAS_overrideKind inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOverrideKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind GALGAS_openedOverrideList::getter_mOverrideKindAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_openedOverrideList * p = (cCollectionElement_openedOverrideList *) attributes.ptr () ;
  GALGAS_overrideKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
    result = p->mObject.mProperty_mOverrideKind ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_openedOverrideList::cEnumerator_openedOverrideList (const GALGAS_openedOverrideList & inEnumeratedObject,
                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList_2D_element cEnumerator_openedOverrideList::current (LOCATION_ARGS) const {
  const cCollectionElement_openedOverrideList * p = (const cCollectionElement_openedOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_overrideKind cEnumerator_openedOverrideList::current_mOverrideKind (LOCATION_ARGS) const {
  const cCollectionElement_openedOverrideList * p = (const cCollectionElement_openedOverrideList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_openedOverrideList) ;
  return p->mObject.mProperty_mOverrideKind ;
}




//--------------------------------------------------------------------------------------------------
//
//     @openedOverrideList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedOverrideList ("openedOverrideList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_openedOverrideList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedOverrideList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_openedOverrideList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_openedOverrideList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_openedOverrideList GALGAS_openedOverrideList::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_openedOverrideList result ;
  const GALGAS_openedOverrideList * p = (const GALGAS_openedOverrideList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_openedOverrideList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedOverrideList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_currentVarManager::GALGAS_currentVarManager (void) :
mProperty_mLocalVarMap (),
mProperty_mSubMaps () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_currentVarManager::~ GALGAS_currentVarManager (void) {
}

//--------------------------------------------------------------------------------------------------

void GALGAS_currentVarManager::setInitializedProperties (Compiler * /* inCompiler */) {
  mProperty_mLocalVarMap = GALGAS_scopeLocalVarMap::class_func_emptyMap (SOURCE_FILE ("variable-manager.galgas", 407)) ;
  mProperty_mSubMaps = GALGAS_localVarMapListForLLVM::class_func_emptyList (SOURCE_FILE ("variable-manager.galgas", 408)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_currentVarManager::GALGAS_currentVarManager (const GALGAS_scopeLocalVarMap & inOperand0,
                                                    const GALGAS_localVarMapListForLLVM & inOperand1) :
mProperty_mLocalVarMap (inOperand0),
mProperty_mSubMaps (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_currentVarManager GALGAS_currentVarManager::class_func_new (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_currentVarManager result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_currentVarManager::objectCompare (const GALGAS_currentVarManager & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mLocalVarMap.objectCompare (inOperand.mProperty_mLocalVarMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSubMaps.objectCompare (inOperand.mProperty_mSubMaps) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_currentVarManager::isValid (void) const {
  return mProperty_mLocalVarMap.isValid () && mProperty_mSubMaps.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_currentVarManager::drop (void) {
  mProperty_mLocalVarMap.drop () ;
  mProperty_mSubMaps.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_currentVarManager::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @currentVarManager:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLocalVarMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSubMaps.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @currentVarManager generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_currentVarManager ("currentVarManager",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_currentVarManager::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_currentVarManager ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_currentVarManager::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_currentVarManager (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_currentVarManager GALGAS_currentVarManager::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_currentVarManager result ;
  const GALGAS_currentVarManager * p = (const GALGAS_currentVarManager *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_currentVarManager *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("currentVarManager", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkSelfObjectIsFullyInitialized'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSelfObjectIsFullyInitialized (const GALGAS_currentVarManager inObject,
                                                        const GALGAS_location constinArgument_inErrorLocation,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_fullyInitialized_18558 = GALGAS_bool (true) ;
  const GALGAS_currentVarManager temp_0 = inObject ;
  cEnumerator_scopeLocalVarMap enumerator_18602 (temp_0.readProperty_mLocalVarMap (), EnumerationOrder::up) ;
  bool bool_1 = var_fullyInitialized_18558.isValidAndTrue () ;
  if (enumerator_18602.hasCurrentObject () && bool_1) {
    while (enumerator_18602.hasCurrentObject () && bool_1) {
      GALGAS_stringlist var_keyComponents_18649 = enumerator_18602.current (HERE).readProperty_lkey ().readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("variable-manager.galgas", 424)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_bool test_3 = GALGAS_bool (ComparisonKind::equal, var_keyComponents_18649.getter_count (SOURCE_FILE ("variable-manager.galgas", 425)).objectCompare (GALGAS_uint (uint32_t (2U)))) ;
        if (kBoolTrue == test_3.boolEnum ()) {
          test_3 = GALGAS_bool (ComparisonKind::equal, var_keyComponents_18649.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 425)).objectCompare (GALGAS_string ("self"))) ;
        }
        test_2 = test_3.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_fullyInitialized_18558 = enumerator_18602.current (HERE).readProperty_mState ().getter_isDeclared (SOURCE_FILE ("variable-manager.galgas", 426)).operator_not (SOURCE_FILE ("variable-manager.galgas", 426)) ;
        }
      }
      enumerator_18602.gotoNextObject () ;
      if (enumerator_18602.hasCurrentObject ()) {
        bool_1 = var_fullyInitialized_18558.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_fullyInitialized_18558.operator_not (SOURCE_FILE ("variable-manager.galgas", 429)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("invalid call, self is not fully initialized"), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 430)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GALGAS_currentVarManager & ioObject,
                                    const GALGAS_lstring constinArgument_inVarName,
                                    GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                    GALGAS_string & outArgument_outCppName,
                                    GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_currentVarManager temp_1 = ioObject ;
    GALGAS_unifiedTypeMapEntry var_type_20056 ;
    GALGAS_string var_cppName_20066 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_20079 ;
    GALGAS_localVariableAttributes var_unused_0_20117 ;
    GALGAS_localVarValuation var_unused_1_20117 ;
    const bool optionalResult20030 = temp_1.readProperty_mLocalVarMap ().optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_20056, var_cppName_20066, var_nameForCheckingFormalParameterUsing_20079, var_unused_0_20117, var_unused_1_20117) ;
    if (!optionalResult20030) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      outArgument_outType = var_type_20056 ;
      outArgument_outCppName = var_cppName_20066 ;
      outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_20079 ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_neutralAccess (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GALGAS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 461)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM neutralAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_neutralAccess (GALGAS_localVarMapListForLLVM & ioObject,
                                    const GALGAS_lstring constinArgument_inVarName,
                                    const GALGAS_uint constinArgument_inIndex,
                                    GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                    GALGAS_string & outArgument_outCppName,
                                    GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 478)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("Undefined variable"), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 479)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_localVarMapListForLLVM temp_3 = ioObject ;
    GALGAS_scopeLocalVarMap var_localMap_21034 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 481)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_unifiedTypeMapEntry var_type_21120 ;
      GALGAS_string var_cppName_21130 ;
      GALGAS_string var_nameForCheckingFormalParameterUsing_21143 ;
      GALGAS_localVariableAttributes var_unused_0_21181 ;
      GALGAS_localVarValuation var_unused_1_21181 ;
      const bool optionalResult21094 = var_localMap_21034.optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_21120, var_cppName_21130, var_nameForCheckingFormalParameterUsing_21143, var_unused_0_21181, var_unused_1_21181) ;
      if (!optionalResult21094) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        outArgument_outType = var_type_21120 ;
        outArgument_outCppName = var_cppName_21130 ;
        outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_21143 ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_neutralAccess (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 487)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 487)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForDropAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForDropAccess (GALGAS_currentVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_currentVarManager temp_1 = ioObject ;
    GALGAS_unifiedTypeMapEntry var_unused_0_22060 ;
    GALGAS_string var_unused_1_22060 ;
    GALGAS_string var_unused_2_22060 ;
    GALGAS_localVariableAttributes var_attributes_22083 ;
    GALGAS_localVarValuation var_valuation_22115 ;
    const bool optionalResult22005 = temp_1.readProperty_mLocalVarMap ().optional_searchKey (constinArgument_inVarName.readProperty_string (), var_unused_0_22060, var_unused_1_22060, var_unused_2_22060, var_attributes_22083, var_valuation_22115) ;
    if (!optionalResult22005) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      extensionMethod_checkFinalState (var_valuation_22115, constinArgument_inVarName, var_attributes_22083, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 508)) ;
      {
      GALGAS_unifiedTypeMapEntry joker_22232_5 ; // Joker input parameter
      GALGAS_string joker_22232_4 ; // Joker input parameter
      GALGAS_string joker_22232_3 ; // Joker input parameter
      GALGAS_localVariableAttributes joker_22232_2 ; // Joker input parameter
      GALGAS_localVarValuation joker_22232_1 ; // Joker input parameter
      ioObject.mProperty_mLocalVarMap.setter_removeKey (constinArgument_inVarName, joker_22232_5, joker_22232_4, joker_22232_3, joker_22232_2, joker_22232_1, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 509)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_found_22252 = GALGAS_bool (false) ;
    const GALGAS_currentVarManager temp_2 = ioObject ;
    cEnumerator_localVarMapListForLLVM enumerator_22275 (temp_2.readProperty_mSubMaps (), EnumerationOrder::up) ;
    bool bool_3 = var_found_22252.operator_not (SOURCE_FILE ("variable-manager.galgas", 512)).isValidAndTrue () ;
    if (enumerator_22275.hasCurrentObject () && bool_3) {
      while (enumerator_22275.hasCurrentObject () && bool_3) {
        var_found_22252 = enumerator_22275.current_mMap (HERE).getter_hasKey (constinArgument_inVarName.readProperty_string () COMMA_SOURCE_FILE ("variable-manager.galgas", 513)) ;
        enumerator_22275.gotoNextObject () ;
        if (enumerator_22275.hasCurrentObject ()) {
          bool_3 = var_found_22252.operator_not (SOURCE_FILE ("variable-manager.galgas", 512)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_found_22252.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 516)).add_operation (GALGAS_string ("' is not declared in current scope, but in an overrided scope"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 516)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 516)) ;
      }
    }
    if (kBoolFalse == test_4) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 518)).add_operation (GALGAS_string ("' is not declared"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 518)), fixItArray6  COMMA_SOURCE_FILE ("variable-manager.galgas", 518)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForWriteAccess (GALGAS_currentVarManager & ioObject,
                                           const GALGAS_lstring constinArgument_inVarName,
                                           GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                           GALGAS_string & outArgument_outCppName,
                                           GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_currentVarManager temp_1 = ioObject ;
    GALGAS_unifiedTypeMapEntry var_type_23756 ;
    GALGAS_string var_cppName_23778 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_23803 ;
    GALGAS_localVariableAttributes var_attributes_23856 ;
    GALGAS_localVarValuation var_valuation_23884 ;
    const bool optionalResult23706 = temp_1.readProperty_mLocalVarMap ().optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_23756, var_cppName_23778, var_nameForCheckingFormalParameterUsing_23803, var_attributes_23856, var_valuation_23884) ;
    if (!optionalResult23706) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_localVarValuation var_newValuation_23908 = var_valuation_23884 ;
      {
      extensionSetter_writeTransition (var_newValuation_23908, constinArgument_inVarName, GALGAS_bool (false), var_attributes_23856, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 553)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_newValuation_23908.objectCompare (var_valuation_23884)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioObject.mProperty_mLocalVarMap.setter_setMStateForKey (var_newValuation_23908, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 555)) ;
          }
        }
      }
      outArgument_outType = var_type_23756 ;
      outArgument_outCppName = var_cppName_23778 ;
      outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_23803 ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_writeAccessInSubMap (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GALGAS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 561)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM writeAccessInSubMap'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeAccessInSubMap (GALGAS_localVarMapListForLLVM & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          const GALGAS_uint constinArgument_inIndex,
                                          GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                          GALGAS_string & outArgument_outCppName,
                                          GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 572)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("Undefined variable"), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 573)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_localVarMapListForLLVM temp_3 = ioObject ;
    GALGAS_scopeLocalVarMap var_localMap_25041 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 575)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_unifiedTypeMapEntry var_type_25153 ;
      GALGAS_string var_cppName_25176 ;
      GALGAS_string var_nameForCheckingFormalParameterUsing_25202 ;
      GALGAS_localVariableAttributes var_attributes_25256 ;
      GALGAS_localVarValuation var_valuation_25285 ;
      const bool optionalResult25101 = var_localMap_25041.optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_25153, var_cppName_25176, var_nameForCheckingFormalParameterUsing_25202, var_attributes_25256, var_valuation_25285) ;
      if (!optionalResult25101) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_localVarValuation var_newValuation_25323 = var_valuation_25285 ;
        {
        extensionSetter_writeTransition (var_newValuation_25323, constinArgument_inVarName, GALGAS_bool (true), var_attributes_25256, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 585)) ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::notEqual, var_newValuation_25323.objectCompare (var_valuation_25285)).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_localMap_25041.setter_setMStateForKey (var_newValuation_25323, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 587)) ;
            }
            {
            ioObject.setter_setMMapAtIndex (var_localMap_25041, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 588)) ;
            }
          }
        }
        outArgument_outType = var_type_25153 ;
        outArgument_outCppName = var_cppName_25176 ;
        outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_25202 ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_writeAccessInSubMap (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 597)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 597)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation writeTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_writeTransition (GALGAS_localVarValuation & ioObject,
                                      const GALGAS_lstring constinArgument_inVarName,
                                      const GALGAS_bool constinArgument_inOverridenMap,
                                      const GALGAS_localVariableAttributes constinArgument_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarValuation temp_0 = ioObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_localVarValuation::kNotBuilt:
    break ;
  case GALGAS_localVarValuation::kEnum_invalid:
    {
    }
    break ;
  case GALGAS_localVarValuation::kEnum_declared:
    {
      ioObject = GALGAS_localVarValuation::class_func_initialized (SOURCE_FILE ("variable-manager.galgas", 610)) ;
    }
    break ;
  case GALGAS_localVarValuation::kEnum_initialized:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inAttributes.getter_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 612)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("formal parameter has been declared as unused"), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 613)) ;
        }
      }
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = constinArgument_inAttributes.getter_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 615)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("constant '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 616)).add_operation (GALGAS_string ("' cannot be mutated"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 616)), fixItArray4  COMMA_SOURCE_FILE ("variable-manager.galgas", 616)) ;
          ioObject = GALGAS_localVarValuation::class_func_invalid (SOURCE_FILE ("variable-manager.galgas", 617)) ;
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          GALGAS_bool test_6 = constinArgument_inAttributes.getter_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 618)).operator_not (SOURCE_FILE ("variable-manager.galgas", 618)) ;
          if (kBoolTrue == test_6.boolEnum ()) {
            test_6 = constinArgument_inOverridenMap.operator_not (SOURCE_FILE ("variable-manager.galgas", 618)) ;
          }
          test_5 = test_6.boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 619)).add_operation (GALGAS_string ("' was written to, but never read"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 619)), fixItArray7  COMMA_SOURCE_FILE ("variable-manager.galgas", 619)) ;
          }
        }
        if (kBoolFalse == test_5) {
          ioObject = GALGAS_localVarValuation::class_func_mutated (SOURCE_FILE ("variable-manager.galgas", 621)) ;
        }
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_read:
    {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = constinArgument_inAttributes.getter_rejectWriteInInitializedAndReadStates (SOURCE_FILE ("variable-manager.galgas", 624)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("constant '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 625)).add_operation (GALGAS_string ("' cannot be mutated"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 625)), fixItArray9  COMMA_SOURCE_FILE ("variable-manager.galgas", 625)) ;
          ioObject = GALGAS_localVarValuation::class_func_invalid (SOURCE_FILE ("variable-manager.galgas", 626)) ;
        }
      }
      if (kBoolFalse == test_8) {
        ioObject = GALGAS_localVarValuation::class_func_mutated (SOURCE_FILE ("variable-manager.galgas", 628)) ;
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_mutated:
    {
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForReadAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadAccess (GALGAS_currentVarManager & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                          GALGAS_string & outArgument_outCppName,
                                          GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_currentVarManager temp_1 = ioObject ;
    GALGAS_unifiedTypeMapEntry var_type_28519 ;
    GALGAS_string var_cppName_28548 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_28580 ;
    GALGAS_localVariableAttributes var_attributes_28640 ;
    GALGAS_localVarValuation var_valuation_28675 ;
    const bool optionalResult28455 = temp_1.readProperty_mLocalVarMap ().optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_28519, var_cppName_28548, var_nameForCheckingFormalParameterUsing_28580, var_attributes_28640, var_valuation_28675) ;
    if (!optionalResult28455) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_localVarValuation var_newValuation_28699 = var_valuation_28675 ;
      {
      extensionSetter_readTransition (var_newValuation_28699, constinArgument_inVarName, var_attributes_28640, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 660)) ;
      }
      outArgument_outType = var_type_28519 ;
      outArgument_outCppName = var_cppName_28548 ;
      outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_28580 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_newValuation_28699.objectCompare (var_valuation_28675)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioObject.mProperty_mLocalVarMap.setter_setMStateForKey (var_newValuation_28699, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 665)) ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_readAccess (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GALGAS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 671)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM readAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readAccess (GALGAS_localVarMapListForLLVM & ioObject,
                                 const GALGAS_lstring constinArgument_inVarName,
                                 const GALGAS_uint constinArgument_inIndex,
                                 GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                 GALGAS_string & outArgument_outCppName,
                                 GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 682)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("Undefined variable"), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 683)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_localVarMapListForLLVM temp_3 = ioObject ;
    GALGAS_scopeLocalVarMap var_localMap_29879 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 685)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_unifiedTypeMapEntry var_type_30013 ;
      GALGAS_string var_cppName_30047 ;
      GALGAS_string var_nameForCheckingFormalParameterUsing_30084 ;
      GALGAS_localVariableAttributes var_attributes_30149 ;
      GALGAS_localVarValuation var_valuation_30189 ;
      const bool optionalResult29939 = var_localMap_29879.optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_30013, var_cppName_30047, var_nameForCheckingFormalParameterUsing_30084, var_attributes_30149, var_valuation_30189) ;
      if (!optionalResult29939) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_localVarValuation var_newValuation_30215 = var_valuation_30189 ;
        {
        extensionSetter_readTransition (var_newValuation_30215, constinArgument_inVarName, var_attributes_30149, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 694)) ;
        }
        outArgument_outType = var_type_30013 ;
        outArgument_outCppName = var_cppName_30047 ;
        outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_30084 ;
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::notEqual, var_newValuation_30215.objectCompare (var_valuation_30189)).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_localMap_29879.setter_setMStateForKey (var_newValuation_30215, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 699)) ;
            }
            {
            ioObject.setter_setMMapAtIndex (var_localMap_29879, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 700)) ;
            }
          }
        }
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_readAccess (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 703)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 703)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation readTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readTransition (GALGAS_localVarValuation & ioObject,
                                     const GALGAS_lstring constinArgument_inVarName,
                                     const GALGAS_localVariableAttributes constinArgument_inAttributes,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarValuation temp_0 = ioObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_localVarValuation::kNotBuilt:
    break ;
  case GALGAS_localVarValuation::kEnum_invalid:
    {
    }
    break ;
  case GALGAS_localVarValuation::kEnum_declared:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 715)).add_operation (GALGAS_string ("' used before being initialized"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 715)), fixItArray1  COMMA_SOURCE_FILE ("variable-manager.galgas", 715)) ;
      ioObject = GALGAS_localVarValuation::class_func_invalid (SOURCE_FILE ("variable-manager.galgas", 716)) ;
    }
    break ;
  case GALGAS_localVarValuation::kEnum_initialized:
    {
      ioObject = GALGAS_localVarValuation::class_func_read (SOURCE_FILE ("variable-manager.galgas", 718)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inAttributes.getter_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 719)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("formal parameter has been declared as unused"), fixItArray3  COMMA_SOURCE_FILE ("variable-manager.galgas", 720)) ;
        }
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_read:
    {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = constinArgument_inAttributes.getter_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 723)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("formal parameter has been declared as unused"), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 724)) ;
        }
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_mutated:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = constinArgument_inAttributes.getter_warnsOnAnyAcces (SOURCE_FILE ("variable-manager.galgas", 727)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("formal parameter has been declared as unused"), fixItArray7  COMMA_SOURCE_FILE ("variable-manager.galgas", 728)) ;
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager searchForReadWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_searchForReadWriteAccess (GALGAS_currentVarManager & ioObject,
                                               const GALGAS_lstring constinArgument_inVarName,
                                               GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                               GALGAS_string & outArgument_outCppName,
                                               GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_currentVarManager temp_1 = ioObject ;
    GALGAS_unifiedTypeMapEntry var_type_32900 ;
    GALGAS_string var_cppName_32921 ;
    GALGAS_string var_nameForCheckingFormalParameterUsing_32945 ;
    GALGAS_localVariableAttributes var_inAttributes_32997 ;
    GALGAS_localVarValuation var_valuation_33026 ;
    const bool optionalResult32852 = temp_1.readProperty_mLocalVarMap ().optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_32900, var_cppName_32921, var_nameForCheckingFormalParameterUsing_32945, var_inAttributes_32997, var_valuation_33026) ;
    if (!optionalResult32852) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      GALGAS_localVarValuation var_newValuation_33050 = var_valuation_33026 ;
      {
      extensionSetter_readWriteTransition (var_newValuation_33050, constinArgument_inVarName, GALGAS_bool (false), var_inAttributes_32997, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 758)) ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (ComparisonKind::notEqual, var_newValuation_33050.objectCompare (var_valuation_33026)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioObject.mProperty_mLocalVarMap.setter_setMStateForKey (var_newValuation_33050, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 760)) ;
          }
        }
      }
      outArgument_outType = var_type_32900 ;
      outArgument_outCppName = var_cppName_32921 ;
      outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_32945 ;
    }
  }
  if (kBoolFalse == test_0) {
    {
    extensionSetter_readWriteAccess (ioObject.mProperty_mSubMaps, constinArgument_inVarName, GALGAS_uint (uint32_t (0U)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 766)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarMapListForLLVM readWriteAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteAccess (GALGAS_localVarMapListForLLVM & ioObject,
                                      const GALGAS_lstring constinArgument_inVarName,
                                      const GALGAS_uint constinArgument_inIndex,
                                      GALGAS_unifiedTypeMapEntry & outArgument_outType,
                                      GALGAS_string & outArgument_outCppName,
                                      GALGAS_string & outArgument_outNameForCheckingFormalParameterUsing,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outCppName.drop () ; // Release 'out' argument
  outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_localVarMapListForLLVM temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::greaterOrEqual, constinArgument_inIndex.objectCompare (temp_1.getter_count (SOURCE_FILE ("variable-manager.galgas", 777)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("Undefined variable"), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 778)) ;
      outArgument_outType.drop () ; // Release error dropped variable
      outArgument_outCppName.drop () ; // Release error dropped variable
      outArgument_outNameForCheckingFormalParameterUsing.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_localVarMapListForLLVM temp_3 = ioObject ;
    GALGAS_scopeLocalVarMap var_localMap_34165 = temp_3.getter_mMapAtIndex (constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 780)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      GALGAS_unifiedTypeMapEntry var_type_34279 ;
      GALGAS_string var_cppName_34303 ;
      GALGAS_string var_nameForCheckingFormalParameterUsing_34330 ;
      GALGAS_localVariableAttributes var_inAttributes_34385 ;
      GALGAS_localVarValuation var_valuation_34417 ;
      const bool optionalResult34225 = var_localMap_34165.optional_searchKey (constinArgument_inVarName.readProperty_string (), var_type_34279, var_cppName_34303, var_nameForCheckingFormalParameterUsing_34330, var_inAttributes_34385, var_valuation_34417) ;
      if (!optionalResult34225) {
        test_4 = kBoolFalse ;
      }
      if (kBoolTrue == test_4) {
        GALGAS_localVarValuation var_newValuation_34443 = var_valuation_34417 ;
        {
        extensionSetter_readWriteTransition (var_newValuation_34443, constinArgument_inVarName, GALGAS_bool (true), var_inAttributes_34385, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 789)) ;
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::notEqual, var_newValuation_34443.objectCompare (var_valuation_34417)).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            var_localMap_34165.setter_setMStateForKey (var_newValuation_34443, constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 791)) ;
            }
            {
            ioObject.setter_setMMapAtIndex (var_localMap_34165, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 792)) ;
            }
          }
        }
        outArgument_outType = var_type_34279 ;
        outArgument_outCppName = var_cppName_34303 ;
        outArgument_outNameForCheckingFormalParameterUsing = var_nameForCheckingFormalParameterUsing_34330 ;
      }
    }
    if (kBoolFalse == test_4) {
      {
      extensionSetter_readWriteAccess (ioObject, constinArgument_inVarName, constinArgument_inIndex.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 798)), outArgument_outType, outArgument_outCppName, outArgument_outNameForCheckingFormalParameterUsing, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 798)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation readWriteTransition'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_readWriteTransition (GALGAS_localVarValuation & ioObject,
                                          const GALGAS_lstring constinArgument_inVarName,
                                          const GALGAS_bool constinArgument_inOverridenMap,
                                          const GALGAS_localVariableAttributes constinArgument_inAttributes,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  extensionSetter_readTransition (ioObject, constinArgument_inVarName, constinArgument_inAttributes, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 808)) ;
  }
  {
  extensionSetter_writeTransition (ioObject, constinArgument_inVarName, constinArgument_inOverridenMap, constinArgument_inAttributes, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 809)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager openScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_openScope (GALGAS_currentVarManager & ioObject,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_currentVarManager temp_0 = ioObject ;
  ioObject.mProperty_mSubMaps.setter_insertAtIndex (temp_0.readProperty_mLocalVarMap (), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 817)) ;
  }
  ioObject.mProperty_mLocalVarMap = GALGAS_scopeLocalVarMap::class_func_emptyMap (SOURCE_FILE ("variable-manager.galgas", 818)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager closeScope'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_closeScope (GALGAS_currentVarManager & ioObject,
                                 const GALGAS_location constinArgument_inErrorLocation,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_currentVarManager temp_0 = ioObject ;
  extensionMethod_checkFinalStates (temp_0.readProperty_mLocalVarMap (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 824)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_currentVarManager temp_2 = ioObject ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 825)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("EMPTY SUBMAPS"), fixItArray3  COMMA_SOURCE_FILE ("variable-manager.galgas", 826)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_currentVarManager temp_5 = ioObject ;
    test_4 = GALGAS_bool (ComparisonKind::greaterThan, temp_5.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 828)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioObject.mProperty_mSubMaps.setter_popFirst (ioObject.mProperty_mLocalVarMap, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 829)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GALGAS_currentVarManager & ioObject,
                                const GALGAS_lstring constinArgument_inVarName,
                                const GALGAS_unifiedTypeMapEntry constinArgument_inType,
                                const GALGAS_string constinArgument_inCppName,
                                const GALGAS_string constinArgument_inNameForCheckingFormalParameterUsing,
                                const GALGAS_localVariableAttributes constinArgument_inAttributes,
                                const GALGAS_localVarValuation constinArgument_inState,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioObject.mProperty_mLocalVarMap.setter_insertKey (constinArgument_inVarName, constinArgument_inType, constinArgument_inCppName, constinArgument_inNameForCheckingFormalParameterUsing, constinArgument_inAttributes, constinArgument_inState, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 843)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation checkFinalState'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalState (const GALGAS_localVarValuation inObject,
                                      const GALGAS_lstring constinArgument_inVarName,
                                      const GALGAS_localVariableAttributes constinArgument_inAttributes,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_localVarValuation temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_localVarValuation::kNotBuilt:
    break ;
  case GALGAS_localVarValuation::kEnum_invalid:
    {
    }
    break ;
  case GALGAS_localVarValuation::kEnum_declared:
    {
      const cEnumAssociatedValues_localVarValuation_declared * extractPtr_37818 = (const cEnumAssociatedValues_localVarValuation_declared *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_37391_usedInOtherBlock = extractPtr_37818->mAssociatedValue0 ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inAttributes.getter_rejectDeclaredStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 861)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 862)).add_operation (GALGAS_string ("' should be initialized"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 862)), fixItArray2  COMMA_SOURCE_FILE ("variable-manager.galgas", 862)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = extractedValue_37391_usedInOtherBlock.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 864)).add_operation (GALGAS_string ("' is only used  in sub scope; consider moving it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 864)), fixItArray4  COMMA_SOURCE_FILE ("variable-manager.galgas", 864)) ;
          }
        }
        if (kBoolFalse == test_3) {
          TC_Array <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 866)).add_operation (GALGAS_string ("' was never used; consider removing it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 866)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 866)) ;
        }
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_initialized:
    {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = constinArgument_inAttributes.getter_suggestDeclareUnusedParameterAsUnused (SOURCE_FILE ("variable-manager.galgas", 869)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("parameter '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 870)).add_operation (GALGAS_string ("' was never read; consider declaring it as unused"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 870)), fixItArray7  COMMA_SOURCE_FILE ("variable-manager.galgas", 870)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = constinArgument_inAttributes.getter_acceptInitializedStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 871)).operator_not (SOURCE_FILE ("variable-manager.galgas", 871)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 872)).add_operation (GALGAS_string ("' was never read; consider removing it"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 872)), fixItArray9  COMMA_SOURCE_FILE ("variable-manager.galgas", 872)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_read:
    {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = constinArgument_inAttributes.getter_acceptReadStateAsFinalState (SOURCE_FILE ("variable-manager.galgas", 875)).operator_not (SOURCE_FILE ("variable-manager.galgas", 875)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (constinArgument_inVarName.readProperty_location (), GALGAS_string ("variable '").add_operation (constinArgument_inVarName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 876)).add_operation (GALGAS_string ("' was never mutated; consider declaring it as 'let'"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 876)), fixItArray11  COMMA_SOURCE_FILE ("variable-manager.galgas", 876)) ;
        }
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_mutated:
    {
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap checkFinalStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkFinalStates (const GALGAS_scopeLocalVarMap inObject,
                                       const GALGAS_location /* constinArgument_inErrorLocation */,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_scopeLocalVarMap temp_0 = inObject ;
  cEnumerator_scopeLocalVarMap enumerator_38656 (temp_0, EnumerationOrder::up) ;
  while (enumerator_38656.hasCurrentObject ()) {
    extensionMethod_checkFinalState (enumerator_38656.current_mState (HERE), enumerator_38656.current_lkey (HERE), enumerator_38656.current_mAttributes (HERE), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 887)) ;
    enumerator_38656.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager checkAutomatonStates'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkAutomatonStates (const GALGAS_currentVarManager inObject,
                                           const GALGAS_location constinArgument_inErrorLocation,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_currentVarManager temp_0 = inObject ;
  extensionMethod_checkFinalStates (temp_0.readProperty_mLocalVarMap (), constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 900)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@localVarValuation combineValuationWith'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_combineValuationWith (const GALGAS_localVarValuation inObject,
                                           const GALGAS_localVarValuation constinArgument_inOther,
                                           GALGAS_localVarValuation & outArgument_outResult,
                                           GALGAS_string & /* ioArgument_ioErrorMessage */,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outResult.drop () ; // Release 'out' argument
  const GALGAS_localVarValuation temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_localVarValuation::kNotBuilt:
    break ;
  case GALGAS_localVarValuation::kEnum_invalid:
    {
      const GALGAS_localVarValuation temp_1 = inObject ;
      outArgument_outResult = temp_1 ;
    }
    break ;
  case GALGAS_localVarValuation::kEnum_declared:
    {
      const cEnumAssociatedValues_localVarValuation_declared * extractPtr_40050 = (const cEnumAssociatedValues_localVarValuation_declared *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_39748_usedInSubscope = extractPtr_40050->mAssociatedValue0 ;
      switch (constinArgument_inOther.enumValue ()) {
      case GALGAS_localVarValuation::kNotBuilt:
        break ;
      case GALGAS_localVarValuation::kEnum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_declared:
        {
          const cEnumAssociatedValues_localVarValuation_declared * extractPtr_39954 = (const cEnumAssociatedValues_localVarValuation_declared *) (constinArgument_inOther.unsafePointer ()) ;
          const GALGAS_bool extractedValue_39849_otherUsedInSubscope = extractPtr_39954->mAssociatedValue0 ;
          outArgument_outResult = GALGAS_localVarValuation::class_func_declared (extractedValue_39748_usedInSubscope.operator_or (extractedValue_39849_otherUsedInSubscope COMMA_SOURCE_FILE ("variable-manager.galgas", 918))  COMMA_SOURCE_FILE ("variable-manager.galgas", 918)) ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_initialized:
      case GALGAS_localVarValuation::kEnum_read:
      case GALGAS_localVarValuation::kEnum_mutated:
        {
          outArgument_outResult = GALGAS_localVarValuation::class_func_declared (GALGAS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas", 920)) ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_initialized:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GALGAS_localVarValuation::kNotBuilt:
        break ;
      case GALGAS_localVarValuation::kEnum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_declared:
        {
          const cEnumAssociatedValues_localVarValuation_declared * extractPtr_40246 = (const cEnumAssociatedValues_localVarValuation_declared *) (constinArgument_inOther.unsafePointer ()) ;
          const GALGAS_bool extractedValue_40158_otherUsedInSubscope = extractPtr_40246->mAssociatedValue0 ;
          outArgument_outResult = GALGAS_localVarValuation::class_func_declared (extractedValue_40158_otherUsedInSubscope  COMMA_SOURCE_FILE ("variable-manager.galgas", 927)) ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_initialized:
      case GALGAS_localVarValuation::kEnum_read:
      case GALGAS_localVarValuation::kEnum_mutated:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_read:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GALGAS_localVarValuation::kNotBuilt:
        break ;
      case GALGAS_localVarValuation::kEnum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_declared:
        {
          outArgument_outResult = GALGAS_localVarValuation::class_func_declared (GALGAS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas", 936)) ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_initialized:
        {
          const GALGAS_localVarValuation temp_2 = inObject ;
          outArgument_outResult = temp_2 ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_read:
      case GALGAS_localVarValuation::kEnum_mutated:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_localVarValuation::kEnum_mutated:
    {
      switch (constinArgument_inOther.enumValue ()) {
      case GALGAS_localVarValuation::kNotBuilt:
        break ;
      case GALGAS_localVarValuation::kEnum_invalid:
        {
          outArgument_outResult = constinArgument_inOther ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_declared:
        {
          outArgument_outResult = GALGAS_localVarValuation::class_func_declared (GALGAS_bool (true)  COMMA_SOURCE_FILE ("variable-manager.galgas", 947)) ;
        }
        break ;
      case GALGAS_localVarValuation::kEnum_initialized:
      case GALGAS_localVarValuation::kEnum_read:
      case GALGAS_localVarValuation::kEnum_mutated:
        {
          const GALGAS_localVarValuation temp_3 = inObject ;
          outArgument_outResult = temp_3 ;
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@scopeLocalVarMap combineMapWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineMapWith (GALGAS_scopeLocalVarMap & ioObject,
                                     const GALGAS_scopeLocalVarMap constinArgument_inOtherMap,
                                     GALGAS_string & ioArgument_ioErrorMessage,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_scopeLocalVarMap temp_0 = ioObject ;
  cEnumerator_scopeLocalVarMap enumerator_41169 (temp_0, EnumerationOrder::up) ;
  while (enumerator_41169.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      GALGAS_unifiedTypeMapEntry var_unused_0_41234 ;
      GALGAS_string var_otherCppName_41241 ;
      GALGAS_string var_unused_0_41256 ;
      GALGAS_localVariableAttributes var_unused_1_41256 ;
      GALGAS_localVarValuation var_otherValuation_41263 ;
      const bool optionalResult41214 = constinArgument_inOtherMap.optional_searchKey (enumerator_41169.current_lkey (HERE).readProperty_string (), var_unused_0_41234, var_otherCppName_41241, var_unused_0_41256, var_unused_1_41256, var_otherValuation_41263) ;
      if (!optionalResult41214) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_41169.current_mCppName (HERE).objectCompare (var_otherCppName_41241)).boolEnum () ;
          if (kBoolTrue == test_2) {
            ioArgument_ioErrorMessage.plusAssign_operation(GALGAS_string ("\n  - 'internal error type 1 for '").add_operation (enumerator_41169.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 961)).add_operation (GALGAS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 961)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 961)) ;
          }
        }
        if (kBoolFalse == test_2) {
          GALGAS_localVarValuation var_newValuation_41488 ;
          extensionMethod_combineValuationWith (enumerator_41169.current_mState (HERE), var_otherValuation_41263, var_newValuation_41488, ioArgument_ioErrorMessage, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 963)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (ComparisonKind::notEqual, var_newValuation_41488.objectCompare (enumerator_41169.current_mState (HERE))).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              ioObject.setter_setMStateForKey (var_newValuation_41488, enumerator_41169.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 965)) ;
              }
            }
          }
        }
      }
    }
    if (kBoolFalse == test_1) {
      ioArgument_ioErrorMessage.plusAssign_operation(GALGAS_string ("\n  - 'internal error type 2 for '").add_operation (enumerator_41169.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 969)).add_operation (GALGAS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 969)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 969)) ;
    }
    enumerator_41169.gotoNextObject () ;
  }
  cEnumerator_scopeLocalVarMap enumerator_41773 (constinArgument_inOtherMap, EnumerationOrder::up) ;
  while (enumerator_41773.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_scopeLocalVarMap temp_5 = ioObject ;
      test_4 = temp_5.getter_hasKey (enumerator_41773.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("variable-manager.galgas", 974)).operator_not (SOURCE_FILE ("variable-manager.galgas", 974)).boolEnum () ;
      if (kBoolTrue == test_4) {
        ioArgument_ioErrorMessage.plusAssign_operation(GALGAS_string ("\n  - 'internal error type 3 for '").add_operation (enumerator_41773.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 975)).add_operation (GALGAS_string ("' local variable"), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 975)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 975)) ;
      }
    }
    enumerator_41773.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@currentVarManager combineManagerWith'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_combineManagerWith (GALGAS_currentVarManager & ioObject,
                                         const GALGAS_currentVarManager constinArgument_inOtherManager,
                                         const GALGAS_location constinArgument_inErrorLocation,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_s_42238 = GALGAS_string::makeEmptyString () ;
  {
  extensionSetter_combineMapWith (ioObject.mProperty_mLocalVarMap, constinArgument_inOtherManager.readProperty_mLocalVarMap (), var_s_42238, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 985)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_currentVarManager temp_1 = ioObject ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 989)).objectCompare (constinArgument_inOtherManager.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 989)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_currentVarManager temp_2 = ioObject ;
      var_s_42238.plusAssign_operation(GALGAS_string ("Scope deepth error, ").add_operation (temp_2.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 990)).getter_string (SOURCE_FILE ("variable-manager.galgas", 990)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 990)).add_operation (GALGAS_string (" != "), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 990)).add_operation (constinArgument_inOtherManager.readProperty_mSubMaps ().getter_count (SOURCE_FILE ("variable-manager.galgas", 990)).getter_string (SOURCE_FILE ("variable-manager.galgas", 990)), inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 990)), inCompiler  COMMA_SOURCE_FILE ("variable-manager.galgas", 990)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_localVarMapListForLLVM var_newSubMapList_42543 = GALGAS_localVarMapListForLLVM::class_func_emptyList (SOURCE_FILE ("variable-manager.galgas", 992)) ;
    const GALGAS_currentVarManager temp_3 = ioObject ;
    cEnumerator_localVarMapListForLLVM enumerator_42571 (temp_3.readProperty_mSubMaps (), EnumerationOrder::up) ;
    cEnumerator_localVarMapListForLLVM enumerator_42598 (constinArgument_inOtherManager.readProperty_mSubMaps (), EnumerationOrder::up) ;
    while (enumerator_42571.hasCurrentObject () && enumerator_42598.hasCurrentObject ()) {
      GALGAS_scopeLocalVarMap var_mutableSubMap_42651 = enumerator_42571.current_mMap (HERE) ;
      {
      extensionSetter_combineMapWith (var_mutableSubMap_42651, enumerator_42598.current_mMap (HERE), var_s_42238, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 995)) ;
      }
      var_newSubMapList_42543.addAssign_operation (var_mutableSubMap_42651  COMMA_SOURCE_FILE ("variable-manager.galgas", 999)) ;
      enumerator_42571.gotoNextObject () ;
      enumerator_42598.gotoNextObject () ;
    }
    ioObject.mProperty_mSubMaps = var_newSubMapList_42543 ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, var_s_42238.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("convergence error:").add_operation (var_s_42238, inCompiler COMMA_SOURCE_FILE ("variable-manager.galgas", 1005)), fixItArray5  COMMA_SOURCE_FILE ("variable-manager.galgas", 1005)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKindEnum_classType::cEnumAssociatedValues_typeKindEnum_classType (const GALGAS_bool inAssociatedValue0
                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKindEnum_classType::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_typeKindEnum_classType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKindEnum_classType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKindEnum_classType *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKindEnum_weakReferenceType::cEnumAssociatedValues_typeKindEnum_weakReferenceType (const GALGAS_unifiedTypeMapEntry inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKindEnum_weakReferenceType::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_typeKindEnum_weakReferenceType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKindEnum_weakReferenceType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKindEnum_weakReferenceType *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeKindEnum_enumType::cEnumAssociatedValues_typeKindEnum_enumType (const GALGAS_constantIndexMap inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeKindEnum_enumType::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_typeKindEnum_enumType::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeKindEnum_enumType * ptr = dynamic_cast<const cEnumAssociatedValues_typeKindEnum_enumType *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum::GALGAS_typeKindEnum (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_classType (const GALGAS_bool & inAssociatedValue0
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_classType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKindEnum_classType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_weakReferenceType (const GALGAS_unifiedTypeMapEntry & inAssociatedValue0
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_weakReferenceType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKindEnum_weakReferenceType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_enumType (const GALGAS_constantIndexMap & inAssociatedValue0
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_enumType ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeKindEnum_enumType (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_listType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_sortedListType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sortedListType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_mapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_mapType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_sharedMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sharedMapType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_sharedMapEntryType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_sharedMapEntryType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_listMapType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_listMapType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_boolsetType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_boolsetType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_structType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_structType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_graphType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_graphType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_externType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_externType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_otherType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_otherType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::class_func_packageType (UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  result.mEnum = kEnum_packageType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindEnum::method_classType (GALGAS_bool & outAssociatedValue0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_classType) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @typeKindEnum classType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKindEnum_classType * ptr = (const cEnumAssociatedValues_typeKindEnum_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindEnum::method_weakReferenceType (GALGAS_unifiedTypeMapEntry & outAssociatedValue0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_weakReferenceType) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @typeKindEnum weakReferenceType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKindEnum_weakReferenceType * ptr = (const cEnumAssociatedValues_typeKindEnum_weakReferenceType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindEnum::method_enumType (GALGAS_constantIndexMap & outAssociatedValue0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumType) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @typeKindEnum enumType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeKindEnum_enumType * ptr = (const cEnumAssociatedValues_typeKindEnum_enumType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_classType (GALGAS_bool & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_classType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKindEnum_classType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_weakReferenceType (GALGAS_unifiedTypeMapEntry & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_weakReferenceType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKindEnum_weakReferenceType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_enumType (GALGAS_constantIndexMap & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_enumType ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeKindEnum_enumType *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_listType () const {
  const bool ok = mEnum == kEnum_listType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_sortedListType () const {
  const bool ok = mEnum == kEnum_sortedListType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_mapType () const {
  const bool ok = mEnum == kEnum_mapType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_sharedMapType () const {
  const bool ok = mEnum == kEnum_sharedMapType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_sharedMapEntryType () const {
  const bool ok = mEnum == kEnum_sharedMapEntryType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_listMapType () const {
  const bool ok = mEnum == kEnum_listMapType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_boolsetType () const {
  const bool ok = mEnum == kEnum_boolsetType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_structType () const {
  const bool ok = mEnum == kEnum_structType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_graphType () const {
  const bool ok = mEnum == kEnum_graphType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_externType () const {
  const bool ok = mEnum == kEnum_externType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_otherType () const {
  const bool ok = mEnum == kEnum_otherType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindEnum::optional_packageType () const {
  const bool ok = mEnum == kEnum_packageType ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

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
  "otherType",
  "packageType"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_classType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isWeakReferenceType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_weakReferenceType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isSortedListType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sortedListType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_mapType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isSharedMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sharedMapType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isSharedMapEntryType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_sharedMapEntryType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isListMapType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_listMapType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isBoolsetType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_boolsetType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isStructType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_structType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isGraphType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_graphType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isExternType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_externType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isOtherType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_otherType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeKindEnum::getter_isPackageType (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_packageType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindEnum::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeKindEnum: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeKindEnum [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeKindEnum::objectCompare (const GALGAS_typeKindEnum & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKindEnum generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindEnum ("typeKindEnum",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKindEnum::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindEnum ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKindEnum::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindEnum (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindEnum GALGAS_typeKindEnum::extractObject (const GALGAS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeKindEnum result ;
  const GALGAS_typeKindEnum * p = (const GALGAS_typeKindEnum *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKindEnum *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindEnum", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@typeKindEnum string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_typeKindEnum & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_typeKindEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_typeKindEnum::kNotBuilt:
    break ;
  case GALGAS_typeKindEnum::kEnum_classType:
    {
      const cEnumAssociatedValues_typeKindEnum_classType * extractPtr_4062 = (const cEnumAssociatedValues_typeKindEnum_classType *) (temp_0.unsafePointer ()) ;
      const GALGAS_bool extractedValue_3981_isReference = extractPtr_4062->mAssociatedValue0 ;
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = extractedValue_3981_isReference.boolEnum () ;
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
  case GALGAS_typeKindEnum::kEnum_otherType:
    {
      result_result = GALGAS_string ("other") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_externType:
    {
      result_result = GALGAS_string ("extern") ;
    }
    break ;
  case GALGAS_typeKindEnum::kEnum_packageType:
    {
      result_result = GALGAS_string ("package") ;
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




//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap::cMapElement_unifiedTypeMap (const GALGAS_lstring & inKey,
                                                        const GALGAS_unifiedTypeMapElementClass & in_mElement
                                                        COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mElement (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_unifiedTypeMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unifiedTypeMap::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_unifiedTypeMap (mProperty_lkey, mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_unifiedTypeMap::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cMapElement_unifiedTypeMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_unifiedTypeMap * operand = (cMapElement_unifiedTypeMap *) inOperand ;
  ComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElement.objectCompare (operand->mProperty_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap::GALGAS_unifiedTypeMap (const GALGAS_unifiedTypeMap & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap & GALGAS_unifiedTypeMap::operator = (const GALGAS_unifiedTypeMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::class_func_mapWithMapToOverride (const GALGAS_unifiedTypeMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                 const GALGAS_unifiedTypeMapElementClass & inArgument0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unifiedTypeMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::add_operation (const GALGAS_unifiedTypeMap & inOperand,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMap result = *this ;
  cEnumerator_unifiedTypeMap enumerator (inOperand, EnumerationOrder::up) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mElement (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_internalInsertKey (GALGAS_lstring inKey,
                                                      GALGAS_unifiedTypeMapElementClass inArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * p = nullptr ;
  macroMyNew (p, cMapElement_unifiedTypeMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' key is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMap::getter_mElementForKey (const GALGAS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) attributes ;
  GALGAS_unifiedTypeMapElementClass result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    result = p->mProperty_mElement ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unifiedTypeMap::setter_setMElementForKey (GALGAS_unifiedTypeMapElementClass inAttributeValue,
                                                      GALGAS_string inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_unifiedTypeMap * p = (cMapElement_unifiedTypeMap *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    p->mProperty_mElement = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_unifiedTypeMap * GALGAS_unifiedTypeMap::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                       const GALGAS_string & inKey
                                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_unifiedTypeMap * result = (cMapElement_unifiedTypeMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unifiedTypeMap) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_unifiedTypeMap::cEnumerator_unifiedTypeMap (const GALGAS_unifiedTypeMap & inEnumeratedObject,
                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap_2D_element cEnumerator_unifiedTypeMap::current (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return GALGAS_unifiedTypeMap_2D_element (p->mProperty_lkey, p->mProperty_mElement) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_unifiedTypeMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass cEnumerator_unifiedTypeMap::current_mElement (LOCATION_ARGS) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
  return p->mProperty_mElement ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unifiedTypeMap::optional_searchKey (const GALGAS_string & inKey,
                                                GALGAS_unifiedTypeMapElementClass & outArgument0) const {
  const cMapElement_unifiedTypeMap * p = (const cMapElement_unifiedTypeMap *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_unifiedTypeMap) ;
    outArgument0 = p->mProperty_mElement ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMap ("unifiedTypeMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMap GALGAS_unifiedTypeMap::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap result ;
  const GALGAS_unifiedTypeMap * p = (const GALGAS_unifiedTypeMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntry'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntry (GALGAS_unifiedTypeMap & ioObject,
                                const GALGAS_lstring constinArgument_inLKey,
                                GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 46)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_unifiedTypeMap temp_2 = ioObject ;
      GALGAS_unifiedTypeMapElementClass var_element_2232 ;
      const bool optionalResult2181 = temp_2.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_2232) ;
      if (!optionalResult2181) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_element_2232  COMMA_SOURCE_FILE ("unified-type-map.galgas", 48)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_unifiedTypeMapElementClass var_newElement_2315 = GALGAS_unifiedTypeMapElementClass::class_func_new (GALGAS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 50))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 50)) ;
      {
      ioObject.setter_internalInsertKey (constinArgument_inLKey, var_newElement_2315, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 51)) ;
      }
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_newElement_2315  COMMA_SOURCE_FILE ("unified-type-map.galgas", 52)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap makeEntryFromString'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_makeEntryFromString (GALGAS_unifiedTypeMap & ioObject,
                                          const GALGAS_string constinArgument_inKey,
                                          GALGAS_unifiedTypeMapEntry & outArgument_outEntry,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEntry.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inKey.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 60)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_unifiedTypeMap temp_2 = ioObject ;
      GALGAS_unifiedTypeMapElementClass var_element_2790 ;
      const bool optionalResult2740 = temp_2.optional_searchKey (constinArgument_inKey, var_element_2790) ;
      if (!optionalResult2740) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_element_2790  COMMA_SOURCE_FILE ("unified-type-map.galgas", 62)) ;
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_unifiedTypeMapElementClass var_newElement_2873 = GALGAS_unifiedTypeMapElementClass::class_func_new (GALGAS_typeDefinition::class_func_unsolved (SOURCE_FILE ("unified-type-map.galgas", 64))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 64)) ;
      {
      ioObject.setter_internalInsertKey (GALGAS_lstring::class_func_new (constinArgument_inKey, GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("unified-type-map.galgas", 65)), var_newElement_2873, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 65)) ;
      }
      outArgument_outEntry = GALGAS_unifiedTypeMapEntry::class_func_element (var_newElement_2873  COMMA_SOURCE_FILE ("unified-type-map.galgas", 66)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap typeMapEntryForLKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry extensionGetter_typeMapEntryForLKey (const GALGAS_unifiedTypeMap & inObject,
                                                                const GALGAS_lstring & constinArgument_inLKey,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::equal, constinArgument_inLKey.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("unified-type-map.galgas", 74)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      const GALGAS_unifiedTypeMap temp_2 = inObject ;
      GALGAS_unifiedTypeMapElementClass var_element_3367 ;
      const bool optionalResult3316 = temp_2.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_3367) ;
      if (!optionalResult3316) {
        test_1 = kBoolFalse ;
      }
      if (kBoolTrue == test_1) {
        result_result = GALGAS_unifiedTypeMapEntry::class_func_element (var_element_3367  COMMA_SOURCE_FILE ("unified-type-map.galgas", 76)) ;
      }
    }
    if (kBoolFalse == test_1) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GALGAS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 78)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 78)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 78)) ;
      result_result.drop () ; // Release error dropped variable
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMap insertType'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertType (GALGAS_unifiedTypeMap & ioObject,
                                 const GALGAS_lstring constinArgument_inTypeName,
                                 const GALGAS_unifiedTypeDefinition constinArgument_inTypeDefinition,
                                 Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = ioObject ;
    GALGAS_unifiedTypeMapElementClass var_element_3782 ;
    const bool optionalResult3727 = temp_1.optional_searchKey (constinArgument_inTypeName.readProperty_string (), var_element_3782) ;
    if (!optionalResult3727) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_element_3782.readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inTypeName.readProperty_location (), GALGAS_string ("type already defined"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 88)) ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          GALGAS_unifiedTypeMapElementClass var_e_3937 = var_element_3782 ;
          var_e_3937.setter_setMDefinition (GALGAS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 91)) COMMA_SOURCE_FILE ("unified-type-map.galgas", 91)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapElementClass var_newElement_4042 = GALGAS_unifiedTypeMapElementClass::class_func_new (GALGAS_typeDefinition::class_func_solved (constinArgument_inTypeDefinition  COMMA_SOURCE_FILE ("unified-type-map.galgas", 94))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 94)) ;
    {
    ioObject.setter_internalInsertKey (constinArgument_inTypeName, var_newElement_4042, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 95)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMap typeDefinition'
//
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition extensionGetter_typeDefinition (const GALGAS_unifiedTypeMap & inObject,
                                                             const GALGAS_lstring & constinArgument_inLKey,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_unifiedTypeMap temp_1 = inObject ;
    GALGAS_unifiedTypeMapElementClass var_element_4441 ;
    const bool optionalResult4390 = temp_1.optional_searchKey (constinArgument_inLKey.readProperty_string (), var_element_4441) ;
    if (!optionalResult4390) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      switch (var_element_4441.readProperty_mDefinition ().enumValue ()) {
      case GALGAS_typeDefinition::kNotBuilt:
        break ;
      case GALGAS_typeDefinition::kEnum_solved:
        {
          const cEnumAssociatedValues_typeDefinition_solved * extractPtr_4755 = (const cEnumAssociatedValues_typeDefinition_solved *) (var_element_4441.readProperty_mDefinition ().unsafePointer ()) ;
          const GALGAS_unifiedTypeDefinition extractedValue_4507_definition = extractPtr_4755->mAssociatedValue0 ;
          result_result = extractedValue_4507_definition ;
        }
        break ;
      case GALGAS_typeDefinition::kEnum_unsolved:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GALGAS_string ("unsolved type"), fixItArray2  COMMA_SOURCE_FILE ("unified-type-map.galgas", 112)) ;
          result_result.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    TC_Array <FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (constinArgument_inLKey.readProperty_location (), GALGAS_string ("there is no '@").add_operation (constinArgument_inLKey.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 115)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 115)), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 115)) ;
    result_result.drop () ; // Release error dropped variable
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_typeDefinition_solved::cEnumAssociatedValues_typeDefinition_solved (const GALGAS_unifiedTypeDefinition inAssociatedValue0
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_typeDefinition_solved::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_typeDefinition_solved::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_typeDefinition_solved * ptr = dynamic_cast<const cEnumAssociatedValues_typeDefinition_solved *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition::GALGAS_typeDefinition (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::class_func_unsolved (UNUSED_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  result.mEnum = kEnum_unsolved ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::class_func_solved (const GALGAS_unifiedTypeDefinition & inAssociatedValue0
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_solved ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_typeDefinition_solved (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeDefinition::method_solved (GALGAS_unifiedTypeDefinition & outAssociatedValue0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_solved) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @typeDefinition solved invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_typeDefinition_solved * ptr = (const cEnumAssociatedValues_typeDefinition_solved *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeDefinition::optional_unsolved () const {
  const bool ok = mEnum == kEnum_unsolved ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeDefinition::optional_solved (GALGAS_unifiedTypeDefinition & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_solved ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_typeDefinition_solved *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeDefinition [3] = {
  "(not built)",
  "unsolved",
  "solved"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeDefinition::getter_isUnsolved (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_unsolved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_typeDefinition::getter_isSolved (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_solved == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeDefinition::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeDefinition: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeDefinition [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeDefinition::objectCompare (const GALGAS_typeDefinition & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeDefinition generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeDefinition ("typeDefinition",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeDefinition ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeDefinition::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeDefinition (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeDefinition GALGAS_typeDefinition::extractObject (const GALGAS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeDefinition result ;
  const GALGAS_typeDefinition * p = (const GALGAS_typeDefinition *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeDefinition *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeDefinition", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unifiedTypeMapElementClass_2D_weak::objectCompare (const GALGAS_unifiedTypeMapElementClass_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak::GALGAS_unifiedTypeMapElementClass_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak & GALGAS_unifiedTypeMapElementClass_2D_weak::operator = (const GALGAS_unifiedTypeMapElementClass & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak::GALGAS_unifiedTypeMapElementClass_2D_weak (const GALGAS_unifiedTypeMapElementClass & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak GALGAS_unifiedTypeMapElementClass_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass GALGAS_unifiedTypeMapElementClass_2D_weak::bang_unifiedTypeMapElementClass_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapElementClass result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unifiedTypeMapElementClass) ;
      result = GALGAS_unifiedTypeMapElementClass ((cPtr_unifiedTypeMapElementClass *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unifiedTypeMapElementClass-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ("unifiedTypeMapElementClass-weak",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unifiedTypeMapElementClass_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapElementClass_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unifiedTypeMapElementClass_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeMapElementClass_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapElementClass_2D_weak GALGAS_unifiedTypeMapElementClass_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapElementClass_2D_weak result ;
  const GALGAS_unifiedTypeMapElementClass_2D_weak * p = (const GALGAS_unifiedTypeMapElementClass_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unifiedTypeMapElementClass_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeMapElementClass-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry definition'
//
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeDefinition extensionGetter_definition (const GALGAS_unifiedTypeMapEntry & inObject,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeDefinition result_result ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_unifiedTypeMapEntry::kNotBuilt:
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_null:
    {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 182)), GALGAS_string ("null type"), fixItArray1  COMMA_SOURCE_FILE ("unified-type-map.galgas", 182)) ;
      result_result.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_unifiedTypeMapEntry::kEnum_element:
    {
      const cEnumAssociatedValues_unifiedTypeMapEntry_element * extractPtr_7481 = (const cEnumAssociatedValues_unifiedTypeMapEntry_element *) (temp_0.unsafePointer ()) ;
      const GALGAS_unifiedTypeMapElementClass_2D_weak extractedValue_7182_weakElement = extractPtr_7481->mAssociatedValue0 ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMapElementClass var_type_7210 (dynamic_cast <const cPtr_unifiedTypeMapElementClass *> (extractedValue_7182_weakElement.ptr ())) ;
        if (nullptr == var_type_7210.ptr ()) {
          test_2 = kBoolFalse ;
        }
        if (kBoolTrue == test_2) {
          switch (var_type_7210.readProperty_mDefinition ().enumValue ()) {
          case GALGAS_typeDefinition::kNotBuilt:
            break ;
          case GALGAS_typeDefinition::kEnum_unsolved:
            {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 187)), GALGAS_string ("unsolved type"), fixItArray3  COMMA_SOURCE_FILE ("unified-type-map.galgas", 187)) ;
              result_result.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeDefinition::kEnum_solved:
            {
              const cEnumAssociatedValues_typeDefinition_solved * extractPtr_7396 = (const cEnumAssociatedValues_typeDefinition_solved *) (var_type_7210.readProperty_mDefinition ().unsafePointer ()) ;
              const GALGAS_unifiedTypeDefinition extractedValue_7363_definition = extractPtr_7396->mAssociatedValue0 ;
              result_result = extractedValue_7363_definition ;
            }
            break ;
          }
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("unified-type-map.galgas", 192)), GALGAS_string ("nil type"), fixItArray4  COMMA_SOURCE_FILE ("unified-type-map.galgas", 192)) ;
        result_result.drop () ; // Release error dropped variable
      }
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry identifierRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_identifierRepresentation (const GALGAS_unifiedTypeMapEntry & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 200)).readProperty_typeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-type-map.galgas", 200)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry typeName'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_typeName (const GALGAS_unifiedTypeMapEntry & inObject,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  result_result = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 206)).readProperty_typeName ().readProperty_string () ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@unifiedTypeMapEntry baseType'
//
//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry extensionGetter_baseType (const GALGAS_unifiedTypeMapEntry & inObject,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMapEntry result_outBaseType ; // Returned variable
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  result_outBaseType = temp_0 ;
  bool loop_8090 = true ;
  while (loop_8090) {
    loop_8090 = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 213)).readProperty_superType ().getter_isNull (SOURCE_FILE ("unified-type-map.galgas", 213)).operator_not (SOURCE_FILE ("unified-type-map.galgas", 213)).isValid () ;
    if (loop_8090) {
      loop_8090 = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 213)).readProperty_superType ().getter_isNull (SOURCE_FILE ("unified-type-map.galgas", 213)).operator_not (SOURCE_FILE ("unified-type-map.galgas", 213)).boolValue () ;
    }
    if (loop_8090) {
      result_outBaseType = extensionGetter_definition (result_outBaseType, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 214)).readProperty_superType () ;
    }
  }
//---
  return result_outBaseType ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName (const GALGAS_unifiedTypeMapEntry inObject,
                                        GALGAS_stringset & ioArgument_ioInclusions,
                                        Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8383 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 221)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_typeDefinition_8383.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas", 222)).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_typeDefinition_8383.readProperty_mHeaderKind ().objectCompare (GALGAS_headerKind::class_func_noHeader (SOURCE_FILE ("unified-type-map.galgas", 222)))) COMMA_SOURCE_FILE ("unified-type-map.galgas", 222)).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioInclusions.addAssign_operation (var_typeDefinition_8383.readProperty_mHeaderFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 223)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@unifiedTypeMapEntry addHeaderFileName1'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_addHeaderFileName_31_ (const GALGAS_unifiedTypeMapEntry inObject,
                                            GALGAS_stringset & ioArgument_ioInclusions,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_unifiedTypeMapEntry temp_0 = inObject ;
  GALGAS_unifiedTypeDefinition var_typeDefinition_8739 = extensionGetter_definition (temp_0, inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 230)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_typeDefinition_8739.readProperty_isPredefined ().operator_not (SOURCE_FILE ("unified-type-map.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_1) {
      switch (var_typeDefinition_8739.readProperty_mHeaderKind ().enumValue ()) {
      case GALGAS_headerKind::kNotBuilt:
        break ;
      case GALGAS_headerKind::kEnum_noHeader:
        {
        }
        break ;
      case GALGAS_headerKind::kEnum_oneHeader:
        {
          ioArgument_ioInclusions.addAssign_operation (var_typeDefinition_8739.readProperty_mHeaderFileName ()  COMMA_SOURCE_FILE ("unified-type-map.galgas", 235)) ;
        }
        break ;
      case GALGAS_headerKind::kEnum_twoHeaders:
        {
          ioArgument_ioInclusions.addAssign_operation (var_typeDefinition_8739.readProperty_mHeaderFileName ().add_operation (GALGAS_string ("-1"), inCompiler COMMA_SOURCE_FILE ("unified-type-map.galgas", 237))  COMMA_SOURCE_FILE ("unified-type-map.galgas", 237)) ;
        }
        break ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
// @ifExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mIfExpression.printNonNullClassInstanceProperties ("mIfExpression") ;
    mProperty_mThenExpression.printNonNullClassInstanceProperties ("mThenExpression") ;
    mProperty_mElseExpression.printNonNullClassInstanceProperties ("mElseExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_ifExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_ifExpressionAST * p = (const cPtr_ifExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ifExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mIfExpression.objectCompare (p->mProperty_mIfExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mThenExpression.objectCompare (p->mProperty_mThenExpression) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mElseExpression.objectCompare (p->mProperty_mElseExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_ifExpressionAST::objectCompare (const GALGAS_ifExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST::GALGAS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::class_func_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                               const GALGAS_semanticExpressionAST & inAttribute_mIfExpression,
                                                               const GALGAS_semanticExpressionAST & inAttribute_mThenExpression,
                                                               const GALGAS_semanticExpressionAST & inAttribute_mElseExpression
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mIfExpression.isValid () && inAttribute_mThenExpression.isValid () && inAttribute_mElseExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ifExpressionAST (inAttribute_mOperatorLocation, inAttribute_mIfExpression, inAttribute_mThenExpression, inAttribute_mElseExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_ifExpressionAST::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_ifExpressionAST::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_ifExpressionAST::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                            const GALGAS_semanticExpressionAST & in_mIfExpression,
                                            const GALGAS_semanticExpressionAST & in_mThenExpression,
                                            const GALGAS_semanticExpressionAST & in_mElseExpression
                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mIfExpression (in_mIfExpression),
mProperty_mThenExpression (in_mThenExpression),
mProperty_mElseExpression (in_mElseExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ifExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mProperty_mOperatorLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST result ;
  const GALGAS_ifExpressionAST * p = (const GALGAS_ifExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifExpressionAST_2D_weak::objectCompare (const GALGAS_ifExpressionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak::GALGAS_ifExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak & GALGAS_ifExpressionAST_2D_weak::operator = (const GALGAS_ifExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak::GALGAS_ifExpressionAST_2D_weak (const GALGAS_ifExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak GALGAS_ifExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST GALGAS_ifExpressionAST_2D_weak::bang_ifExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionAST) ;
      result = GALGAS_ifExpressionAST ((cPtr_ifExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ("ifExpressionAST-weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionAST_2D_weak GALGAS_ifExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionAST_2D_weak result ;
  const GALGAS_ifExpressionAST_2D_weak * p = (const GALGAS_ifExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifExpressionForGeneration_2D_weak::objectCompare (const GALGAS_ifExpressionForGeneration_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak::GALGAS_ifExpressionForGeneration_2D_weak (void) :
GALGAS_semanticExpressionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak & GALGAS_ifExpressionForGeneration_2D_weak::operator = (const GALGAS_ifExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak::GALGAS_ifExpressionForGeneration_2D_weak (const GALGAS_ifExpressionForGeneration & inSource) :
GALGAS_semanticExpressionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak GALGAS_ifExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration GALGAS_ifExpressionForGeneration_2D_weak::bang_ifExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionForGeneration) ;
      result = GALGAS_ifExpressionForGeneration ((cPtr_ifExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration_2D_weak ("ifExpressionForGeneration-weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionForGeneration_2D_weak GALGAS_ifExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionForGeneration_2D_weak result ;
  const GALGAS_ifExpressionForGeneration_2D_weak * p = (const GALGAS_ifExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryPlusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryPlusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_unaryPlusExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_unaryPlusExpressionAST * p = (const cPtr_unaryPlusExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_unaryPlusExpressionAST::objectCompare (const GALGAS_unaryPlusExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST::GALGAS_unaryPlusExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST::GALGAS_unaryPlusExpressionAST (const cPtr_unaryPlusExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryPlusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST GALGAS_unaryPlusExpressionAST::class_func_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                             const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_unaryPlusExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryPlusExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_unaryPlusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_unaryPlusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryPlusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                          const GALGAS_semanticExpressionAST & in_mExpression
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryPlusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

void cPtr_unaryPlusExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryPlusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryPlusExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryPlusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @unaryPlusExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ("unaryPlusExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryPlusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryPlusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryPlusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST GALGAS_unaryPlusExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unaryPlusExpressionAST result ;
  const GALGAS_unaryPlusExpressionAST * p = (const GALGAS_unaryPlusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unaryPlusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryPlusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_unaryPlusExpressionAST_2D_weak::objectCompare (const GALGAS_unaryPlusExpressionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST_2D_weak::GALGAS_unaryPlusExpressionAST_2D_weak (void) :
GALGAS_semanticExpressionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST_2D_weak & GALGAS_unaryPlusExpressionAST_2D_weak::operator = (const GALGAS_unaryPlusExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST_2D_weak::GALGAS_unaryPlusExpressionAST_2D_weak (const GALGAS_unaryPlusExpressionAST & inSource) :
GALGAS_semanticExpressionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST_2D_weak GALGAS_unaryPlusExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_unaryPlusExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST GALGAS_unaryPlusExpressionAST_2D_weak::bang_unaryPlusExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_unaryPlusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryPlusExpressionAST) ;
      result = GALGAS_unaryPlusExpressionAST ((cPtr_unaryPlusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unaryPlusExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2D_weak ("unaryPlusExpressionAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryPlusExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryPlusExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryPlusExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryPlusExpressionAST_2D_weak GALGAS_unaryPlusExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_unaryPlusExpressionAST_2D_weak result ;
  const GALGAS_unaryPlusExpressionAST_2D_weak * p = (const GALGAS_unaryPlusExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unaryPlusExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryPlusExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_unaryMinusExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_unaryMinusExpressionAST * p = (const cPtr_unaryMinusExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mOperatorLocation.objectCompare (p->mProperty_mOperatorLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_unaryMinusExpressionAST::objectCompare (const GALGAS_unaryMinusExpressionAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST::GALGAS_unaryMinusExpressionAST (void) :
GALGAS_semanticExpressionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST::GALGAS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) :
GALGAS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST GALGAS_unaryMinusExpressionAST::class_func_new (const GALGAS_location & inAttribute_mOperatorLocation,
                                                                               const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionAST result ;
  if (inAttribute_mOperatorLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionAST (inAttribute_mOperatorLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_unaryMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_unaryMinusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (const GALGAS_location & in_mOperatorLocation,
                                                            const GALGAS_semanticExpressionAST & in_mExpression
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (THERE),
mProperty_mOperatorLocation (in_mOperatorLocation),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

void cPtr_unaryMinusExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryMinusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryMinusExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @unaryMinusExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ("unaryMinusExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unaryMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unaryMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unaryMinusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unaryMinusExpressionAST GALGAS_unaryMinusExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unaryMinusExpressionAST result ;
  const GALGAS_unaryMinusExpressionAST * p = (const GALGAS_unaryMinusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unaryMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

